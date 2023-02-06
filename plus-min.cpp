#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float odd,even,zero;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    if(arr[i]>0){
        odd++;
    }
    else if(arr[i]==0){
        zero++;
    }
    else if(arr[i]<0){
        even++;
    }
    }
    cout<<fixed<<setprecision(6)<<odd/n<<endl;
    cout<<fixed<<setprecision(6)<<even/n<<endl;
    cout<<fixed<<setprecision(6)<<zero/n<<endl ;       
}
