#include<iostream>
using namespace std ;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int c[n+1][k+1];
    for(int i=0;i<=n;i++)
        c[i][0]=1;
    for(int i=1;i<=k;i++)
        c[0][i]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
            c[i][j]=c[i-1][j-1]+c[i-1][j];
    cout<<c[n][k];
}
