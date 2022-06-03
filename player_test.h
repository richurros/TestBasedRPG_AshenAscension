#ifndef __PLAYER_TEST_H__
#define __PLAYER_TEST_H__

#include "gtest/gtest.h"

TEST(PlayerTest, attack) {
    Player attacker = Player();
    attacker.setName("");
    attacker.setMaxHealth(0);
    attacker.setAtk(20);
    attacker.setDefense(0);
    attacker.setSpd(0);
    attacker.setBoolDef(false);
    attacker.setDmgTaken(0);
    attacker.setCombatPt(0);
    Room r1 = Room();
    attacker.move(r1);
    Player target = Player();
    Room r2 = Room();
    target.move(r2);
    target.setName("target");
    target.setMaxHealth(100);
    target.setAtk(0);
    target.setDefense(10);
    target.setSpd(0);
    target.setDmgTaken(0);
    target.setBoolDef(false);
    target.setCombatPt(0);
    attacker.attack(target);  // [ (50 - 10) / 50 ] * (2 * 20) = 32
    EXPECT_EQ(target.getDmgTaken(), 32);
}

TEST(PlayerTest, attackWithDefense) {
    Player attacker = Player();
    attacker.setName("");
    attacker.setMaxHealth(0);
    attacker.setAtk(20);
    attacker.setDefense(0);
    attacker.setSpd(0);
    attacker.setBoolDef(false);
    attacker.setDmgTaken(0);
    attacker.setCombatPt(0);
    Room r1 = Room();
    attacker.move(r1);
    Player target = Player();
    Room r2 = Room();
    target.move(r2);
    target.setName("target");
    target.setMaxHealth(100);
    target.setAtk(0);
    target.setDefense(10);
    target.setSpd(0);
    target.setDmgTaken(0);
    target.setBoolDef(true);
    target.setCombatPt(0);
    attacker.attack(target);  // [ (50 - 10) / 50 ] * (2 * 20) - 10  = 32
    EXPECT_EQ(target.getDmgTaken(), 22);
}


TEST(PlayerTest, GetAndSetName) {
    Player player = Player();
    player.setName("Yor");
    EXPECT_EQ(player.getName(), "Yor");
}

TEST(PlayerTest, GetAndSetMaxHealth) {
    Player player = Player();
    player.setMaxHealth(10000);
    EXPECT_EQ(player.getMaxHealth(), 10000);
}

TEST(PlayerTest, GetAndSetAtk) {
    Player player = Player();
    player.setAtk(50);
    EXPECT_EQ(player.getAtk(), 50);
}

TEST(PlayerTest, GetAndSetDefense) {
    Player player = Player();
    player.setDefense(5);
    EXPECT_EQ(player.getDefense(), 5);
}

TEST(PlayerTest, GetAndSetSpd) {
    Player player = Player();
    player.setSpd(1);
    EXPECT_EQ(player.getSpd(), 1);
}

TEST(PlayerTest, GetAndSetBoolDef) {
    Player player = Player();
    player.setBoolDef(false);
    EXPECT_EQ(player.getBoolDef(), false);
}

TEST(PlayerTest, GetAndSetDmgTaken) {
    Player player = Player();
    player.setDmgTaken(987);
    EXPECT_EQ(player.getDmgTaken(), 987);
}

TEST(PlayerTest, GetAndSetCombatPt) {
    Player player = Player();
    player.setSpd(15);
    player.setCombatPt(1+(player.getSpd()/5));
    EXPECT_EQ(player.getcombatPt(), 3);
}

TEST(PlayerTest, EquipArmor) {
    Player player = Player();
    player.setDefense(20);
    player.eqArmor(5);
    player.eqArmor(8);
    EXPECT_EQ(player.getDefense(), 28);
}

TEST(PlayerTest, EquipWeapon) {
    Player player = Player();
    player.setAtk(35);
    player.eqWeapon(2);
    player.eqWeapon(11);
    EXPECT_EQ(player.getAtk(), 46);
}

TEST(PlayerTest, GetAndSetType) {
    Player player = Player();
    player.setType("BRUTE");
    EXPECT_EQ(player.getType(), "BRUTE");
}

#endif

