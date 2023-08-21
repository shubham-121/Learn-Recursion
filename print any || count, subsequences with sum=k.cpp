//////////print any one subseq////////
#include <bits/stdc++.h>
#include <iostream>
//int count ;
using namespace std;
bool sequence(int arr[],int index, int n, vector<int>&list, int sum, int s)
{
    
    if(index==n){
        if(s==sum)
        {
         for(auto it:list) cout<<it<<"";
         cout<<endl;
         
         return true;
        }
        
        else return false ;
    }
    
    list.push_back(arr[index]);
    sum=sum+arr[index];
    if(sequence(arr,index+1,n,list,sum,s)==true) return true;
    
    list.pop_back();
    sum=sum-arr[index];
    if(sequence(arr,index+1,n,list,sum,s)==true)return true;
    
    return false;
    
}
int main()
{
    int arr[]={1,3,1};
    int n=3; int sum=0; int s=2;
    vector<int>list;
    int index=0;
   cout<<sequence(arr,index,n,list,sum,s);

    return 0;
}

/////////////////count subsequence///////////////////////


#include <bits/stdc++.h>
#include <iostream>
//int count ;
using namespace std;
int sequence(int arr[],int index, int n, int sum, int s)
{
    
    if(index==n){
        if(s==sum)
        {
         return 1;
        }
        
        else return 0 ;
    }
    
   // list.push_back(arr[index]);
    sum=sum+arr[index];
    int left=sequence(arr,index+1,n,sum,s);
    
    //list.pop_back();
    sum=sum-arr[index];
    int right=sequence(arr,index+1,n,sum,s);
    
    return left + right;
    
}
int main()
{
    int arr[]={1,3,1};
    int n=3; int sum=0; int s=2;
    
    int index=0;
   cout<<sequence(arr,index,n,sum,s);

    return 0;
}

