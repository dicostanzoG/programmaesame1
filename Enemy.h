#ifndef PROGRAMMAESAME_ENEMY_H
#define PROGRAMMAESAME_ENEMY_H

#include <SFML/Graphics/Sprite.hpp>
#include "Character.h"
#include "Graphic.h"


class Enemy : public Character, public Graphic {
public:

    Enemy(float x, float y, float speed, bool boss = false, bool fly = false) : Character(x, y, speed), isBoss(boss),
                                                                                isFlying(fly) {
        rect.setSize(sf::Vector2f(32, 32));
        sprite.setPosition(200, 200);
    }

    void Movement();
    int movementLength = 100;

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
