#include <stdio.h>
int a[20][20],q[20],visit[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
int u;
q[++r]=v;
visit[v]=1;
while(f<=r)
{
u=q[f++];
for(i=1;i<=n;i++)
{
if(a[u][i]==1&&visit[i]==0)
{
visit[i]=1;
q[++r]=i;
printf("%d->%d\n",u,i);
}
}
}
}

int main()
{
    int v;
printf("\n Enter the number of vertices:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
visit[i]=0;
}
printf("\n Enter graph data in matrix form:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the starting vertex:");
scanf("%d",&v);
bfs(v);
printf("\n The node which are reachable are:\n");
for(i=1;i<=n;i++)

if(visit[i])
printf("\t%d",i);
return 0;
}
