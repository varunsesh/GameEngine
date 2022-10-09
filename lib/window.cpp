#include"window.h"


namespace sparky{ namespace graphics{
    
    Window::Window(int width, int height, char *title){
        m_Width = width;
        m_Height = height;
        m_Title = title;
        init();
    }

    void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);
    void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);

    bool Window::init() {
        
        std::cout<<"Initialising"<<std::endl;
        
        if (!glfwInit()){
            return false;
        }
        
        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
        
        
        
        for(int i = 0; i<MAX_KEYS; i++){
            this->m_Keys[i] = false;
        }
        for(int i = 0; i<MAX_BUTTONS; i++){
            this->m_Buttons[i] = false;
        }

        glfwSetWindowUserPointer(m_Window, this);
        glfwMakeContextCurrent(m_Window);
        if (!m_Window)
        {   
            glfwTerminate();
            return false;
        }
        return true;
    }

    void Window::clear()const{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

    void Window::update(){
        glfwSwapBuffers(m_Window);
        glfwGetFramebufferSize(m_Window, &m_Width, &m_Height);
        glViewport(0,0,m_Width, m_Height);
        
        glfwSetCursorPosCallback(m_Window, cursor_position_callback);
        glfwSetKeyCallback(m_Window, key_callback);
        glfwSetMouseButtonCallback(m_Window, mouse_button_callback);
        glfwPollEvents(); 
    }

    Window::~Window(){
        glfwTerminate();
    }
    

    bool Window::closed(){
        return(glfwWindowShouldClose(m_Window));
    }

    bool Window:: isKeyPressed(int key){
        return m_Keys[key];
    }

    bool Window::isMousePressed(int button){
        return m_Buttons[button];
    }

    double Window::getCursorPosX(){
        return xpos;
    }

    double Window::getCursorPosY(){
        return ypos;
    }

    void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
        Window *win = (Window*)glfwGetWindowUserPointer(window);
        win->m_Keys[key] = action !=GLFW_RELEASE;
    }

    void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){
        Window *win = (Window*)glfwGetWindowUserPointer(window);
        win->xpos = xpos;
        win->ypos = ypos;

    }

    void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
    {
        Window *win = (Window*)glfwGetWindowUserPointer(window);
        win->m_Buttons[button] = action != GLFW_RELEASE;
    }

}}