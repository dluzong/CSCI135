//Task A: Simple functions for time
#include <iostream>
#include "time.h"
#include "movie.h"
#include "timeslot.h"

//a printer function that prints a Time value on the screen in HOURS:MINUTES format:
void printTime(Time time) {
    std::cout << time.h << ":" << time.m;
}

//Function: return the num of minutes from 0:00AM until time
int minutesSinceMidnight(Time time){
    int hourToMin = time.h * 60; //converts num of hours to min
    int numOfMinutes = hourToMin + time.m; //calculates total num of minutes
    return numOfMinutes;
}

//Function: receive two Time arguments earlier and later and report how many minutes separate the two moments
//ex) minutesUntil({10,30},{13,40}) should return 190 minutes
int minutesUntil(Time earlier, Time later){
    int hourDiff = later.h - earlier.h; //the difference between hours
    int hourToMin = hourDiff * 60; //converts num of hours into minutes
    int minutes = hourToMin + (later.m - earlier.m); //calculates total num of minutes
    return minutes;
}

//Task B: Making it more interesting
//Function should create and return a new moment of time that is min minutes after time 0
Time addMinutes(Time time0, int min){
    Time newTime;
    newTime.h = time0.h + (time0.m + min) / 60; 
    newTime.m = (time0.m + min) % 60;
    return newTime;
}
//Scheduling times slots for a movie theater
void printMovie(Movie mv){
    std::string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    std::cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

//Task C: Timeslot ending time and printTimeSlot
std::string getTimeSlot(TimeSlot ts){
    std::string mv;
    Movie movie = ts.movie;
    Time start = ts.startTime;
    std::string timeStart = std::to_string(start.h) + ":" + std::to_string(start.m);
    Time end = addMinutes(ts.startTime, movie.duration);
    std::string timeEnd = std::to_string(end.h) + ":" + std::to_string(end.m);
    std::string g;
    switch (movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    mv = movie.title + " " + g + " (" + std::to_string(movie.duration) + " min) [starts at " + timeStart + ", ends by " + timeEnd + "]";
    return mv;
}

//Task D: Scheduling X after Y?
//Function should produce and return a new TimeSlot for the movie nextMovie scheduled immediately after the time slot ts
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextSlot;
    nextSlot.movie = nextMovie;
    nextSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nextSlot;
}

//Task E: Overlapping time slots?
/*
The function should return true if the two time slots overlap, otherwise return false. (Take into account the starting times of the time slots and the duration of the scheduled movies.)
*/
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    if (addMinutes(ts1.startTime, ts1.movie.duration).h >= addMinutes(ts2.startTime, ts2.movie.duration).h ){ 
        return true; 
    } 
    else{
        return false; 
    }
}