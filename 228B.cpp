#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<stdlib.h>
#include<map>
#define true 1
#define false 0
#define INF 100000
using namespace std;
typedef long double ld;
typedef long long ll;

char mat[200][200];
ll n;

int main() {
    ll i,j,flag;

cin>>n;
flag = 0;

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        cin>>mat[i][j];

if(mat[0][0] == '#') {
    cout<<"NO"<<endl;
    return 0;
}

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(mat[i][j] == '#')
            flag= 1;

if(flag ==0 ){
    cout<<"YES"<<endl;
    return 0;
}

for(i=0;i<n-2;i++)
for(j=1;j<n-1;j++)
    if( mat[i][j] == '#')
        if( !( mat[i+1][j]=='#' && mat[i+1][j+1] == '#' && mat[i+1][j-1] == '#' && mat[i+2][j] == '#')){
            cout<<"NO"<<endl;
            return 0;
        }
        else {
            mat[i+1][j]='.';  mat[i+1][j+1] = '.'; mat[i+1][j-1] = '.' ; mat[i+2][j] = '.';mat[i][j] = '.';
        }

flag = 0;

for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(mat[i][j] == '#')
            flag= 1;

if(flag == 1)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;


return 0;
}
