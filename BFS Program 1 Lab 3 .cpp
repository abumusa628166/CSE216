#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> adj[10];
    int i,j,n,e,s,d,w;
    freopen("BFS.txt","r", stdin);
    printf("Enter number of Node :");
    scanf("%d",&n);
    printf("Enter number of Edge :");
    scanf("%d",&e);


    for(i=0;i<e;i++){
        scanf("%d %d", &s, &d);
        adj[s].push_back(d);
        adj[d].push_back(s);
    }


    printf("\List is :\n");
    for(i=0;i<n;i++){
            printf("%d=>",i);
        for(j=0;j<adj[i].size();j++){
            printf("%d\t", adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}
