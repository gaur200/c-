#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<" Enter the n and m number: ";
    cin>>n;
    int array[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
  cin>>array[i][j];
        }
      
     }



  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
  cout<<array[i][j]<<" ";
        }
      
     }
     return 0;
}