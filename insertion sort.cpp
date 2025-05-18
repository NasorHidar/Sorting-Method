#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int>& v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int key=v[i],j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
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
    insertion(arr);
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
