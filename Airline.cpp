#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[5];
        for(int i=0; i<5; i++)
        {
            scanf("%d",&arr[i]);
        }
        int a=0;
        int b=0;
        int c=0;
        a=arr[0]+arr[1];
        b=arr[0]+arr[2];
        c=arr[1]+arr[2];
        if(a<=arr[3]&&arr[2]<=arr[4])
        {
            printf("YES\n");
        }
        else if(b<=arr[3]&&arr[1]<=arr[4])
        {
            printf("YES\n");
        }
        else if(c<=arr[3]&&arr[0]<=arr[4])
        {
            printf("YES\n");
        }
       else
        {
            printf("NO\n");
        }
    }
    return 0;
}

