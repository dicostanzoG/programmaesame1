#include "gtest/gtest.h"
#include "../Enemy.h"

TEST(EnemyTest, Constructor){
    Enemy Bowser(10, 15, 1, true, false);
    ASSERT_EQ(10, Bowser.getXPosition());
    ASSERT_EQ(15, Bowser.getYPosition());
    ASSERT_EQ(1, Bowser.getSpeed());
    ASSERT_TRUE(Bowser.isIsBoss());
    ASSERT_FALSE(Bowser.isIsFlying());
}
