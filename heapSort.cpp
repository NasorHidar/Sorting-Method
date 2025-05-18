#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& v, int n, int i)
{
    int big=i, left=2*i +1, right=2*i+2;
    if(left<n && v[big]<v[left])
        big=left;
    if(right<n && v[big]<v[right])
        big=right;
    if(big!=i){
    swap(v[big],v[i]);
    heapify(v,n,big);
    }
}

void heapSort(vector<int>& v)
{
    int n=v.size();
    for(int i=n/2 -1;i>=0;i--)
    {
        heapify(v,n,i);
    }
    for(int i=n-1;i>0;i--)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
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
    heapSort(arr);
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
