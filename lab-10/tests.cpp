#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

TEST_CASE("Task A, Minutes since Midnight"){
    CHECK(minutesSinceMidnight({6, 30}) == 390);
    CHECK(minutesSinceMidnight({10, 30}) == 630);
}

TEST_CASE("Task A, Minutes Until"){
    CHECK(minutesUntil({10, 30}, {12, 45}) == 135);
    CHECK(minutesUntil({10, 30}, {12, 30}) == 120);
}

TEST_CASE("Task B, Add Minutes"){
    CHECK(addMinutes({10, 30}, 190).m == 40);
    CHECK(addMinutes({10, 30}, 60).m == 30);
}

TEST_CASE("Task C, Get Time Slot"){
    CHECK(getTimeSlot({{"Back to the Future", COMEDY, 116}, {9, 15}}) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
    CHECK(getTimeSlot({{"Black Panther", THRILLER, 134}, {12, 15}}) == "Black Panther THRILLER (134 min) [starts at 12:15, ends by 14:29]");
}

TEST_CASE("Task D, Schedule After"){
    CHECK(getTimeSlot(scheduleAfter({{"Back to the Future", COMEDY, 116}, {9, 15}}, {"Black Panther", THRILLER, 134})) == "Black Panther THRILLER (134 min) [starts at 11:11, ends by 13:25]");
    CHECK(getTimeSlot(scheduleAfter({{"Black Panther", THRILLER, 134}, {12, 15}}, {"Titanic", ROMANCE, 194})) == "Titanic ROMANCE (194 min) [starts at 14:29, ends by 17:43]");    
}

TEST_CASE("Task E, Time Overlap"){
    CHECK(timeOverlap({{"Back to the Future", COMEDY, 116}, {9, 15}}, {{"Black Panther", THRILLER, 134}, {12, 15}}) == false);

}