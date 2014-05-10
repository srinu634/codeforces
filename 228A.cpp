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

ll gcd(ll a,ll b) {
if (b == 0 )
	return a;
if ( b > a)
	swap ( b,a);

return gcd(b,a%b);
} //gcd

int main() {

ll n,arr[1000],res;

cin>>n;

ll i,j;

for(i=0;i<n;i++)
    cin>>arr[i];
res = arr[0];
for(i=1;i<n;i++)
    res = gcd(res,arr[i]);

cout<<res*n<<endl;
return 0;
}

