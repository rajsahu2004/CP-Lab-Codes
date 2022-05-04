#include <stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	printf("Enter the string to be checked :\n");
	gets(a);
	int i,len;
	len = strlen(a);
	for(i=0;a[i]!='\0';i++){
		b[len-1-i]=a[i];
	}
	for(i=0;b[i]!='\0';i++){
		if(b[i]==a[i]){
		printf("Stirng is palindrome");
		break;
		}
		else {
		printf("String is not palindrome");
		break;
		}
	}
}
