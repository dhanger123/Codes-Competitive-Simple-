#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
int k,i=0,p=0;
cin>>s>>k;
while(i<s.length() && p<k)
{
   if(s[i]!='9')
    {
        s[i]='9';
        p++;
    }
    i++;
} 
cout<<s<<endl;
    
 return 0;    
}


