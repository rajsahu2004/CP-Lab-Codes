#include <stdio.h>
int main(){
	int n;
	printf("Enter the number corresponding to the day of a week from 1 to 7 : ");
	scanf("%d",&n);
	switch(n){
		case 1 :
			printf("Monday");
			break;
		case 2 :
			printf("Tuesday");
			break;
		case 3 :
			printf("Wednesday");
			break;
		case 4 :
			printf("Thursday");
			break;
		case 5 :
			printf("Friday");
			break;
		case 6 :
			printf("Saturday");
			break;
		case 7 :
			printf("Sunday");
			break;
		default : 
		printf("Enter number only from 0 and 7");
		break;
	}
	return 0;
}
