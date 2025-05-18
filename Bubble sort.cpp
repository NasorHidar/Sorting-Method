#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>& v)
{
    int n=v.size();
    bool swaped;
    for(int i=0;i<n;i++)
    {
        swaped=false;
        for(int j=0;j<n;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swaped=true;
            }
        }
        if(!swaped)
            break;
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
    bubble(arr);
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
