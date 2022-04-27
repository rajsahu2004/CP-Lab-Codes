#include<stdio.h>
#include<math.h>

float power(int x, float n){
	return exp(n*log(x));
}

int main(){
	int x;
	float n;
	scanf("%d %f", &x,&n);
	printf("%f",power(x,n));
}
