//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main()
{
	int sec;
	printf("Input seconds:");
	scanf("%d", &sec);
	printf("Hours:Minutes:Seconds, %d:%d:%d",sec/3600, (sec%3600)/60, (sec%3600)%60);
}