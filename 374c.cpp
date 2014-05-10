/*
    374C
    Topological sort using dfs ( with cycle detection)

*/
#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<map>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;
#define true 1
#define false 0
#define INF 100000
#define mod 1000000007
#define MAX 100000
typedef long long ll;
#define rep(i,n) for(i=0;i<n;i++)
#define rrep(i,n) for(i=n-1;i>=0;i--)


char mat[1005][1005],no[50],yes[50];
ll temp,next[4],n,m;


    void toposort(){


    }//toposort



int main() {
    ll ans,i,j;
    strcpy(no,"Poor Dima!") ,   strcpy(yes,"Poor Inna!");

    cin>>n>>m;

    rep(i,n)
        cin>>mat[i];

    rep(i,n)
        rep(j,m)
            visit[i][j] = false;



return 0;
}
