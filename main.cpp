/*
Daphne Luzong
CSCI 13500
Michael Zamansky
Lab 10: Classes, enums, and movies
*/

#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

int main(){
    //Task A:
    Time time;
    time.h = 6;
    time.m = 30;
    std::cout << minutesSinceMidnight(time) << std::endl; //expected 390 min
    Time earlier = {10, 30};
    Time later = {12, 45};
    std::cout << minutesUntil(earlier, later) << std::endl; //expected 135
    std::cout << std::endl;

    //Task B:
    Time time0 = {8, 10};
    Time newTime = addMinutes(time0, 75);
    std::cout << newTime.h << ":" << newTime.m << std::endl; //expected {9, 25}
    std::cout << std::endl;

    //Task C:
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Avengers Endgame", ACTION, 200};
    Movie movie4 = {"Spiderman: No Way Home", ACTION, 116};

    TimeSlot morning = {movie1, Time{9, 15}};
    TimeSlot daytime = {movie2, Time{12, 15}}; 
    TimeSlot evening = {movie1, Time{16, 45}}; 

    std::cout << getTimeSlot(morning) << std::endl;
    std::cout << getTimeSlot(daytime) << std::endl;
    std::cout << getTimeSlot(evening) << std::endl; 
    std::cout << std::endl;

    //Task D:
    TimeSlot m = scheduleAfter(morning, movie1); 
    TimeSlot m1 = scheduleAfter(daytime, movie2); 
    std::cout << getTimeSlot(m) << std::endl; 
    std::cout << getTimeSlot(m1) << std::endl;
    std::cout << std::endl;

    //Task E:
    std::cout << timeOverlap(morning, daytime) << std::endl; //should print 0 
    std::cout << timeOverlap(daytime, evening) << std::endl; //should print 0 

    return 0;
}