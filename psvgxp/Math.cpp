#include "Math.h"

#include <iostream>

float factorial(int n)
{
   float factorial = 1.0;

   for(int i = 1; i <= n; ++i)
   {
      factorial *= i;
   }

   return factorial;
}

int print_tailor_cos_x(float xf)
{
   float t1 = pow(xf, 0) / factorial(0);
   float t2 = pow(xf, 2) / factorial(2);
   float t3 = pow(xf, 4) / factorial(4);
   float t4 = pow(xf, 6) / factorial(6);

   std::cout << t1 << " " << t2 << " " << t3 << " " << t4 << std::endl;

   return 0;
}

int print_tailor_sin_x(float xf)
{
   float t1 = pow(xf, 1) / factorial(1);
   float t2 = pow(xf, 3) / factorial(3);
   float t3 = pow(xf, 5) / factorial(5);
   float t4 = pow(xf, 7) / factorial(7);

   std::cout << t1 << " " << t2 << " " << t3 << " " << t4 << std::endl;

   return 0;
}