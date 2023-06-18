#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        int c=0;
        int d=0;
        cin>>a>>b;
        c=b-a;
        if(c>=0)
        {
            d=a-c;
        }
        else
        {
            d=a+c;
        }
        cout<<d<<endl;
    }
    return 0;
}

