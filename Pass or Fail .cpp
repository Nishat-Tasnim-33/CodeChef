#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void pass_or_fail()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll d=(a-b);
    ll e= (b*3);
    ll f= e-d;
      if(f>=c)
        {
            cout<< "PASS"<<endl;
        }
        else
        {
            cout<< "FAIL"<<endl;
        }
    }


int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        pass_or_fail();
    }
    return 0;
}
