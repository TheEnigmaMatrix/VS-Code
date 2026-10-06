#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }

    else if(n==1){
        cout<<1;
    }

    else if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }

    else{
        for(int i=n ; i>0 ; i-=2){
            cout<<i<<" ";
        }
        for(int i=n-1 ; i>0 ; i-=2){
            cout<<i<<" " ;
        }
    }

    return 0;
}
