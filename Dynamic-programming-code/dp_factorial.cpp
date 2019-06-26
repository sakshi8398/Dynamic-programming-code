#include<iostream>
using namespace std;
int main()
{
    long long  n,i;
    cin>>n;
    long long  fact[n+1];
    fact[0]=1;
    for( i=1;i<=n;i++)
        fact[i]=i*fact[i-1];
    cout<<fact[n];
}
