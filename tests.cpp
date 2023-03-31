#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A, length"){
    Coord3D p1 = {10, 20, 30};
    Coord3D p2 = {3,4,5};
    CHECK(length(&p1) == doctest::Approx(37.4166));
    CHECK(length(&p2) == doctest::Approx(7.0711));
}

TEST_CASE("Task B, fartherFromOrigin"){
    Coord3D p1 = {10, 20, 30};
    Coord3D p2 = {-20, 21, -22};
    Coord3D p3 = {3,4,5};
    Coord3D *farther = fartherFromOrigin(&p1,&p2);
    CHECK(farther == &p1);
    farther = fartherFromOrigin(&p3, &p1);
    CHECK(farther == &p1);
}

TEST_CASE("Task C, move"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
}

TEST_CASE("Task E, createCoord3D & deleteCoord3D"){
    Coord3D *ppos = createCoord3D(10,20,30); //position
    CHECK(ppos->x == 10);
    CHECK(ppos->y == 20);
    CHECK(ppos->z == 30);
    Coord3D *pvel = createCoord3D(5.5,-1.4,7.77); //velocity
    CHECK(pvel->x == 5.5);
    CHECK(pvel->y == -1.4);
    CHECK(pvel->z == 7.77);
}
