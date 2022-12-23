#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int ptr1=0,ptr2=1,sum=0;
    cout<<s.length()<<endl;
    while(ptr2<s.length())
    {
        if(s.length()==1)
        {
                break;
            
        }
        else if(sum==6)
        {
            break;
        }
        else if(s[ptr1]==s[ptr2])
        {
            sum++;
            ptr2++;
        }
        else
        {
            sum=0;
            ptr1=ptr2;
            
        }
    }
    cout<<sum<<endl;
    if(s.length()==1)
    {
        cout<<"Good luck!"<<endl;
    }
    else if(sum%6==0) cout<<"Sorry, sorry!"<<endl;
    else cout<<"Good luck!"<<endl;   
 return 0;    
}