#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

//Task A: Length and distance in 3D space
double length(Coord3D *p){
   double sq_x = pow(p->x, 2); //same as (*p).x to show class member
   double sq_y = pow(p->y, 2); //squares the values
   double sq_z = pow(p->z, 2);
   double distance = sqrt(sq_x + sq_y + sq_z); //apply euclidian formula
   return distance;
}

//Task B: Farther from the origin?
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double len_p1 = length(p1);
    double len_p2 = length(p2);
    if(len_p1 > len_p2){
        return p1;
    }
    else{
        return p2;
    }
}

//Task C: Velocity and moving objects
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}

//Task E: Creating and deleting objects dynamically
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D; //creates a new Coord3D object dynamically
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}
// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}