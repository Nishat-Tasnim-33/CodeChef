#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int a=0;
        cin>>n;
        if (n<5)
        {
            if(n==1) cout<< "East"<<endl;
            else if (n==2) cout<< "South" <<endl;
            else if (n==3) cout<< "West"<<endl;
            else cout<< "North"<<endl;
        }
        else
        {
            a=(n%4);
            if(a==1) cout<< "East"<<endl;
            else if (a==2) cout<< "South" <<endl;
            else if (a==3) cout<< "west"<<endl;
            else cout<< "North"<<endl;
        }
    }
    return 0;
}
