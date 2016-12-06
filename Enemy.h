//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_ENEMY_H
#define PROGRAMMAESAME_ENEMY_H

#include "Character.h"

class Enemy : virtual public Character {
public:
    Enemy(float x, float y, float speed, bool boss = false, bool fly = false) : Character(x, y, speed), isBoss(boss),
                                                                                isFlying(fly) {}

    ~Enemy() {}

    bool isIsBoss() const {
        return isBoss;
    }

    void setIsBoss(bool isBoss) {
        Enemy::isBoss = isBoss;
    }

    bool isIsFlying() const {
        return isFlying;
    }

    void setIsFlying(bool isFlying) {
        Enemy::isFlying = isFlying;
    }

private:
    bool isBoss;
    bool isFlying;

};


#endif //PROGRAMMAESAME_ENEMY_H
