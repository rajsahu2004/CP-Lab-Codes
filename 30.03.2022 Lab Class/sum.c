#include <stdio.h>
int  main(){
	int m,n,sum=0;
	printf("Enter the initial and final number of the series : ");
	scanf("%d %d",&m,&n);
	while(m<=n){
		sum+=m;
		m++;
	}
	printf("Sum is %d",sum);
	return 0;
}
