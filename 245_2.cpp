#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
typedef long long ll;
typedef long double ld;
using namespace std;

ll gcd(ll a,ll b){ if(a<b) swap(a,b); if(b == 0) return a; return gcd(b,b%a); }

vector <int> c;

int solve(int x, int y,int n){
    int i,j,num,a,b,ans;

    ans = 0;

while(true){

    if(x-1<0 || y+1>=n)
        break;

    for( i = x-1 ;i>=0;i--)
        if( c[i] != c[x-1] )
            break;
        i++; // 1st segment
    a = i ;


    for( i = y+1 ;i<n;i++)
        if(c[i] != c[y+1])
            break;
        i--; //end segment
    b = i;

    if( c[x-1] != c[y+1] ) //Don't match
        break;

    if( x-1 -a + 1 + b - y-1 +1  <=2 )
        break;

    ans += (x-1 -a + 1 + b - y-1 +1);
  // cout<<a<<","<<b<<","<<(x-1 -a + 1 + b - y-1 +1)<<endl;
    x = a ;
    y = b ;

}//while
    return ans;
}//solve

int main() {
    int n,k,x,num,ans,i,j;

    cin>>n>>k>>x;

    ans = 0;

    rep(i,n)
        cin>>num , c.pb(num);

    for(i=0;i<n;i++){
        if( c[i] != x)
            continue;

        for(j = i; j < n;j++) //c[i] = x
            if( c[j] != c[i] )
                break;
        j--; // [i..j] has all the balls with color x

        if(j - i + 1 < 2)
            continue; //Small segment

       // cout<<"Main segment: "<<i+1<<","<<j+1<<endl;

        ans = max(ans, solve(i,j,n) + j-i+1) ;
        i = j;
    }

    cout<<ans<<endl;

    return 0;
}
