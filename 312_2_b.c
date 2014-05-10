#include<stdio.h>

int main( ) {
double a,b,c,d;
double not_a,not_b;
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
not_a = a/b;
not_a= 1- not_a;

not_b= c/d;
not_b = 1- not_b;

printf("%lf\n",   a/( b* (1-not_a*not_b) ) ); 	
	
	return 0;
}