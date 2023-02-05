#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    long arr[n];
    long i;
    long sum=0;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
