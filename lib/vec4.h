#pragma once
#include<iostream>


namespace sparky{namespace maths{

    struct vec4{
    float x, y, z, w;

    vec4(const float x, const float y, const float z, const float w);

    vec4 add(vec4 &other);
    vec4 subtract(vec4 &other);
    vec4 multiply(vec4 &other);
    vec4 divide(vec4 &other);

    vec4 operator+(vec4 &right);
    vec4 operator-(vec4 &right);
    vec4 operator*(vec4 &right);
    vec4 operator/(vec4 &right);
    
    friend std::ostream &operator<<(std::ostream &out, vec4 &vector);


    };

}
}
