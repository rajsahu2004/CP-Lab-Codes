#include <stdio.h>
int  main(){
	int m,n,sum=0,*p,*q,count=0;
	p=&m;
	q=&n;
	printf("Enter the initial and final number of the series : ");
	scanf("%d %d",p,q);
	while((*p)<=(*q)){
		sum+=(*p);
		count++;
		(*p)++;
	}
	float avg;
	avg=(float)sum/count;
	printf("Sum is %d\n Average is %.2f",sum,avg);
	return 0;
}
