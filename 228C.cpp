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

int main() {

ll flag,n,arr[200],i,j,res,fre[200];

cin>>n;

for(i=0;i<=100;i++)
    fre[i] = 0;

for(i=0;i<n;i++){
    cin>>arr[i];
    fre[arr[i]]++;
}

res = 0;
i = 1;

while(true){

        if( fre[i] != 0) {
            if( fre[i]>(i+1) )
                fre[i] -= (i+1) ;
            else
                fre[i] = 0;

            for(j=i+1;j<=100;j++)
                if( fre[j]  != 0)
                    fre[j]--; //Remove one from each block
            res++;
            } // > i+1
        else
            i++;
 if(i == 101)
                break;
}

//cout<<res<<" "<<fre[0]<<endl;
if(fre[0] <= res)
    cout<<res<<endl;
else
    cout<<fre[0]<<endl;


return 0;
}
