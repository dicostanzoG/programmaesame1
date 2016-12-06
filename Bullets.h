#ifndef PROGRAMMAESAME_BULLETS_H
#define PROGRAMMAESAME_BULLETS_H

#include "Character.h"

class Bullets {
public:

    Bullets(int dir=0, int x=0, int y=0): direction_b(dir), x_bullet(x), y_bullet(y) {}
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
