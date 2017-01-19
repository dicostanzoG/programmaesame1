#include <iostream>
#include <SFML/Graphics.hpp>
#ifndef PROGRAMMAESAME_CHARACTER_H
#define PROGRAMMAESAME_CHARACTER_H


class Character {

public:
    int direction;
    int counterWalking = 0;
    int counter = 0;
    const int groundHeight = 350;//Gravity
    const float gravitySpeed = 5;//Gravity

    Character(float x, float y, float speed);

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

};


#endif //PROGRAMMAESAME_CHARACTER_H
