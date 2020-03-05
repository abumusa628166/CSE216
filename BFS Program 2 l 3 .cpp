#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<int> adj[10];
    int i,j,n,e,s,d,w;
    int l[8], p[8], v[8];
    for(i=0; i<n; i++){
        l[i]=0;
        p[i]=0;
        v[i]=0;
    }

    freopen("BFS.txt","r", stdin);
    scanf("%d %d",&n, &e);

printf("\n");
    for(i=0;i<e;i++){
        scanf("%d %d", &s, &d);
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

   int k=0, a, ad;
    queue<int> q;
    l[k]=0;
    p[k]=-1;
    v[k]=1;
    q.push(k);
    while(!q.empty()){
        a=q.front();
        printf("%d\t", a);
        q.pop();
        for(i=0; i<adj[a].size(); i++){
            ad=adj[a][i];
            if(v[ad]==0){
                p[ad]=a;
                l[ad]=l[p[ad]]+1;
                v[ad]=1;
                q.push(ad);
            }
        }
        v[a]=2;
    }




    for(i=0;i<n;i++){
            printf("Node %d, Level %d, Parent %d\n",i, l[i], p[i]);

        printf("\n\n");
    }

    return 0;
}
