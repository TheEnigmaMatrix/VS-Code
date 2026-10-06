#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ; i++){
        cin>>vec[i];
    }
    long long ans = 0;
    
    for(long long i=1 ; i<n ; i++){
        if(vec[i]<vec[i-1]){
            ans += vec[i-1]-vec[i];
            vec[i]=vec[i-1];
        }
    }
    cout<<ans ;
    return 0;
}