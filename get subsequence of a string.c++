
#include <iostream>

using namespace std;


string getss(string str)
{
    if(str.size==0)
    {
        vector<int>empty;        
        empty.push("");         //subsequence of an empty vector [] is [""] only
        return empty;
    }
    
    char first_letter=str.charAt(0);      //get first letter
    char remaining=str.subString(1);            //store remaining letters
    
    vector <int>res=getss(remaining);         // //call function rescursively on remaining letters
    vector <int> newRes;
    
    for(i:res)
    {
        newRes.push(""+i);                        //add the subsequence you got
        newRes.push(first_letter +i );            //combine it with first letter of string
    }
    return newRes;
}
int main()
{
    string str="abc";
    getss(str);
    .......
    .......
    .......
    .......

    return 0;
}
