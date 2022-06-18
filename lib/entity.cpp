#include"entity.h"

Entity::Entity(int x, int y){
    this->x = x;
    this->y = y;
}

int Entity::getX() const {
    return this->x;
}

int Entity::getY() const {
    return this->y;
}
