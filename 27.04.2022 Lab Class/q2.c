#include<stdio.h> 

void exp(float x, int n){
	int i;
	float y = 1.0;
	for(i=1;i<=n;i++){
		y*=x;
	}
	printf("Value of y (y=x^n) is %f", y);
}
int main(){
	float x;
	int n;
	printf("Enter the values of x and n\n");
	scanf("%f %d", &x, &n);
	exp(x,n);
}
