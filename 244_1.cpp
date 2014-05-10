#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> a;

int main(){
    int i,n,x,ans,police;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>x , a.push_back(x);

    ans = 0;

    for(i=0;i<a.size();i++)
        if(a[i] == -1 && police == 0)
            ans++;
        else if(a[i]  > 0)
            police += a[i];
        else if( a[i] == -1 && police > 0)
            police--;


    cout<<ans<<endl;



    return 0;
}

