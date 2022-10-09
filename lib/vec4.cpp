#include"vec4.h"

namespace sparky{namespace maths{

        vec4::vec4(const float x, const float y, const float z, const float w){
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
        }

        vec4 vec4::add(vec4 &other){
            vec4 value = *this;
            value.x += other.x;
            value.y += other.y;
            value.z += other.z;
            value.w += other.w;
            return value;
        }

        vec4 vec4::subtract(vec4 &other){
            vec4 value = *this;
            value.x -= other.x;
            value.y -= other.y;
            value.z -= other.z;
            value.w -= other.w;
            return value;
        }

        vec4 vec4::multiply(vec4 &other){
            vec4 value = *this;
            value.x *= other.x;
            value.y *= other.y;
            value.z *= other.z;
            value.w *= other.w;
            return value;
        }

        vec4 vec4::divide(vec4 &other){
            vec4 value = *this;
            value.x /= other.x;
            value.y /= other.y;
            value.z /= other.z;
            value.w /= other.w;
            return value;
        }


        std::ostream &operator<<(std::ostream &out, vec4 &vector){
            out<<"vector4(";
            out<<vector.x<<", "<<vector.y<<", "<< vector.z <<", "<<vector.w<<")"<<std::endl;

        }

        vec4 vec4::operator+(vec4 &right){
            vec4 value = *this;
            return value.add(right);
        }

        vec4 vec4::operator-(vec4 &right){
            vec4 value = *this;
            return value.subtract(right);
        }

        vec4 vec4::operator*(vec4 &right){
            vec4 value = *this;
            return value.multiply(right);
        }

        vec4 vec4::operator/(vec4 &right){
            vec4 value = *this;
            return value.divide(right);
        }




    }   
}