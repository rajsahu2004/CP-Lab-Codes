#include<stdio.h>

int factorial(n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int n,r;
	scanf("%d%d", &n, &r);
	int npr= factorial(n)/factorial(n-r);
	printf("%d", npr);
	// returns nPr = n!/(n-r)!
}

