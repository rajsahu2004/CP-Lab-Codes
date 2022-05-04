#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,cvovel=0,cconsonent=0;
	printf("Enter the string :");
	gets(a);
	tolower(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		cvovel++;
		else
		cconsonent++;
		if(a[i]==' ')
		cconsonent--;
	}
	printf("Number of vovel : %d\nNumber of consonent : %d",cvovel,cconsonent);
	return 0;
}
