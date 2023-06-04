#include <stdio.h>
#include <math.h> // math header file

int main(){

  double A = sqrt(9); // to get the sqrt of 9
  
  // to put a number to a power, first parameter is the base 
  // and the second paramter is the power to raise it to
  double B = pow(2, 4); 

  // we can round a number with the round() function 
  // and store it as an integer
  int C = round(3.14);

  // we can use the ceil() function - for ceiling to 
  // round a function up
  int D = ceil(3.14);

  // we can use the floor() function to round
  // a number down
  int E = floor(3.99);

  // we can find the absolute of a number
  // (how far it is away from 0) using the fabs() function
  double F = fabs(-100);

  // to find the logarithm of a number use the log()
  // function
  double G = log(3);

  // we also have all three trigonometry functions of sin(), cos() and tan()
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("\n%lf", A); // will output 3.000000
  printf("\n%lf", B); // will output 16.000000
  printf("\n%d", C); // will output 3
  printf("\n%d", D); // will output 4
  printf("\n%d", E); // will output 3
  printf("\n%lf", F); // will output 100.000000
  printf("\n%lf", G); // will output 1.098612
  printf("\n%lf", H); // will output 0.850904
  printf("\n%lf", I); // will output 0.525322
  printf("\n%lf", J); // will output 1.619775

  return 0;
}