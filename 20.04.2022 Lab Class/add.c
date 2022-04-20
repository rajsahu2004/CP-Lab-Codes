#include<stdio.h>

int add(a,b){
	int s;
	s=a+b;
	printf("%d", s);
}

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	add(a,b);
	// returns a+b
}

