#include<stdio.h> 
#include<math.h> 
#include<conio.h>
#include<stdlib.h> 
 
void roots(int a, int b, int c) 
{ 
     
    if (a == 0)
    { 
        printf("The value of a cannot be 0"); 
        return; 
    } 
   
    int d = b*b - 4*a*c; 
    double rootd = sqrt(abs(d)); 
   
    if (d > 0) 
    { 
        printf("real roots are %f and %f",(double)(-b + rootd)/(2*a) , (double)(-b - rootd)/(2*a)); 
    } 
    else if (d == 0) 
    { 
        printf("Both roots are equal to %f",-(double)b / (2*a)); 
    } 
    else     { 
        printf("Complex roots are equal to %f + i%f and %f - i%f", -(double)b / (2*a),rootd ,-(double)b / (2*a), rootd); 
    } 
}  
int main() 
{ 
    int a;
    int b;
    int c;
   printf("enter values of a, b, c\n");
   scanf("%d%d%d", &a, &b, &c);
    roots(a, b, c); 
    return 0; 
}
