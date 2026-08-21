//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,det;
	printf("Write the values of a,b,c: ");
	scanf("%d %d %d", &a,&b,&c);
	det = pow(b,2)-(4*a*c);
	if (det>=0)
	{
		if (det==0)
			printf("the roots are real and equal: %d,%d", -b/2*a, -b/2*a);
		else
			printf("the roots are real and different: %.0f, %.0f", (-b+sqrt(det))/2*a, (-b-sqrt(det))/2*a);
	}
	else
		printf("The roots are complex");
}	

