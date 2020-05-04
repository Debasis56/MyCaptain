#include <bits/stdc++.h>
using namespace std;

void primeSieve(int *p, int n)
{
    for(int i = 3; i<=n; i+=2)
    {
        p[i]=1;
    }
    for(int i=3; i<=n; i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{
    int n;
    cout<<"Enter a positive integer : ";
    cin>>n;
    int p[n]={0};
    primeSieve(p, n);
    int i, j;
    for(i=1,j=n-1; i<=n/2; i++,j--)
    {
        if(i+j==n)
        {
            if(p[i]==1 && p[j]==1)
            cout<<n<<" = "<<i<<" + "<<j<<"\n";
        }
    }
}