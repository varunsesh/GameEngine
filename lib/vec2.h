#pragma once
#include<iostream>


namespace sparky{namespace maths{

    struct vec2{
    float x, y;

    vec2(const float x, const float y);

    friend vec2 add(vec2 left, vec2 &other);
    friend vec2 subtract(vec2 left, vec2 &other);
    friend vec2 multiply(vec2 left, vec2 &other);
    friend vec2 divide(vec2 left, vec2 &other);

    friend std::ostream &operator<<(std::ostream &out, vec2 &vector);


    };

}
}
