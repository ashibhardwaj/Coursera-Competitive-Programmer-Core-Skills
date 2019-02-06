#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string x;
    cin>>x;
    int dig=x.length();
    int flag=0;
    for(int i=0; i<dig; i++)
    {
        if(x[i]!='9')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<dig;
    else
        cout<<dig+1;
    return 0;
}
