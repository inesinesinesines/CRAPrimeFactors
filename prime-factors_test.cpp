#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;
class PrimeFixtures : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixtures, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixtures, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}