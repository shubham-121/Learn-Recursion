#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bool f(string str,int i,int j,int count)   //using 2 pointers
// {
//     if(i>=j)
//     return true;
    
//     if(str[i]==str[j]){
//         count++;
//     return f(str, i+1, j-1,count);
//     }
//     else
//     return false;
// }

bool f(string str, int i,int n)   //using 1 pointer
{
    if(i>=n/2)
    return true;
    
    if(str[i]!=str[n-i-1])
    return false;
    
    return f(str,i+1,n);
}
int main()
{
    int count=0;
    string str="NAMAN";
    int i=0, n=str.size()/2;
    
   if (f(str,i,n))
   cout<<"not palindrome"<<endl<<count;
   else
   cout<<"palindrome";

    return 0;
}
