#include <bits/stdc++.h>
using namespace std;
int n;
int k;
int a[30];
long long ans;
bool isprime(int n)
{
    int s=sqrt(double(n));
    for(int i=2; i<=s; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void dfs(int m,int sum,int startx)
{
    if(m==k)
    {
        if(isprime(sum))
            ans++;
        return ;
    }
    for(int i=startx; i<n; i++)
        dfs(m+1,sum+a[i],i+1);
    return ;
}
int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    dfs(0,0,0);
    cout<<ans;
    return 0;
}
