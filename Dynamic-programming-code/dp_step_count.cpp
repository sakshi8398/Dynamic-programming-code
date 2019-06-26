#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int steps[n+1];
    steps[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
            steps[i]=steps[i-1]+1;
        else
            steps[i]=steps[i/2]+1;
    }
    cout<<steps[n];
}
