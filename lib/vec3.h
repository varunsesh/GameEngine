#pragma once
#include<iostream>


namespace sparky{namespace maths{

    struct vec3{
    float x, y, z;

    vec3(const float x, const float y, const float z);

    vec3 add(vec3 &other);
    vec3 subtract(vec3 &other);
    vec3 multiply(vec3 &other);
    vec3 divide(vec3 &other);

    vec3 operator+(vec3 &right);
    vec3 operator-(vec3 &right);
    vec3 operator*(vec3 &right);
    vec3 operator/(vec3 &right);
    
    friend std::ostream &operator<<(std::ostream &out, vec3 &vector);


    };

}
}
