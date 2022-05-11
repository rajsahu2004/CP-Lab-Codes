#include <stdio.h>
int main(){
	float n;
	int x;
	printf("Enter an floating type number : ");
	scanf("%f",&n);
	x=(int)n;
	int *p;
	p=&x;
	printf("The integer value of the number is %d",*p);
}
