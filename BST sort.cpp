#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* right;
    Node* left;
    Node(int x):val(x),right(NULL),left(NULL){};
};

Node* insertNode(Node* root,int val)
{
    if(!root) return new Node(val);
    if(val<root->val)
        root->left=insertNode(root->left,val);
    else
        root->right=insertNode(root->right,val);

    return root;
}

void inorder(Node* root,vector<int>& v)
{
    if(!root)
        return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}

void bst(vector<int>& v)
{
    Node* root= NULL;
    for(int i: v)
    {
        root=insertNode(root,i);
    }
    v.clear();
    inorder(root,v);
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
    bst(arr);
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
