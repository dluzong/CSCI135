#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: makeVector"){
    CHECK(makeVector(5) == std::vector<int> {0,1,2,3,4});
    CHECK(makeVector(10) == std::vector<int> {0,1,2,3,4,5,6,7,8,9});
}

TEST_CASE("Task B: goodVibes"){
    CHECK(goodVibes(std::vector<int>{1,2,-1,3,4,-1,6}) == std::vector<int>{1,2,3,4,6});
    CHECK(goodVibes(std::vector<int>{1,2,-3,4,-5,}) == std::vector<int>{1,2,4});
}

TEST_CASE("Task C: gogeta"){
    std::vector<int> v1 {1,2,3};
    std::vector<int> v2 {4,5};
    gogeta(v1, v2);
    CHECK(v1 == std::vector<int>{1,2,3,4,5});
    CHECK(v2 == std::vector<int>{});
}

TEST_CASE("Task D, sumPairWise"){
    CHECK(sumPairWise(std::vector<int>{1,2,3}, std::vector<int>{4,5}) == std::vector<int>{5,7,3});
    CHECK(sumPairWise(std::vector<int>{}, std::vector<int>{}) == std::vector<int>{});
}
