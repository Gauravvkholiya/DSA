    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int a [6] = { 2,54,4,1,5,78};
        int n =6;
        for(int i =0;i<n-1;i++)
        {
            int min = i;
            for(int j = i+1;j<n ;j++)
            {
                if(a[j]<a[min])
                {
                    min = j;
                }
                
            }
            if (min != i)
            {
                swap(a[i], a[min]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "  ";
        }

    return 0;
    }