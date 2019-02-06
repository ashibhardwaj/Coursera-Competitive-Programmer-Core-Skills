#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    char a[5][2];
    int arr[15]={0};
    int flag=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<2; j++)
            cin>>a[i][j];
    }
    char x=a[0][1];
    for(int i=1; i<5; i++)
    {
        if(a[i][1]!=x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<5; i++)
    {
        if(a[i][0]=='A')
        {
            arr[1]++;
            arr[14]++;
        }
        else if(a[i][0]=='2')
            arr[2]++;
        else if(a[i][0]=='3')
            arr[3]++;
        else if(a[i][0]=='4')
            arr[4]++;
        else if(a[i][0]=='5')
            arr[5]++;
        else if(a[i][0]=='6')
            arr[6]++;
        else if(a[i][0]=='7')
            arr[7]++;
        else if(a[i][0]=='8')
            arr[8]++;
        else if(a[i][0]=='9')
            arr[9]++;
        else if(a[i][0]=='T')
            arr[10]++;
        else if(a[i][0]=='J')
            arr[11]++;
        else if(a[i][0]=='Q')
            arr[12]++;
        else if(a[i][0]=='K')
            arr[13]++;
    }
    if(arr[1]==1 && arr[2]==1 && arr[3]==1 && arr[4]==1 && arr[5]==1)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        for(int i=2; i<11; i++)
        {
            if(arr[i]==1 && arr[i+1]==1 && arr[i+2]==1 && arr[i+3]==1 && arr[i+4]==1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
