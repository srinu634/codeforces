#include<stdio.h>

long long int max( long long int a,long long int b)  {
return a>b?a:b;
}

int main( ) { 
long long int x,y,m,temp,count;

int flag;
flag=0;
count=0;
scanf("%I64d %I64d %I64d",&x,&y,&m );

if ( x <=0 && m> 0 && y<=0) 
	printf("-1\n");
else if ( x>=0 && y>=0 && m<0 ) 
	printf("-1\n");
else if ( x==0 && y==0 && m!=0)
	printf("-1\n");
else if ( x==0 && y==0 && m==0)
	printf("0\n");
else if ( max(x,y)>=m )
	printf("0\n");
else
 {	flag=1;
 	while ( max(x,y)<m )
	 { 
 	if ( x>=y)
 		y=x+y;
	else
		x=x+y;
	count++;		
	 }
 }
if(flag)
printf("%I64d\n",count );
return 0;
}//main
