#include "Player.h"



void Player::update() {
    sprite.setPosition(rect.getPosition());
}

void Player::movePlayer() {
    // Gravity Logic
    if (rect.getPosition().y < groundHeight && isJumping) {
        rect.move(0, gravitySpeed);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        if (moveLeft) {
            rect.move(-speed, 0);
            sprite.setTextureRect(sf::IntRect(counterWalking * 32, 32, 32, 32));
            direction = 1;
            moveLeft = true;
            moveRight = true;
            moveUp = true;
            moveDown = true;
        }
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        if (moveRight) {
            rect.move(speed, 0);
            sprite.setTextureRect(sf::IntRect(counterWalking * 32, 32 * 2, 32, 32));
            direction = 2;
            moveLeft = true;
            moveRight = true;
            moveUp = true;
            moveDown = true;
        }
    }  else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if (moveUp) {
            rect.move(0, -2 * jumpSpeed);
            isJumping = true;
            direction = 3;
            moveLeft = true;
            moveRight = true;
            moveUp = true;
            moveDown = false;
        }
    }  else if (moveDown) {
                rect.move(0, 1);
                direction = 4;
                moveLeft = true;
                moveRight = true;
                moveUp = true;
                moveDown = true;
    }

    counterWalking++;
    if (counterWalking == 2) {
        counterWalking = 0;
    }

}
















