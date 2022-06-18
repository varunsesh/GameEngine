#include"window.h"


namespace sparky{ namespace graphics{
    Window::Window(int width, int height, char *title){
        m_Width = width;
        m_Height = height;
        m_Title = title;
        init();
    }

    bool Window::init() {
        std::cout<<"Initialising"<<std::endl;
        if (!glfwInit()){
            return false;
        }
        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
        
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
        glfwPollEvents(); 
    }

    Window::~Window(){
        glfwTerminate();
    }
    

    bool Window::closed(){
        return(glfwWindowShouldClose(m_Window));
    }


}}