#include<stdio.h>
#include<string.h>

int dp[8000][8000];
char str[100006];

int main( ) {
int len,t,count,templen;
int i,j;
char ch1,ch2; //present,next

scanf("%s",str);
len=strlen(str);

if(len<8000)
templen=len;
else
templen=8000;

for(i=0;i<=templen-1;i++)
for(j=i;j<=templen-1;j++)
dp[i][j]=0;


for(i=0;i<=templen-1;i++)
for(j=i+1;j<=templen-1;j++) 
if ( str[j]==str[j-1])
dp[i][j]=dp[i][j-1]+1;
else
dp[i][j]=dp[i][j-1]; 


/*
for(i=0;i<=len-1;i++)
{
	for(j=i;j<=len-1;j++)
	printf("%d ",dp[i][j]);
	printf("\n");
}
*/

scanf("%d",&t);
while(t--) {
scanf("%d %d",&i,&j);	
i--;
j--;
if ( len < 8000 ) { 
printf("%d\n", dp[i][j] );
continue;
}

count=0;
for( ; i<j; i++) { 
if( str[i]==str[i+1])
count++;
}
printf("%d\n",count);

}//test cases
	
return 0;	
}//main
