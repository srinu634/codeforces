#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
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
typedef long double ld;
typedef unsigned long long llu;
using namespace std;

int main(){
    ld t,n,x,a,b,l,r,flag,i;

    cin>>t;


    while(t--){
        cin>>n>>l>>r;
        flag= 0;

        if(l > n ){
            cout<<"No"<<endl;
            continue;
        }

        if(l==1 || (l<=n && r>=n) || l==n || r==n){
            cout<<"Yes"<<endl;
            continue;
        }
x = 0;
        while(true){

            a = l*x;
            b = r*ceil(l*x/r);
            if(a<=n && b>=n){
                flag = 1;
                cout<<"Yes"<<endl;
                break;
            }
            if(a>n){
            //cout<<1<<endl;
                break;
                }
        x += 10000;
        if(x> ceil(1000000000.0/l) )
            break;
        }

if(flag==1)
    continue;
    //cout<<"Here";
i = x- 10002;


for( ; i<=x ;i++){
            a = l*i;
            b = r*ceil(l*i/r);
            //cout<<a<<" "<<b<<endl;
            if(a<=n && b>=n){
                flag = 1;
                break;
                }
    }


if(flag==1)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;;


    }//t


return 0;
}
