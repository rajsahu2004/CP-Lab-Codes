#include<stdio.h>

int maxOfTwo(a,b){
	return (a>b)?a:b;
}

int maxArray(int a[],int n){
	int max=0,i,*p;
	p=&max;
	for(i=0;i<n;i++){
		if(a[i]>=(*p))
		(*p)=a[i];
	}
	return *p;
}

int main(){
	int n;
	printf("How many numbers do you want to enter ? ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	int a[n],i,pos,maxNumber=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=maxNumber){
			maxNumber=maxOfTwo(a[i],maxNumber);
			pos=i;
		}
	}
	int largest = maxArray(a,n);
	printf("The largest number is %d and its position is %d from the left",largest,pos+1);
	
}
