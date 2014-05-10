//WA
#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<stdlib.h>
#include<map>
#define true 1
#define false 0
#define NEG -1
#define INF 1000000
using namespace std;
typedef long double ld;
typedef long long ll;

int main() {
ll flag,i,j,n,arr[200][200],k[200],a,b,d1[200],d2[200],l;

cin>>n;
a = 0;b = 0;

for(i=0;i<n;i++){
    cin>>k[i];
    for(j=0;j<k[i];j++)
        cin>>arr[i][j];
    d1[i] = 0;
    d2[i] = k[i] - 1;
}


for(l=0;l<=n*n;l++){
flag = 0;
ll v1,v2,i1,i2; //value,index

v1 = NEG; i1 = -1;

for(i=0;i<n;i++)
    if(k[i] != 0)
        flag= 1;
if(flag == 0)
    break;

for(i=0;i<n;i++)
    if(k[i] != 0) {
        if( v1 < arr[i][ d1[i] ]){
            i1 = i;
            v1 = arr[i][ d1[i]] ;
        }
    }
        d1[i1]++;
        k[i1]--;

    a += v1; arr[i1][d1[i1]] = 0;

v2 = NEG; i2 = -1;
for(i=0;i<n;i++)
    if(k[i] != 0) {
        if( v2 < arr[i][ d2[i] ] && d2[i]>=d1[i]){
            i2 = i;
            v2 = arr[i][ d2[i]] ;
        }
    }
        d2[i2]--;
        k[i2]--;


    b += v2;arr[i2][d2[i2]] = 0;
    cout<<v1<<" "<<i1<<" "<<b<<" "<<i2<<endl;
}



cout<<a<<" "<<b<<endl;

return 0;
}
