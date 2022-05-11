#include <stdio.h>
int main(){
	float n;
	int x;
	printf("Enter an floating type number : ");
	scanf("%f",&n);
	x=(int)n;
	int *p;
	p=&x;
	printf("%d",*p);
}
