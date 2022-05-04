#include<stdio.h>
#include<math.h>

int factorial(n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int power(n){
	return pow(n,n);
}

float Total(int a){
	float sum = 0.00;
	int i;
	for(i=1;i<=a;i++){
		sum+=(float)power(i,i)/factorial(i);
	}
	printf("%f", sum);
}

int main(){
	float sum = 0.00;
	int i,n;
	scanf("%d", &n);
	Total(n);
	// returns 1^1/1! + 2^2/2! + 3^3/3! + ... + n^n/n!
}
