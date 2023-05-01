

#include <iostream>

using namespace std;

int maxNum(int arr[], int idx)
{
    if(idx==arr.size()-1)
    return arr[idx];
    
    int temp=arr[idx];
    int maxi=maxNum(arr,idx+1);
    
    if(maxi>temp)
    return maxi;
    else
    return temp;
}
int main()
{
    int arr[5]={22,33,4,19,7};
    int idx=0;
    
    int maximum=maxNum(arr, idx);
    cout<<maximum;

    return 0;
}
