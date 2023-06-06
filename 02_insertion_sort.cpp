#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {4,1,8,9,3};
    int n = 5;
    for(int i =1;i<n ;i++)
    {
        int j = i-1;
        int temp = a[i];
        while(a[j]>temp&&j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
return 0;
}

