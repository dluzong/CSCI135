#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"

Profile p1("marco", "Marco");
Profile p2("tarma1", "Tarma Roving");

TEST_CASE("Task A: getting username and full name from a profile"){
    
    CHECK(p1.getUsername() == "marco");
    CHECK(p1.getFullName() == "Marco (@marco)");

    CHECK(p2.getUsername() == "tarma1");
    CHECK(p2.getFullName() == "Tarma Roving (@tarma1)");
}

TEST_CASE("Task A: changing display name"){
    p1.setDisplayName("Marco Rossi");
    CHECK(p1.getUsername() == "marco");
    CHECK(p1.getFullName() == "Marco Rossi (@marco)");
    
    p2.setDisplayName("Tarma");
    CHECK(p2.getUsername() == "tarma1");
    CHECK(p2.getFullName() == "Tarma (@tarma1)");
}

TEST_CASE("Task B: addUser"){
    Network nw;
    CHECK(nw.addUser("mario", "Mario") == 1);
    CHECK(nw.addUser("luigi", "Luigi") == 1);

    CHECK(nw.addUser("mario", "Mario2") == 0);
    CHECK(nw.addUser("mario 2", "Mario2") == 0);
    CHECK(nw.addUser("mario-2", "Mario2") == 0);
}

TEST_CASE("Task C: following"){
    Network net;
    CHECK(net.addUser("mario", "Mario") == true);
    CHECK(net.addUser("luigi", "Luigi") == true);
    CHECK(net.addUser("yoshi", "Yoshi") == true);
    
    CHECK(net.follow("mario", "luigi") == true);
    CHECK(net.follow("mario", "yoshi") == true);
    CHECK(net.follow("luigi", "mario") == true);
    CHECK(net.follow("luigi", "yoshi") == true);
    CHECK(net.follow("yoshi", "mario") == true);
    CHECK(net.follow("yoshi", "luigi") == true);



}
 