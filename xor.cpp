#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,i,n,q;

    cin>>n>>q;

    int arr[n];

    for(i=2;i<=n;i++)
    {
        arr[i] = i;
    }

    while(q--)
    {
        int l,r,ans;
        ans = 1;

        cin>>l>>r;

        for(i=2;i<=n;i++)
        {
            if(arr[i]!=l && arr[i]!=r)
            {
                ans ^= arr[i];
            }
        }
        cout<<"\n"<<ans;
    }
}



