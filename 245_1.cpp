#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
typedef long long ll;
typedef long double ld;
using namespace std;

ll gcd(ll a,ll b){ if(a<b) swap(a,b); if(b == 0) return a; return gcd(b,b%a); }

vector< pair< int, int > > p;
vector<  pair< int, int > > a;
vector < pair< int,int> > b;

int main() {
    int n,m,i,j,num;

    cin>>n>>m;

    rep(i,n)
        cin>>num , a.pb( make_pair(num,i) );    //co-ordinate, original index

    int x,y;

    rep(i,n)
        cin>>x>>y , p.pb( make_pair(x,y) );

        sort(a.begin(),a.end()); //sorted w.r.t co-ordinates
  //  sort(p.begin(),p.end());

    rep(i,n)
        b.pb( make_pair(a[i].second,i%2 ) ); //index , value

    sort( b.begin(), b.end());

    rep(i,n)
        cout<<b[i].second<<" ";
    cout<<endl;

    return 0;
}
