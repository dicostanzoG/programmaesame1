#include <iostream>
#include <vector>
#include "Player.h"
#include "Graphic.h"
#include "Character.h"
#include "Enemy.h"
#include "Bullets.h"
#include "TileMap.h"
#include "Block.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include "Graphic.h"
using namespace std;



int main() {
    int counter;
    Graphic graphic;


    sf::RenderWindow window(sf::VideoMode(800, 500), "VIDEOGAME!");
    graphic.loadTextures();
    //view
    sf::View view1(sf::FloatRect(200, 200, 300, 200));
    view1.setSize(sf::Vector2f(window.getSize().x, window.getSize().y));
    view1.setCenter(sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2));
    window.setView(view1);


    // Load a sprite to display
    sf::Texture textureBackground;
    if (!textureBackground.loadFromFile("../res/Background1.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite spriteBackground(textureBackground);

    //Load spritePlayer to display
    sf::Texture texturePlayer;
    if (!texturePlayer.loadFromFile("../res/player.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite spritePlayer(texturePlayer);
    spritePlayer.setPosition(window.getSize().x/2, window.getSize().y/2);
    spritePlayer.setTextureRect(sf::IntRect(0, 0, 34, 34));

    Player player(0, 0, 4, 1, false, false, false);
    player.sprite.setTexture(texturePlayer);

    //Load music
    sf::Music music;
    if (!music.openFromFile("../res/supermario.ogg")) {
        return 0;
    }
    music.play();

    // create the tilemap from the level definition
    TileMap mapBackground;
    if (!mapBackground.load("../res/tileset1.png", sf::Vector2u(48, 48), graphic.levelBackground, 100, 9)) {
        return -1;
    }

    // block tilemap
    TileMap mapVisible;
    if (!mapVisible.load("../res/tileset2.png", sf::Vector2u(32, 32), graphic.levelVisible, 17, 19)) {
        return -1;
    }

    //Draw fireball
    sf::Texture textureFireball;
    if (!textureFireball.loadFromFile("../res/fire1.png")) {
        return EXIT_FAILURE;
    }
    Bullets bullets;
    //Bullets vector array
    vector<Bullets>::const_iterator iter;
    vector<Bullets> bulletsArray;
    bullets.sprite.setTexture(textureFireball);


    Enemy enemy1(0, 0, 2, false, false);
    //Enemy vector array
    vector<Enemy>::const_iterator iter2;
    vector<Enemy> enemy1Array;
    enemy1.sprite.setPosition(0, 337);
    enemy1Array.push_back(enemy1);
    enemy1.sprite.setTexture(graphic.textureEnemy1);
    enemy1.sprite.setTextureRect(sf::IntRect(48, 48, 48, 48));

    //Block vector array
    Block block;
    vector<Block>::const_iterator iter1;
    vector<Block> blockArray;
    block.rect.setPosition(0, 385);
    blockArray.push_back(block);

    //horizontal block
    counter = 0;
    while (counter < 100) {
        block.rect.setPosition(50 * counter, 385);
        blockArray.push_back(block);
        counter++;
    }

    //game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // draw the map

        window.clear();

       // window.draw(spriteBackground);

        //Draw fireball
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            bullets.rect.setPosition(player.rect.getPosition());
            bullets.direction = player.direction;
            bulletsArray.push_back(bullets);
        }
        counter = 0;
        for (iter = bulletsArray.begin(); iter != bulletsArray.end(); iter++) {
            bulletsArray[counter].update();
            window.draw(bulletsArray[counter].sprite);
            counter++;
        }

        //Draw enemies
        enemy1.rect.setPosition(player.rect.getPosition());
        enemy1Array.push_back(enemy1);
        graphic.setEnemies();
        counter = 0;
        for (iter2 = enemy1Array.begin(); iter2 != enemy1Array.end(); iter2++) {
            window.draw(enemy1Array[counter].sprite);
            counter++;
        }
        enemy1.Movement();

        //Player collides block
        counter = 0;
        for (iter1 = blockArray.begin(); iter1 != blockArray.end(); iter1++) {
            if (player.rect.getGlobalBounds().intersects(blockArray[counter].rect.getGlobalBounds())) {
                //Hit block
                if (player.direction == 1) {//left
                    player.moveLeft = false;
                    player.rect.move(1, 0);
                }
                else if (player.direction == 2) {//right
                    player.moveRight = false;
                    player.rect.move(-1, 0);
                }
                else if (player.direction == 3) {//up
                    player.moveUp = false;
                    player.rect.move(0, 1);
                }
                else if(player.direction == 4) {//down
                    player.moveDown = false;
                    player.rect.move(0, -1);
                 }
            }
            counter++;


        }

        //Draw block
        counter = 0;
        for (iter1 = blockArray.begin(); iter1 != blockArray.end(); iter1++) {
            window.draw(blockArray[counter].rect);
            counter++;
        }

        //update player
        player.update();
        player.movePlayer();

        //player view
        window.setView(view1);
        view1.setCenter(player.rect.getPosition());

        // draw block tilemap
        window.draw(mapVisible);
        window.draw(mapBackground);

        //draw player
        window.draw(player.sprite);
        window.display();
    }

        return 0;
}



