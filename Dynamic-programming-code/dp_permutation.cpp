#include<iostream>
using namespace std ;
int main()
{
    int n,k;
    cin>>n>>k;
    int p[n+1][k+1];
    for(int i=0;i<=k;i++)
        p[0][i]=0;
    for(int i=0;i<=n;i++)
        p[i][0]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
            p[i][j]=p[i-1][j]+j*p[i-1][j-1];
    cout<<p[n][k];
}
