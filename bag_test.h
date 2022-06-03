#ifndef __BAG_TEST_H__
#define __BAG_TEST_H__

#include "gtest/gtest.h"

#include "bag.h"
#include "weapon.h"
#include "armor.h"
#include "item.h"

using namespace std;

TEST(BagTest, TestName) {
	Bag* b1 = new Bag("Sample Bag (Bag)", "Sample Desc", 1);
	EXPECT_EQ(b1->getName(), "Sample Bag (Bag)");
	delete b1;
}

TEST(BagTest, TestDesc) {
	Bag* b1 = new Bag("Sample Bag (Bag)", "Sample Desc", 1);
	EXPECT_EQ(b1->getDesc(), "Sample Desc");
	delete b1;
}

TEST(BagTest, TestCount) {
	Bag* b1 = new Bag("Sample Bag (Bag)", "Sample Desc", 1);
	EXPECT_EQ(b1->getItemCount(), 1);
	delete b1;
}



#endif //__BAG_TEST_H__
