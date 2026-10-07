#include<bits/stdc++.h>
using namespace std;
int main(){
    int NOT;
    cin>>NOT;
    while(NOT--){
        int noe;
        cin>>noe;
        string arr;
        cin >> arr;
        int no1=0;
        int  no0=0;
        for(int i=0 ; i<noe ; i++){
            
            if(arr[i]=='0') no0++;
        }
        int ans=10000000;
        
        if(arr[0]=='1') cout<<no0<<endl;
        else{
            for(int i=0 ; i<noe ; i++){
                if(arr[i]=='0') no0--;
                else no1++;
                ans = min(ans, no1+no0);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}