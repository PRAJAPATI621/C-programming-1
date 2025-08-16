#include <stdio.h>
void main()
{/*Program to convert fahrenheit into celcius.*/
 int a;
 float b;
 printf("Enter temperature in fahrenheit");
 scanf("%d",&a);
 b=0.56*(a-32);
 printf("0.56*(%d-32) = %f\n",a,b);
}
