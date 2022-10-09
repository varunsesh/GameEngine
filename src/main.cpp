#include<iostream>
#include<stdlib.h>
#include"window.h"

#define LOG(x) std::cout<<x<<std::endl



int main(){
    using namespace sparky;
    using namespace graphics;
    
    Window window = Window(800,600, "Engine Window");
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
    double x, y;
    
    while(!window.closed()){
        window.clear();
        x = window.getCursorPosX();
        y = window.getCursorPosY();
        std::cout<<"(" << x << ", " <<y<<")"<<std::endl;
        if(window.isKeyPressed(GLFW_KEY_A) || window.isMousePressed(GLFW_MOUSE_BUTTON_LEFT)){
            std::cout<<"Pressed!!"<<std::endl;
        }
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glEnd();
        window.update();
    }
    

    return 0;
}