#pragma once
#include<GL/gl.h>
#include<GLFW/glfw3.h>

#include<iostream>

#define MAX_KEYS    1024
#define MAX_BUTTONS 32


namespace sparky{namespace graphics{
    class Window{
        private:
            int m_Width, m_Height;
            char *m_Title;
            bool m_Close = false;
            GLFWwindow *m_Window;

            bool m_Keys[MAX_KEYS];
            bool m_Buttons[MAX_BUTTONS];
            
        public:
            Window(int width, int height, char* title);
            ~Window();
            void update() ;
            bool closed();
            void clear() const;
            inline int getWidth(){return m_Width;}
            inline int getHeight(){return m_Height;}
            bool isKeyPressed(int key);
      
        private:
            bool init();
            friend void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
            friend void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);
            

            

    };
}}