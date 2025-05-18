#include <bits/stdc++.h>
using namespace std;

int part(vector<int>& v, int low, int high)
{
    int privot=v[high],start=low;
    for(int i=low;i<high;i++)
    {
        if(v[i]<privot)
        {
            swap(v[i],v[start]);
            start++;
        }
    }
    swap(v[start],v[high]);
    return start;
}

void quick(vector<int>& v, int low ,int high)
{
    if(low<high)
    {
        int pi=part(v,low,high);

        quick(v,low,pi-1);
        quick(v,pi+1,high);
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
    quick(arr,0,n-1);
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
