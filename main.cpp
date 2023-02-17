/*
Daphne Luzong
CSCI135
Michael Zamansky
Lab 3
*/

#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"


int main()
{
  //Task A:
  std::cout << "Date: 01/16/2018 \n East Basin storage: " << get_east_storage("01/16/2018") << " billion gallons" << std::endl;
  std::cout << "Date: 02/14/2018 \n East Basin storage: " << get_east_storage("02/14/2018") << " billion gallons" << std::endl;
  std::cout << "Date: 12/04/2018 \n East Basin storage: " << get_east_storage("12/04/2018") << " billion gallons" << std::endl;
  std::cout << "\n";

  //Task B
  std::cout << "Minimum storage in East Basin: " << get_min_east() << std::endl;
  std::cout << "Maximum storage in East Basin: " << get_max_east() << std::endl;
  std::cout << "\n";

  //Task C
  std::cout << "Date: 01/16/2018 " << compare_basins("01/16/2018") << std::endl;
  std::cout << "Date: 02/14/2018 " << compare_basins("02/14/2018") << std::endl;
  std::cout << "Date: 12/04/2018 " << compare_basins("12/04/2018") << std::endl;
  std::cout << "\n";

  //Task D
  std::cout << "Date 1: 1/01/2018, Date 2: 1/05/2018 \n"; 
  reverse_order("01/01/2018", "01/05/2018");
  std::cout << "\n";
  
  std::cout << "Date 1: 04/05/2018, Date 2: 04/10/2018 \n";
  reverse_order("04/05/2018", "04/10/2018");
  std::cout << "\n";

  return 0;
}
