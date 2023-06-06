#include<bits/stdc++.h>
using namespace std;
void countingsort(int a[],int n ,int k)
{
    int count[k];
    int b[n];
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i = 1;i<=k;i++)
    {
        count[i]  = count[i]+ count[i-1];
    }
    for(int i = n-1;i>=0;i--)
    {
        b[--count[a[i]]] = a[i];
    }
    for(int i =0;i<n;i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    int a[17] = {9,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int n = 17;
    int k =9;
    countingsort(a,n,k);
    
return 0;
}