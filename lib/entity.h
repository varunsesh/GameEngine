#pragma once


class Entity{
    int x, y;
    public:
        Entity(int x = 0, int y = 0);

        virtual int getX() const ;
        virtual int getY() const ;

};