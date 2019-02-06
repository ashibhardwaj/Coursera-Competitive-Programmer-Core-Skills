#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a[2001];
    a[0]=0;
    int x, y, z, flag=0;
    cin>>x>>y>>z;
    for(int i=1; i<1000; i++)
    {
        a[2*i-1]=a[2*i-2]+x;
        a[2*i]=a[2*i-1]-y;
    }
    for(int i=0; i<2001; i++)
    {
        if(a[i]==z)
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    return 0;
}
