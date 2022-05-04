#include<stdio.h>

int swap(a,b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d", a,b);
}

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	swap(a,b);
	// swaps the integers
}
