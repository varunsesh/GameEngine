#include"vec2.h"

namespace sparky{namespace maths{

        vec2::vec2(const float x, const float y){
            this->x = x;
            this->y = y;
        }

        std::ostream &operator<<(std::ostream &out, vec2 &vector){
            out<<"vector2(";
            out<<vector.x<<", "<<vector.y<<")"<<std::endl;

        }



    }   
}