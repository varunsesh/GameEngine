#include"vec3.h"

namespace sparky{namespace maths{

        vec3::vec3(const float x, const float y, const float z){
            this->x = x;
            this->y = y;
            this->z = z;
        }

        vec3 vec3::add(vec3 &other){
            vec3 value = *this;
            value.x += other.x;
            value.y += other.y;
            value.z += other.z;
            return value;
        }

        vec3 vec3::subtract(vec3 &other){
            vec3 value = *this;
            value.x -= other.x;
            value.y -= other.y;
            value.z -= other.z;
            return value;
        }

        vec3 vec3::multiply(vec3 &other){
            vec3 value = *this;
            value.x *= other.x;
            value.y *= other.y;
            value.z *= other.z;
            return value;
        }

        vec3 vec3::divide(vec3 &other){
            vec3 value = *this;
            value.x /= other.x;
            value.y /= other.y;
            value.z /= other.z;
            return value;
        }


        std::ostream &operator<<(std::ostream &out, vec3 &vector){
            out<<"vector3(";
            out<<vector.x<<", "<<vector.y<<", "<< vector.z <<")"<<std::endl;

        }

        vec3 vec3::operator+(vec3 &right){
            vec3 value = *this;
            return value.add(right);
        }

        vec3 vec3::operator-(vec3 &right){
            vec3 value = *this;
            return value.subtract(right);
        }

        vec3 vec3::operator*(vec3 &right){
            vec3 value = *this;
            return value.multiply(right);
        }

        vec3 vec3::operator/(vec3 &right){
            vec3 value = *this;
            return value.divide(right);
        }




    }   
}