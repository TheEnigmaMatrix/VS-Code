#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    long long currentlength =0 , maxlength =0;
    for(long long i=1 ; i<s.length() ; i++){
            if(s[i]==s[i-1]) currentlength++;
            if(s[i]!=s[i-1] || i==s.length()-1){
                if(currentlength>=maxlength){
                    maxlength=currentlength;
                }
                currentlength = 0;
                
            }
    }
    cout<<maxlength+1;
    return 0;
}   