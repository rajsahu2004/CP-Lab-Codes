#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the natural number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum+=i;
	float avg;
	avg= (float)sum/n;
	printf("%f",avg);
}
