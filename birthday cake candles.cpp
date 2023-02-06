#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int candles[n];
    for(int i=0;i<n;i++){
        cin>>candles[i];
    }
    int heights=0;
    for(int i=0;i<n;i++){
        heights=max(heights,candles[i]);    
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(candles[i]==heights){
            count++;
    }
    }
    cout<<count<<endl;
    return 0;
}
