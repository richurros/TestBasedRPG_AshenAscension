#include "gtest/gtest.h"

//#include "inv_test.h"
#include "item.h"
//#include "player.h"
#include "weapon.h"
#include "armor.h"

//Weapon Tests
TEST(WeaponTest, getName) {
    Weapon *weapon = new Weapon("weaponName", "desc", 1, 10);
    EXPECT_EQ(weapon->getName(), "weaponName");
    delete weapon;
}

TEST(WeaponTest, getDesc) {
    Weapon *weapon = new Weapon("weaponName", "desc", 1, 10);
    EXPECT_EQ(weapon->getDesc(), "desc");
    delete weapon;
}

TEST(WeaponTest, getItemCount) {
    Weapon *weapon = new Weapon("weaponName", "desc", 1, 10);
    EXPECT_EQ(weapon->getItemCount(), 1);
    delete weapon;
}

TEST(WeaponTest, getAttack) {
    Weapon *weapon = new Weapon("weaponName", "desc", 1, 10);
    EXPECT_EQ(weapon->getAttack(), 10);
    delete weapon;
}

TEST(WeaponTest, setAttack) {
    Weapon *weapon = new Weapon("weaponName", "desc", 1, 10);
    weapon->setAttack(8);
    EXPECT_EQ(weapon->getAttack(), 8);
    delete weapon;
}
//----------------------------------------------------------------
//
//Armor Tests
TEST(ArmorTest, getName) {
    Armor *armor = new Armor("armorName", "desc", 1, 10);
    EXPECT_EQ(armor->getName(), "armorName");
    delete armor;
}
TEST(ArmorTest, getDesc) {
    Armor *armor = new Armor("armorName", "desc", 1, 10);
    EXPECT_EQ(armor->getDesc(), "desc");
    delete armor;
}

TEST(ArmorTest, getItemCount) {
    Armor *armor = new Armor("armorName", "desc", 1, 10);
    EXPECT_EQ(armor->getItemCount(), 1);
    delete armor;
}

TEST(ArmorTest, getDefense) {
    Armor *armor = new Armor("armorName", "desc", 1, 10);
    EXPECT_EQ(armor->getDefense(), 10);
    delete armor;
}

TEST(ArmorTest, setDefense) {
    Armor *armor = new Armor("armorName", "desc", 1, 10);
    armor->setDefense(8);
    EXPECT_EQ(armor->getDefense(), 8);
    delete armor;
}
//----------------------------------------------------------------
//

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

