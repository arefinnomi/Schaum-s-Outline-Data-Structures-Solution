                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              " // Fig. 13.6: fig13_06.cpp
// Introducing polymorphism, virtual functions and dynamic binding.
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h" 
using namespace std;

int main()
{
   // create base-class object
   CommissionEmployee commissionEmployee( 
      "Sue", "Jones", "222-22-2222", 10000, .