#include<stdio.h>
#include<iostream>
#include<cmath>
#include<map>
#include<cstring>
#include<algorithm>
#include<stack>

#define true 1
#define false 0
#define INF 100000
#define mod 1000000007
#define MAX 100000
#define rep(i,n) for(i=0;i<n;i++)
#define rrep(i,n) for(i=n-1;i>=0;i--)



typedef long long ll;
typedef unsigned long long llu;
using namespace std;



int main(){
ll mat[1000],n,a,b,l,r,i,j,ans,flag[1000],count;

cin>>n;

    for(i=0;i<=100;i++){ mat[i] = 0;flag[i]=0;}

cin>>a>>b;
n--;
ans = 0;

for(i=a;i<=b;i++)
    mat[i] = 1;

for(i=0;i<n;i++){
    cin>>l>>r;

    for(j=l;j<=r;j++)
        mat[j] = 0;
    flag[l] = 1;
    flag[r] = 1;

}

ans = 0;
for(i=0;i<=100;i++){
    j = i+1;
    if(mat[i]==0)continue;
    count = 1;
    for(;j<=100;j++)
        if(mat[j]==1)
            count++;
        else
            break;
    count--; //segments
    j--;

    if(i-1>=0 && flag[i-1]==1)count++;
    if(j+1<=100 && flag[j+1]==1)count++;
    //cout<<i<<" "<<j<<" "<<count<<endl;
   ans += count;
i = j;
}


cout<<ans<<endl;
return 0;
}
