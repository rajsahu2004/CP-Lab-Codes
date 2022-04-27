#include <stdio.h>

int series(n,x){
	if(n==0){
		return 1;
	}	
	if(n==1){
		return x;
	}
	if(n>1){
		int i,sum=0;
		for(i=2;i<=n;i++){
			sum=((2*n-1)/n)*x*series(i-1,x)-((n-1)/n)*series(i-2,x);
		}
		return sum;
	}
}	

int main(){
	int n,x;
	scanf("%d%d", &n, &x);
	printf("%d",series(n,x));
}
