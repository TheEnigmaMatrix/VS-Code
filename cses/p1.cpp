#include<bits/stdc++.h>
using namespace std;

int main(){
    long long no;
    cin>>no;
    vector<int> vec;
    long long sum =0 ;
    for(int i=0 ; i<no-1 ; i++){
        long long n;
        cin>>n;
        sum += n;
    }
    long long as = no*(no+1)/2;
    cout<<as-sum;
   
      return 0;
}