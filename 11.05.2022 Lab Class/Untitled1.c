#include <stdio.h>
int main(){
	float n,*p;
	printf("Enter an floating type number : ");
	scanf("%f",&n);
	p=&n;
	printf("%d",*p);
}
