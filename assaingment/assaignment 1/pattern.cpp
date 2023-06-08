#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n;
    s=n-1;
    k=1;
    for (int i = 1; i <= (2*n)-1; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <=k; j++)
        {
            cout<<"*";
        }
         if (i<=n-1) 
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }

        cout<<"\n";
        
    }
    
    return 0;
}