#include<stdio.h>
int main(){
	char a[100],b[100];
	int count=0,i;
	printf("Enter the string to be copied : \n");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];
		count++;
	}
	printf("The copied string is %s\nThe length of it is %d",b,count);
	
	
}
