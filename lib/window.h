#pragma once
//#include"glad/glad.h"
#include<GL/gl.h>
#include"GLFW/glfw3.h"

#include<iostream>

namespace sparky{namespace graphics{
    class Window{
        private:
            int m_Width, m_Height;
            char *m_Title;
            bool m_Close = false;
            GLFWwindow *m_Window;
        public:
            Window(int width, int height, char* title);
            ~Window();
            void update() ;
            bool closed();
            void clear() const;
            inline int getWidth(){return m_Width;}
            inline int getHeight(){return m_Height;}
        private:
            bool init();
            

    };
}}