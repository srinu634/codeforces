#include<stdio.h>

long long int n,k;
int main() { 


scanf("%I64d %I64d",&n,&k);


if (n%2==0 )
{
	if ( k<=n/2) 
	printf("%I64d \n",1 + 2*(k-1) );
	else
	printf("%I64d \n", 2 + 2*(k-1-n/2 ) );

}
else
{
	if ( k <= ( n+1)/2 )
	 	printf("%I64d \n",1 + 2*(k-1) );
	else
		printf("%I64d \n",2+   2*(k-1 - (n+1)/2) );	
}






return 0;
}//main
