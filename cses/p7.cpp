#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    long long sum = (n*(n+1))/2;

    if(sum %2 != 0){
        cout<<"NO";
        return 0;
    }

    if((sum/2)%2 != 0){
        cout<<"YES"<<"\n";
        cout<<2<<"\n";
        cout<<sum/4<<" "<<(sum/4)+1<<"\n";
        cout<<n-2<<"\n" ;
        for(int i=1 ; i<n+1 ; i++){
            if(i==sum/4) continue;
            else if(i==(sum/4)+1) continue;
            else cout<<i<<" ";
        }

    }

    if((sum/2)%2 == 0){
        cout<<3<<"\n";
        cout<<sum/4<<" "<<(sum/4)+1<<"1"<<"\n";
        cout<<n-3<<"\n" ;
        for(int i=2 ; i<n+1 ; i++){
            if(i==sum/4) continue;
            else if(i==(sum/4)+1) continue;
            else cout<<i<<" ";
        }

    }    

    return 0;
}