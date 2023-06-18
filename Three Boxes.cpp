#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void bags()
{
    ll arry[3],d,cnt=1;
    for(int i=0; i<3; i++)
    {
        cin>>arry[i];
    }
    cin>>d;
    sort(arry,arry+3);
    ll jog=arry[0];
    for(int i=1;i<3; i++)
    {
        jog+=arry[i];
        if(jog>d)
        {
            ++cnt;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        bags();
    }
    return 0;
}
