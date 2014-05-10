#include<iostream>
#include<cstring>
#define MAX 1005
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;

struct node{
    int x;
    int y;
}q[MAX*MAX];

int main() {
    int i,j,k,n,m,qlen,ans;
    char mat[MAX][MAX],next[128];
    int parent[MAX][MAX],best[MAX][MAX],x[4],y[4];

    cin>>n>>m;

    rep(i,n)
        cin>>mat[i];

    rep(i,n)
        rep(j,m)
            parent[i][j] = 0 , best[i][j] = 0;



    next['D'] = 'I' , next['I'] = 'M' , next['M'] = 'A' , next['A'] = 'D';
    x[0] = -1; x[1] = 1; x[2] = 0; x[3] = 0;
    y[0] = 0; y[1] = 0; y[2] = 1; y[3] = -1;

    rep(i,n)
        rep(j,m)
            rep(k,4){
                int ii = i + x[k];
                int jj = j + y[k];
                if( ii>=0 && ii<n && jj>=0 && jj<m && mat[ii][jj] == next[ mat[i][j] ] )
                    parent[ii][jj]++;
            }

    qlen = 0;

        rep(i,n)
            rep(j,m)
                if(parent[i][j] == 0)
                    q[qlen].x = i, q[qlen].y = j,qlen++;



    /* take the node with no parents to it, remove it and update the parent[] for all its children. i.e parent[]--; */

    for(i=0;i<qlen;i++){
            for(k=0;k<4;k++){
                int ii = q[i].x + x[k];
                int jj = q[i].y + y[k];
                if(ii>=0 && ii<n && jj>=0 && jj<m && mat[ii][jj] == next[ mat[q[i].x][q[i].y] ]){
                    parent[ii][jj]--;
                    if(parent[ii][jj]==0)
                        q[qlen].x = ii, q[qlen].y = jj,qlen++;
                        }
                }//k
            }


        if(qlen < n*m){ //Cycle detected
            cout<<"Poor Inna!"<<endl;
            return 0;
        }

    ans = 0;

    for(i=qlen-1;i>=0;i--){
        rep(k,4){
            int ii = q[i].x + x[k];
            int jj = q[i].y + y[k];
            if(ii>=0 && ii<n && jj>=0 && jj<m && mat[ii][jj] == next[ mat[q[i].x ][q[i].y ] ])
                best[ q[i].x ][ q[i].y ] = max( best[q[i].x ][q[i].y ],best[ii][jj] );
        }
        best[q[i].x][q[i].y]++;
        if(mat[q[i].x ][q[i].y ]=='D')
            ans = max(ans,best[ q[i].x ][ q[i].y ]);
    }

    if(ans<=3){
        cout<<"Poor Dima!"<<endl;
        return 0;
    }

    cout<<ans/4<<endl;

return 0;
}
