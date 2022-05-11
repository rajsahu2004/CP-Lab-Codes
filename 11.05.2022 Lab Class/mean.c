# include <stdio.h>
int  main(){
	int  a[1000], n, i, sum=0;
	float  mean;
	int  *p;
	printf("How many numbers  do you want to enter ? ") ;
	scanf("%d",&n) ;
	printf("\nEnter the number : \n") ;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]) ;
		p++ ;
	}
	p=&a[0];
	printf("Element in array are : ") ;
	for (i = 0; i < n ; i++  ){
		printf("%d ",*p);
		sum+=(*p);
		p++;
	}
	mean =(float)sum/n;
	printf("\nMean of %d Numbers are : %.2f ",n, mean);
}
