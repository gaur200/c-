//sort array consisting of only 0s and 1s
#include<iostream>
#include<vector>
using namespace std;

// void sortZeroesAndOnes(vector<int> &v){
//     int zeroes_count=0;
//     for(int ele:v){
//         if(ele==0){
//             zeroes_count++;
//             //counting zeros

//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i>zeroes_count){
//             v[i]=0;
//         }else{
//             v[i]=1;
//         }
//     }

// int left_ptr=0;
// int right_ptr=v.size()-1;
// while (left_ptr<right_ptr){
//     if(v[left_ptr]==1 && v[right_ptr]==0){
//         v[left_ptr]=0;
//         v[right_ptr++]=0;
//         v[right_ptr--]=1;

//     }
//     if(v[left_ptr]==0){
//         left_ptr++;

//     }
//     if(v[right_ptr]==1){
//         right_ptr--;
//     }
// }
// return;



//  }
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     vector <int>v;
//     for(int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);

//     }
//     sortZeroesAndOnes(v);
//     for(int i=0;i<n;i++){
// cout<<v[i]<<endl;
//     }cout<<endl;
//     return 0;
// }



//given an array of integers 'a' move all the even integers at the begginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

//  void sortByparity( vector<int> &v){
//  int left_ptr=0;
//  int right_ptr=v.size()-1;

//  while (left_ptr<right_ptr)
//  {
//     if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
// swap(v[left_ptr],v[right_ptr]);
// left_ptr++;
//  }
//  if(v[left_ptr]%2==0){
//  left_ptr++;
 
//  }
//  if(v[right_ptr]%2==1){
//  right_ptr--;
//  }
// }
// }
// int main(){



// int n;
// cout<<"Enter the number :";
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// int ele;
// cin>>ele;
// v.push_back(ele);

// }
// sortByparity(v);
// for(int i=0;i<n;i++){
// cout<<v[i]<<" ";


// }
// }



//Given an integer array 'a' sorted in non - decreasing order, return an array of the squares of each number sorted in non - decreasing order.
void     sortedSquaredArray(vector<int>&v){
    vector<int>ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while (left_ptr<right_ptr)
    {
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;

        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}

int main(){
    int n;
    cout<<"Enter the Number of n :";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the Element :";
        cin>>ele;
        v.push_back(ele);
    }
    sortedSquaredArray(v);
}