#pragma once
#include<iostream>


namespace sparky{namespace maths{

    struct vec2{
    float x, y;

    vec2(const float x, const float y);

    vec2 add(vec2 &other);
    vec2 subtract(vec2 &other);
    vec2 multiply(vec2 &other);
    vec2 divide(vec2 &other);

    vec2 operator+(vec2 &right);
    vec2 operator-(vec2 &right);
    vec2 operator*(vec2 &right);
    vec2 operator/(vec2 &right);
    
    friend std::ostream &operator<<(std::ostream &out, vec2 &vector);


    };

}
}
