#include <bits/stdc++.h>
using namespace std;

void selection(vector<int>& v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[m])
                m=j;
        }
        swap(v[i],v[m]);
    }
}

int main()
{
    int n;
    cout<<"Enter Array size:";
    cin>>n;

    vector<int>arr;

    cout<<"Enter Your Array:";
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    selection(arr);
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++)
    {
        cout <<arr[i];
        if(i<n-1)
            cout<<",";
    }
    cout<<endl;
    return 0;
}
