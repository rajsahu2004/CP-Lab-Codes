#include<stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		if(a[i]>a[i+1]){
			a[i+1]=a[i]+a[i+1];
			a[i+1]=a[i]-a[i+1];
		}
	
	}
	for(i=0;i<=9;i++){
		printf("%d ",a[i]);
	}
}
