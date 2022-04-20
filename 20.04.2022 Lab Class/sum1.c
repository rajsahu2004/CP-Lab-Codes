#include<stdio.h>

int factorial(n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}

float Total(int a){
	double sum = 0.00;
	int i;
	for(i=1;i<=a;i++){
		sum+=1.00/factorial(i);
	}
	printf("%f", sum);
}

int main(){
	float sum = 0.00;
	int i,n;
	scanf("%d", &n);
	Total(n);
	// returns 1/1! + 1/2! + 1/3! + .... + 1/n!
}
