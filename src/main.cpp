#include<iostream>
#include<stdlib.h>
#include "entity.h"
#include"window.h"

#define LOG(x) std::cout<<x<<std::endl



int main(){
    using namespace sparky;
    using namespace graphics;
    
    Window window = Window(800,600, "Engine Window");
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

    while(!window.closed()){
        window.clear();
        if(window.isKeyPressed(GLFW_KEY_A)){
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