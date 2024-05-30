#include "pch.h"
#include "../PrimeFactor/PrimeFactor.cpp"
#include <vector>
using namespace std;

TEST(PrimFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}