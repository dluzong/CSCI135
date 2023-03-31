/*
Daphne Luzong
CSCI 13500
Michael Zamansky
Lab 9
*/

#include <iostream>
#include <cmath>
#include "coord3d.h"
#include "funcs.h"

int main(){
  //Task A: Length and distance in 3D space
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; //expected: 37.4166
  
  std::cout << "----------------------------------\n";
  //Task B: Farthest from the origin?
  //Utilizes pointP here too
  Coord3D pointQ = {-20, 21, -22};

  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
  std::cout << "ans = " << ans << std::endl; //returns address of pointer that is further from the origin

  std::cout << "----------------------------------\n";
  //Task C:
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4

  std::cout << "----------------------------------\n";
  //Task E:
  Coord3D *ppos = createCoord3D(10,20,30); //position
  Coord3D *pvel = createCoord3D(5.5,-1.4,7.77); //velocity
  move(ppos, pvel, 10.0);
  std::cout << "Coordinates after 10 seconds: " << ppos->x << " " << ppos->y << " " << ppos->z << std::endl;

  //release memory
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);

  return 0;
}
