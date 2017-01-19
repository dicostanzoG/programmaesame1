#ifndef PROGRAMMAESAME_BULLETS_H
#define PROGRAMMAESAME_BULLETS_H

#include "Character.h"
#include "Graphic.h"
//FireBall
class Bullets : public Graphic {
public:
    int direction;

    Bullets ();

    void update();

private:

    int movementSpeed = 3;


};


#endif //PROGRAMMAESAME_BULLETS_H
