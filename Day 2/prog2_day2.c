//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#include <math.h>
int main()
{
	float r;
	printf("Write the radius of the circle:");
	scanf("%f", &r);
	printf("Area=%.2f, Circumference=%.2f", 3.14*pow(r,2), 2*3.14*r);
	return 0;
}