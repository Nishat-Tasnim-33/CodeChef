#include<bits/stdc++.h>
using namespace std;

void Mixture( int a, int b)
{
    if(a>0&&b>0) cout<< "Solution"<<endl;
    else if(a>0 && b<=0) cout<< "Solid"<<endl;
    else if (a<=0 && b>0) cout<< "Liquid"<<endl;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a=0, b=0;
        cin>>a>>b;
        Mixture(a,b);
    }
    return 0;
}
