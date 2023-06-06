#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid ,int high)
{
    int b[high - low + 1];
    int i = low ;
    int j = mid + 1;
    int k =0;
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j])
        {
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    while(j<=high)
    {
        b[k++] = a[j++];
    }
    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    for(int i =0;i<high-low+1;i++)
    {
        a[low +i]  = b[i];
    }

    
}
void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
    int mid = low+(high-low)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
    }
}
int main()
{
    int a[6] = {8,2,9,3,1,6};
    int n = 6;
    mergesort(a,0,n-1);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}



