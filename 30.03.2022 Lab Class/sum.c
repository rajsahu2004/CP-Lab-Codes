#include <stdio.h>
int  main(){
	int m,n,i,sum=0;
	printf("Enter the initial and final number of the series : ");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		sum+=i;
	}
	printf("Sum is %d",sum);
	return 0;
}
