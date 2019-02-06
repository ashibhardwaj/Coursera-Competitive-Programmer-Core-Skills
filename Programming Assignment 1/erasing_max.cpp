#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a[100];
    int n, maxi=0, count=1, ind=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==maxi)
        {
            count++;
            if(count==3)
            {
                ind=i;
            }
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
            ind=i;
            count=1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i!=ind)
        cout<<a[i]<<" ";
    }
    return 0;
}
