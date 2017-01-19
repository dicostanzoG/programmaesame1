#ifndef PROGRAMMAESAME_BLOCK_H
#define PROGRAMMAESAME_BLOCK_H

#include "Item.h"
#include "Graphic.h"

class Block: public Graphic {

public:
    Block(){
        rect.setPosition(10, 10);
        rect.setSize(sf::Vector2f(50, 28));
        rect.setFillColor(sf::Color::Magenta);

    }







    /*  Block (float x=0, float y=0, bool destr=false, bool empty=false):
                 x_block(x), y_block(y),  destroyed(destr), empty(empty) {

    }
*/

    bool DropItem(bool empty){
        Block::empty = empty;
    }

    void setPos_X(float x_block){
        Block::x_block = x_block;
    }

    float getPos_X(){
        return x_block;
    }

    void setPos_Y(float y_block){
        Block::y_block = y_block;
    }

    float getPos_Y(){
        return y_block;
    }

private:
    bool destroyed;
    bool empty;
    float x_block;
    float y_block;
};


#endif //PROGRAMMAESAME_BLOCK_H
