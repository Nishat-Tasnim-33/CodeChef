#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void inovate()
{
    ll a,b;
    cin>>a>>b;
   char str[30];
   cin>>str;
   ll c=0;
   ll d=0;
   vector<int>get;
   for(int i=0; i<30; i++)
   {
       if(str[i]==1)
       {
           c++;
       }
       if(str[i]==1&&str[i+1]==1)
       {
           d++;
           get.push_back(d);
           if(str[i+1]==1&&str[i+2]==0)
           {
               d++;
               get.push_back(d);
           }
       }

        d=0;
   }
   ll maxxi=-1;
   for(int i=0; i<get.size(); i++)
   {
      /* if(maxxi<get[i])
       {
           maxxi=get[i];
       }*/
       cout<<get[i];
   }
  /* cout<<maxxi;
   ll sub=c-maxxi;
   ll x=sub*a;
   ll y=maxxi*b;
   ll all=x+y;
   cout<< all<<endl;*/
}


int main()
{
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        inovate();
    }
    return 0;
}

