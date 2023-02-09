#include<bits/stdc++.h>
using namespace std;
int main (){
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int apples=0;
    int oranges=0;
    int A[m],B[n];
    for(int i=0;i<m;i++){
        cin>>A[i];
    }
    for(int j=0;j<n;j++){
        cin>>B[j];
    }
    for(int i=0;i<m;i++){
        if((a+A[i]>=s)&&(a+A[i]<=t)){
            apples++;
        }
    }
    for(int j=0;j<n;j++){
        if((b+B[j]>=s)&&(b+B[j]<=t)){
            oranges++;
        }
    }
    cout<<apples<<endl<<oranges;
    return 0;
}
