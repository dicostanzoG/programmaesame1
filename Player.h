#ifndef PROGRAMMAESAME_PLAYER_H
#define PROGRAMMAESAME_PLAYER_H

#include <iostream>
#include "Character.h"
#include "Item.h"
#include "Bullets.h"
#include "Block.h"
#include "TileMap.h"
#include <SFML/Graphics.hpp>
#include "Graphic.h"


class Player : public Character, public Graphic {

public:

    Player(float x, float y, float speed, int Psize, bool invincible, bool fire, bool bullet):
         Character(x, y, speed), size(Psize), invincible(invincible), fire(fire), bullet(bullet) {
       rect.setSize(sf::Vector2f(32, 32));
       sprite.setPosition(200, 200);
       sprite.setTextureRect(sf::IntRect(counterWalking* 32, 0, 32, 32));
   }




 /*   void setSize(int size) {
        Player::size = size;
    }

    int getSize() {
        return size;
    }

    bool isInvincible() {
        return invincible;
    }

    void setInvincible(bool invincible) {
        Player::invincible = invincible;
    }

    void setFire(bool fire) {
        Player::fire = fire;
    }

    bool getFire() {
        return fire;
    }

    bool CouldBullet() const {
        return bullet;
    }

    void setBullet(bool bullet) {
        Player::bullet = bullet;
    }

    bool pickItem(bool donut, bool pepper, bool coffee) {
        bool Pickupped = false;

        if (donut) {
            size = 2;
            bullet = true;
            Pickupped = true;
        }

        if (pepper) {
            invincible = true;
            fire = true;
            Pickupped = true;
        }

        if (coffee) {
            speed *= 2;
            Pickupped = true;
        }
        return Pickupped;
    }

    void Jump(float x, float y) {

    }

    const sf::Sprite &Player::getDonuts() const {
        return Donuts;
    }

    void Player::setDonuts(const sf::Sprite &Donuts) {
        Player::Donuts = Donuts;
    }

    const sf::Sprite &Player::getCoffee() const {
        return Coffee;
    }

    void Player::setCoffee(const sf::Sprite &Coffee) {
        Player::Coffee = Coffee;
    }

    const sf::Sprite &getFireBall() const {
        return Fireball;
    }

    void setFireball(const sf::Sprite &FireBall) {
        Player::Fireball = Fireball;
    }*/


    void update();
    void movePlayer();
    bool moveLeft = true;
    bool moveRight = true;
    bool moveUp = true;
    bool moveDown = true;
    // Gravity
    const float jumpSpeed = 8;
    bool isJumping = false;


protected:

    int size;
    bool invincible;
    bool fire;
    bool bullet;
    sf::Sprite Donuts;
    sf::Sprite Coffee;
    sf::Sprite Pepper;
    sf::Sprite Fireball;

};




#endif //PROGRAMMAESAME_PLAYER_H
