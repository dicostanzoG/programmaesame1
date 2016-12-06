#include "gtest/gtest.h"
#include "../Player.h"

TEST(PlayerTest, Constructor){
    Player mario(0, 0, 3, 1, false, false, true);
    ASSERT_EQ(0, mario.getXPosition());
    ASSERT_EQ(0, mario.getYPosition());
    ASSERT_EQ(3, mario.getSpeed());
    ASSERT_EQ(1, mario.getSize());
    ASSERT_FALSE(mario.isInvincible());
    ASSERT_FALSE(mario.getFire());
    ASSERT_TRUE(mario.CouldBullet());
}