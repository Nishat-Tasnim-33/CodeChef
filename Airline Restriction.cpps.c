#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int b=-1;
        int a=0;
        int arr[5]
        for(int i=0; i<4; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<3; i++)
        {
            if(arr[i]<arr[4])
            {
                b=arr[i];
                if(arr[i]==b)
                {
                    continue;
                    a+=arr[i];
                }
            }
        }
        if(b>arr[4]&&a>arr[3])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
