#include <bits/stdc++.h>
using namespace std;

void marge(vector<int>& v, int l, int m,int r)
{
    vector<int>left(v.begin()+l,v.begin()+m+1);
    vector<int>right(v.begin()+m+1,v.begin()+r+1);

    int i=0,j=0,k=l;
    while(i<left.size() && j<right.size())
    {
        if(left[i]<=right[j])
            v[k++]=left[i++];
        else
            v[k++]=right[j++];
    }
    while(i<left.size()) v[k++]=left[i++];
    while(j<right.size())v[k++]=right[j++];
}

void margeSort(vector<int>& v, int l, int r)
{
    if(l<r){
    int m=l+(r-l)/2;
    margeSort(v,l,m);
    margeSort(v,m+1,r);
    marge(v,l,m,r);
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
    margeSort(arr,0,n-1);
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
