#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str[200],str_start[10],str_end[10];
 
int main( ) {    
int t;
char error[] = "OMG>.< I don't know!";
char start[]= "miao.";
char end[] = "lala.";
char ch;
int len,count;
int i,j; //iterators
int flag_start,flag_end;
scanf("%d",&t);
        ch=getchar( );  
while(t--) {
      
gets(str);      
len = strlen(str);
//printf("len is %d\n",len);
flag_start=0;
flag_end=0;
 
if( len<=4) {
printf("%s\n",error);
continue;
}
 
for(i=0;i<=4;i++)
str_start[i]=str[i];
str_start[i]='\0';
 
count=0;
 
for(i=len-5;count<=4;i++) {
str_end[count]=str[i];
count++;
}
str_end[count]='\0';
//printf("str  is %s\n",str);
 
if ( strcmp(str_start,start) == 0 )
flag_start = 1;
 
if ( strcmp(str_end,end) == 0 )   
flag_end = 1;
 
 
if ( flag_start==1 && flag_end==1 ) {
printf("%s\n",error);
continue;
}
 
if ( flag_start==1 ) {
printf("Rainbow's\n");
continue;
}
 
if ( flag_end==1 ) {
printf("Freda's\n");
continue;
}
else
printf("%s\n",error );  
}//test cases
        
        return 0;
}//main