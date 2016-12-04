//
// Created by noble on 29/11/2016.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#ifndef PROGRAMMAESAME_CHARACTER_H
#define PROGRAMMAESAME_CHARACTER_H


class Character {

public:
    Character();
    Character(float x, float y, float speed);

    virtual void move(float x, float y);

    virtual ~Character();

    float getXPosition() {
        return x;
    }

    float getYPosition() {
        return y;
    }

    void setXPosition(float x) {
        Character :: x = x;

    }

    void  setYPosition(float y){
         Character :: y = y;
    }

    float  getSpeed(){
      return speed;
    }

    void  setSpeed(float speed){
      Character::speed = speed;
    }


    int getDirection() {
        return direction;
    }

    void setDirection(int direction) {
        Character::direction = direction;
    }

protected:
    float speed;
    float x;
    float y;
    int direction;
};


#endif //PROGRAMMAESAME_CHARACTER_H
