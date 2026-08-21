//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main()
{
	float p;
	float r;
	float t;
	
	printf("Write the principal, rate and time");
	scanf("%f %f %f", &p, &r, &t); 
	printf("Simple Interest=%.2f, Compound Interest=%.2f", p*r*t/100,  p*pow((1+(r/100)),t)-p);
}	
