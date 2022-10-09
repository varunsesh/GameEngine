#include"vec2.h"

namespace sparky{namespace maths{

        vec2::vec2(const float x, const float y){
            this->x = x;
            this->y = y;
        }

        vec2 vec2::add(vec2 &other){
            vec2 value = *this;
            value.x += other.x;
            value.y += other.y;
            return value;
        }

        vec2 vec2::subtract(vec2 &other){
            vec2 value = *this;
            value.x -= other.x;
            value.y -= other.y;
            return value;
        }

        vec2 vec2::multiply(vec2 &other){
            vec2 value = *this;
            value.x *= other.x;
            value.y *= other.y;
            return value;
        }

        vec2 vec2::divide(vec2 &other){
            vec2 value = *this;
            value.x /= other.x;
            value.y /= other.y;
            return value;
        }


        std::ostream &operator<<(std::ostream &out, vec2 &vector){
            out<<"vector2(";
            out<<vector.x<<", "<<vector.y<<")"<<std::endl;

        }

        vec2 vec2::operator+(vec2 &right){
            vec2 value = *this;
            return value.add(right);
        }

        vec2 vec2::operator-(vec2 &right){
            vec2 value = *this;
            return value.subtract(right);
        }

        vec2 vec2::operator*(vec2 &right){
            vec2 value = *this;
            return value.multiply(right);
        }

        vec2 vec2::operator/(vec2 &right){
            vec2 value = *this;
            return value.divide(right);
        }




    }   
}