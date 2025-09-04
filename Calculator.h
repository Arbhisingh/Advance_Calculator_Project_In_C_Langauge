void c_to_f();
void f_to_c();
void c_to_k();
void k_to_c();
void f_to_k();
void k_to_f();
void add();
void sub();
void mul();
void division();
void mod();
void add()
{
  double num1, num2, result;
  printf("\t\t\t\t\tEnter first numbers: ");
  scanf("%lf", &num1);
  printf("\t\t\t\t\tEnter second numbers: ");
  scanf("%lf", &num2);
  result = num1 + num2;
  printf("\t\t\t\t\tResult is: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
}
void sub()
{
  double num1, num2, result;
  printf("\t\t\t\t\tEnter first numbers: ");
  scanf("%lf", &num1);
  printf("\t\t\t\t\tEnter second numbers: ");
  scanf("%lf", &num2);
  result = num1 - num2;
  printf("\t\t\t\t\tResult is: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
}
void mul()
{
  double num1, num2, result;
  printf("\t\t\t\t\tEnter first numbers: ");
  scanf("%lf", &num1);
  printf("\t\t\t\t\tEnter second numbers: ");
  scanf("%lf", &num2);
  result = num1 * num2;
  printf("\t\t\t\t\tResult is: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
}
void division()
{
  double num1, num2, result;
  printf("\t\t\t\t\tEnter first numbers: ");
  scanf("%lf", &num1);
  printf("\t\t\t\t\tEnter second numbers: ");
  scanf("%lf", &num2);
  result = num1 / num2;
  printf("\t\t\t\t\tResult is: %.2lf / %.2lf = %.2lf\n\n", num1, num2, result);
}
void mod()
{
  double num1, num2, result;
  printf("\t\t\t\t\tEnter first numbers: ");
  scanf("%lf", &num1);
  printf("\t\t\t\t\tEnter second numbers: ");
  scanf("%lf", &num2);
  result = (int)num1 % (int)num2;
  printf("\t\t\t\t\tResult is: = %.2lf\n", result);
}

void c_to_f()
{
  double celsius, fahrenheit;
  printf("\n");
  printf("\t\t\t\t Enter temperature in Celsius: ");
  scanf("%lf", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("\t\t\t\t %.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
}

void f_to_c()
{
  double fahrenheit, celsius;
  printf("\n");
  printf("\t\t\t\t Enter temperature in Fahrenheit: ");
  scanf("%lf", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("\t\t\t\t %.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);
}

void c_to_k()
{
  double celsius, kelvin;
  printf("\t\t\t\t Enter temperature in Celsius: ");
  printf("\n");
  scanf("%lf", &celsius);
  kelvin = celsius + 273.15;
  printf("\t\t\t\t %.2lf Celsius = %.2lf Kelvin\n", celsius, kelvin);
}

void k_to_c()
{
  double kelvin, celsius;
  printf("\t\t\t\t Enter temperature in Kelvin: ");
  printf("\n");
  scanf("%lf", &kelvin);
  celsius = kelvin - 273.15;
  printf("\t\t\t\t %.2lf Kelvin = %.2lf Celsius\n", kelvin, celsius);
}

void f_to_k()
{
  double fahrenheit, kelvin;
  printf("\n");
  printf("\t\t\t\t Enter temperature in Fahrenheit: ");
  scanf("%lf", &fahrenheit);
  kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
  printf("\t\t\t\t %.2lf Fahrenheit = %.2lf Kelvin\n", fahrenheit, kelvin);
}

void k_to_f()
{
  double kelvin, fahrenheit;
  printf("\n");
  printf("\t\t\t\t Enter temperature in Kelvin: ");
  scanf("%lf", &kelvin);
  fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
  printf("\t\t\t\t %.2lf Kelvin = %.2lf Fahrenheit\n", kelvin, fahrenheit);
}
