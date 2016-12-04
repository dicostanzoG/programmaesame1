//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_BULLETS_H
#define PROGRAMMAESAME_BULLETS_H

#include "Character.h"
#include <SFML/Graphics.hpp>

class Bullets {
public:

    void setXpos(float x_bullet){
        Bullets :: x_bullet = x_bullet;
    }

    int getDirection_b() const {
        return direction_b;
    }

    void setDirection_b(int direction_b) {
        Bullets::direction_b = direction_b;
    }

    float getXpos(){
        return x_bullet;
    }

    void setYpos(float y_bullet){
        Bullets :: y_bullet = y_bullet;
    }

    float getYpos(){
        return y_bullet;

    }


private:
    int direction_b;
    float x_bullet;
    float y_bullet;

};


#endif //PROGRAMMAESAME_BULLETS_H
