#include<stdio.h>
int max3(a,b,c){
	int max;
	max=a;
	if(b>=max){
		max=b;
	}
	if(c>=max){
		max=c;
	}
	printf("%d", max);
}

int main(){
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	max3(a,b,c);
	// sorts them in ascending order
}
