#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void sequence(int arr[],int index, int n, vector<int>&list)
{
    if(index==n){
        for(auto it:list)
        cout<<it<<"";
        
        cout<<endl;
        return;
    }
    
    list.push_back(arr[index]);
    sequence(arr,index+1,n,list);
    
    list.pop_back();
    sequence(arr,index+1,n,list);
}
int main()
{
    int arr[]={3,2,1};
    int n=3;
    vector<int>list;
    int index=0;
    sequence(arr,index,n,list);

    return 0;
}
