/*6)Create an C Project with name "Advanced Calculator" and provides below features-Abhishek
   A)Basic operators: +, −, ×, ÷, %.
   B)Advanced: exponentiation, roots, trigonometry (sin, cos, tan), logarithms etc.
   C)Temperature Conversion: conversions between Celsius, Fahrenheit, and Kelvin
   */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Calculator.h"

void basic_operations();
void advanced_operations();
void temperature_conversion();


int main()
{
  int ch;
  while (1)
  {
    printf("\n||===============================================================================================||\n");
    printf("||                                 WELCOME TO ADVANCED CALCULATOR                                ||\n");
    printf("||===============================================================================================||\n");
    printf("||                                    1. Basic Operations                                        ||\n");
    printf("||                                    2. Advanced Operations                                     ||\n");
    printf("||                                    3. Temperature Conversion                                  ||\n");
    printf("||                                    4. Exit                                                    ||\n");
    printf("||===============================================================================================||\n");
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");
    printf("                                       Enter your number: ");
    scanf("%d", &ch);
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");
    switch (ch)
    {
    case 1:
      basic_operations(); 
      break;
    case 2:
      advanced_operations(); 
      break;
    case 3:
      temperature_conversion(); 
      break;
    case 4:
      exit(0); // exit the program
    default:
      printf("Invalid number! Please try again.\n");
    }
  }
  return 0; // return statement
}
// Function definitions
void basic_operations()
{
  int operation;
  while (1)
  {
    printf("\n||===============================================================================================||\n");
    printf("||                                  Welcome To Basic Operations                                  ||\n");
    printf("||===============================================================================================||\n");
    printf("||                                   1. Addition any two number                                  ||\n");
    printf("||                                   2. Subtraction any two number                               ||\n");
    printf("||                                   3. Multiplication any two number                            ||\n");
    printf("||                                   4. Division any two number                                  ||\n");
    printf("||                                   5. Modules any two number                                   ||\n");
    printf("||                                   6. Return                                                   ||\n");
    printf("||                                   7. Exit                                                     ||\n");
    printf("||===============================================================================================||\n");
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");
    printf("                                      Enter your Operations : ");
    scanf("%d", &operation);
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");

    switch (operation)
    {
    case 1:
      add();
      break;

    case 2:
      sub();
      break;

    case 3:
      mul();
      break;

    case 4:
      division();
      break;
    case 5:
      mod();
      break;
    case 6:
      return;
    case 7:
      exit(0);
    default:
      printf("Invalid Operation ! Please Try again...\n");
    }
  }
}
// Function for advanced operations
void advanced_operations()
{
  int ch;
  const float PI = 3.14;
  double num, result;
  char function[10];
  while (1)
  {
    printf("\n||===============================================================================================||\n");
    printf("||                                Welcome To Advanced Operations                                 ||\n");
    printf("||===============================================================================================||\n");
    printf("||                                 1. Exponentiation                                             ||\n");
    printf("||                                 2. Roots                                                      ||\n");
    printf("||                                 3. Trigonometry (sin, cos, tan)                               ||\n");
    printf("||                                 4. Logarithms                                                 ||\n");
    printf("||                                 5. Return                                                     ||\n");
    printf("||                                 6. Exit                                                       ||\n");
    printf("||===============================================================================================||\n");
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");
    printf("                                    Enter your number : ");
    scanf("%d", &ch);
    printf("\n");
    printf("||***********************************************************************************************||\n");

    switch (ch)
    {
    	
    case 1:
      printf("\t\t\t\tEnter a base number : ");
      double base, exponent;
      scanf("%lf", &base);
      printf("\t\t\t\tEnter a  exponent number : ");
      scanf("%lf", &exponent);
      result = pow(base, exponent);
      printf("\t\t\t\t %.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
      break;

    case 2:
      printf("\t\t\t\tPlease Enter a number to find the square root : ");
      scanf("%lf", &num);
      if (num >= 0)
      {
        result = sqrt(num);
        printf("\t\t\t\t\tSquare root of %.2lf = %.2lf\n", num, result);
      }
      else
        printf("\t\t\t\tError! square root is a negative number, Please try again...\n");
      printf("\n");
      break;

    case 3:
      printf("\t\t\t\t Enter Trigonometry function (sin, cos, tan) : ");
      scanf("%s", function);
      printf("\t\t\t\t Enter angle in degrees: ");
      scanf("%lf", &num);
      num = num * (PI / 180.0);
      if (strcmp(function, "sin") == 0) // compare strings
        result = sin(num);
      else if (strcmp(function, "cos") == 0) // compare strings
        result = cos(num);
      else if (strcmp(function, "tan") == 0) // compare strings
        result = tan(num);
      else
      {
        printf("\t\t\t\t Invalid function!\n");
        printf("\n");
        return;
      }
      printf("\t\t\t\t %s (%.2lf degrees) = %.2lf\n", function, num * (180.0 / PI), result);
      printf("\n");
      break;

    case 4:
      printf("\t\t\t\tEnter a number to find the logarithm (base 10): ");
      scanf("%lf", &num);
      if (num > 0)
      {
        result = log10(num);
        printf("\t\t\t\tLogarithm base 10 of %.2lf = %.2lf\n", num, result);
      }
      else
        printf("\t\t\t\tError! Logarithm is negative numbers, Please try again...\n");
      printf("\n");
      break;
      
    case 5:
      return;
      
    case 6:
      exit(0);
      
    default:
      printf("\t\t\t\tInvalid number!\n");
      printf("\n");
      break;
    }
  }
}
// Function for temperature conversion
void temperature_conversion()
{
  int ch;
  while (1)
  {
    printf("\n||===============================================================================================||\n");
    printf("||                                Welcome To Temperature Conversion                              ||\n");
    printf("||===============================================================================================||\n");
    printf("||                                  1. Celsius to Fahrenheit                                     ||\n");
    printf("||                                  2. Fahrenheit to Celsius                                     ||\n");
    printf("||                                  3. Celsius to Kelvin                                         ||\n");
    printf("||                                  4. Kelvin to Celsius                                         ||\n");
    printf("||                                  5. Fahrenheit to Kelvin                                      ||\n");
    printf("||                                  6. Kelvin to Fahrenheit                                      ||\n");
    printf("||                                  7. Return                                                    ||\n");
    printf("||                                  8. Exit                                                      ||\n");
    printf("||===============================================================================================||\n");
    printf("\n");
    printf("||***********************************************************************************************||\n");
    printf("\n");
    printf("                                     Enter your number: ");
    scanf("%d", &ch);
    printf("\n");
    printf("||***********************************************************************************************||\n");

    printf("\n");
    switch (ch)
    {
    case 1:
      c_to_f();
      break;
    case 2:
      f_to_c();
      break;
    case 3:
      c_to_k();
      break;
    case 4:
      k_to_c();
      break;
    case 5:
      f_to_k();
      break;
    case 6:
      k_to_f();
      break;
    case 7:
      return;
    case 8:
      exit(0);
    default:
      printf("\t\t\t\t\tInvalid number!\n");
      break;
    }
  }
}
