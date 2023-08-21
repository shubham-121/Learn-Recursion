#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void sequence(int arr[],int index, int n, vector<int>&list, int sum, int s)
{
    
    if(index==n){
        if(s==sum){
         for(auto it:list)
         cout<<it<<"";
        }
         cout<<endl;
        
        return ;
    }
    
    list.push_back(arr[index]);
    sum=sum+arr[index];
    sequence(arr,index+1,n,list,sum,s);
    
    list.pop_back();
    sum=sum-arr[index];
    sequence(arr,index+1,n,list,sum,s);
}
int main()
{
    int arr[]={1,3,1};
    int n=3; int sum=0; int s=2;
    vector<int>list;
    int index=0;
    sequence(arr,index,n,list,sum,s);
    cout<<count;

    return 0;
}
