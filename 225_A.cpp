#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include <cstdlib>
#include<string>
#include<algorithm>
#include<cstring>
#define true 1
#define false 0
#define rep(i,n) for(i=0;i<n;i++)
#define revrep(i,n) for(i=n-1;i>=0;i--)

typedef long long int ll;
using namespace std;


int main(){

         ll n,i,j;
         cin>>n;

         if(n%2==0){
                  cout<<(n/2)*n<<endl;
         for(i=0;i<n;i++){
                  for(j=0;j<n;j++)
                           if(i%2==0 && j%2==0)
                                    cout<<"C";
                           else if(i%2==0 && j%2==1)
                                    cout<<".";
                           else if(i%2==1 && j%2==0)
                                    cout<<".";
                           else
                                    cout<<"C";
         cout<<endl;
         }
         }//if
         else{
                  cout<< (n/2+1)*(n/2+1) + (n/2)*(n/2)<<endl;
                  for(i=0;i<n;i++){
                           for(j=0;j<n;j++)
                                    if(i%2==0 && j%2==0)
                                    cout<<"C";
                           else if(i%2==0 && j%2==1)
                                    cout<<".";
                           else if(i%2==1 && j%2==0)
                                    cout<<".";
                           else
                                    cout<<"C";
                           cout<<endl;
                  }//i
         }

return 0;
}
