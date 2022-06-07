//This is the code for finding the duplicates in the string using hash table in minimum time

#include<iostream>
using namespace std;

int main()
{
    int hash[26]={0};
    string str;
    cout<<"Enter the string to find the duplicates "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        hash[str[i]-97]+=1;
    }
    for(int i=0;i<=25;i++)
    {
        if(hash[i]>1)
        {
            cout<< (char)(i+97) <<" is occuring "<<hash[i]<< " times"<<endl;
        }
    }
    
    return 0;
}
