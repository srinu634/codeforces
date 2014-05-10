#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
#include<cstdio>
#define rep(i,n) for(i=0;i<n;i++)
#include<cmath>
#define true 1
#define false 0
#define scan(x) scanf("%lld",&x);
#define p(x) print("%lld\n",x);
#define pb push_back
typedef  long long ll;
using namespace std;

vector<long  long> a;
vector<long long> dp;

int main(){

    ll n,m,i,x,j,k;

    scan(n);scan(m);

        i = 0;

    rep(i,n){
        scan(x);   a.pb(x);}


    dp.pb(0);
    i = m - 1;

    for(;i<n;){
        dp[0] += 2*(a[i]);
        i += m;
        if(i>=n)
            dp[0] += 2*a[n-1];
        }



    for(i = 1;i<n;i++){
            dp[i] = dp[i-1] - (2) * ( floor( (n - i) /m )  ) * (a[i] - a[i-1]) + (2)*(a[i] - a[i-1])*(floor( (i-1)/m) );
        } //for




    cout<<min_element(dp,dp+n)<<endl;


    return 0;
}
