#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] ={1,6,2,7,9};
    int n = 5;
    for(int i =0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
return 0;
}

