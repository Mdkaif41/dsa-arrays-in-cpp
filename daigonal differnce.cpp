#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n][n];
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
       cin>>arr[i][j];
    }
      }
      int temp=0;
      for(int i=0;i<n;i++){
          temp=temp+arr[i][i];
         
      }
      int sec=0;
      for(int i=0;i<n;i++){
          sec=sec+arr[i][n-i-1];
          
      }
      int differnce=abs(temp-sec);
      cout<<differnce<<endl;
      return 0;
}
