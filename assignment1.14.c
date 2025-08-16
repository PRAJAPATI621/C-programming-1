#include <stdio.h>
void main()
{/*Program to convert celcius into fahrenheit..*/
 int a;
 float b;
 printf("Enter temperature in celcius");
 scanf("%d",&a);
 b=(1.8*a)+32;
 printf("%d*1.8+32 = %f\n",a,b);
}