#include<stdio.h>

int main( ) {
int n,m;
int i,j,ni,nj;
int digits;
	digits=0;
	
	scanf("%d",&n);
	
	if( n>=0) {
	printf("%d\n",n);
	return 0;
	}
	

	i = n%10;
m=n/10;
	j= m%10;
m=n;

while( m!=0) {
m=m/10;
digits++;
}

//printf("%d %d %d\n",i,j,digits);

i=i*(-1);
j=j*(-1);

if ( i >= j ) 
printf("%d\n", n /10 );
else
{
	
if( (-1)*n/100 > 0 )
printf("%d%d\n",n/100,i);
else
printf("%d\n",i*(-1));
	
}




return 0;
}
	 
	
	
	
	

