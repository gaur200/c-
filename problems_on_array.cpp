//prefix-sum
//Given an integers array 'a' return the prefix sum/running sum in the same array without creating a new array.
// #include<iostream>
// #include<vector>
// using namespace std;


// void     runningSum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i]+=v[i-1];
//     }
//     return;
// }

// // int main(){
// //     int n;
// //     cout<<"Entrer the N : ";
// //     cin>>n;
// //     vector<int>v;
// //     for(int i=0;i<n;i++){
// //         int ele;
// //         cout<<"Element of n : ";
// //         cin>>ele;
// //         v.push_back(ele);

//     }
//     runningSum(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";

//     }
//     cout<<endl;
//     return 0;
// }

//check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.

// bool checkPrefixSuffixSum(vector<int> &v){
//     int total_sum=0;
//     for(int i=0;i<v.size();i++){
//         total_sum+=v[i];
//     }
//     int prefix_sum=0;
//     for(int i=0;i<v.size();i++){
//         prefix_sum+=v[i];
//         int suffix_sum=total_sum-prefix_sum;
//         if(suffix_sum==prefix_sum){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cout<<"Entrer the N : ";
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cout<<"Element of n : ";
//         cin>>ele;
//         v.push_back(ele);
//     }


// cout<<checkPrefixSuffixSum(v)<<endl;
//     return 0;
// }


//Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from I or R (both included).
//Note values of I and R in queries follow 1-based indexing.


// int main(){

//     int n;
//     cout<<"Enter the N :";
//     cin>>n;
//     vector<int> v(n+1,0);
//     for(int i=0;i<=n;i++){
//         cin>>v[i];
//     }

//     //calculate prefix sum array
// for(int i=0;i<=n;i++){
//     v[i]+=v[i-1];
// }

// int q;
// cout<<"Enter the query :";
// cin>>q;
//  while (q--)
//  {
//    int l,r;
//    cin>>l>>r;
     
//      int ans=0;

//      //ans=prefixsumarray[r]-prefixsumarray[l-1]

//      ans = v[r]-v[l-1];
//      cout<<ans<<endl;
//  }
 


//     return 0;
// }