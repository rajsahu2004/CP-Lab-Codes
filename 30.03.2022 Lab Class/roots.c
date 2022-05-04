#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	int d;
	d = pow(b,2)-4*a*c;
	if(d>=0){
		float sqrtd;
		sqrtd = sqrt(d);
		float r1,r2;
		r1 = (-b+sqrtd)/2*a;
		r2 = (-b-sqrtd)/2*a;
		if(d>0){
		printf("%f and %f", r1, r2);
		}
		else {
			r1=r2;
			printf("both roots are %f", r1);
		}
	}
	else {
		printf("NO real roots");
	}
	
}
