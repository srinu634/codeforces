#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define true 1
#define false 0
using namespace std;

vector<long> a;
vector<long> v;

int main(){

     long n,t,c,x,i,j,ans,res,m;

    cin>>n>>t>>c;


    rep(i,n)
        cin>>x , a.pb(x);

    ans = 0;

    rep(i,n)
        {
            if( a[i] > t){
                m = v.size();
                ans +=  m  + 1 - c > 0? m + 1 - c : 0;
                v.clear();
            }
            else
                v.pb(1); // some random number
        }

        m = v.size();
        ans += m  + 1 - c > 0? m + 1 - c : 0;

    cout<<ans<<endl;

    return 0;
}
