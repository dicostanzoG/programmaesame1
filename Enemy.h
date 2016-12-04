//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_ENEMY_H
#define PROGRAMMAESAME_ENEMY_H
#include "Character.h"
#include <SFML/Graphics.hpp>


class Enemy : virtual public Character {

private:
    bool isBoss;
    bool isFlying;

};


#endif //PROGRAMMAESAME_ENEMY_H
