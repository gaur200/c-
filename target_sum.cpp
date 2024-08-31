//find the total number of pairs in the array whose sum is equal to the givn value x.
#include<iostream>
using namespace std;
// int main(){
//     int array[]={2,3,4,5,5,6};
//     int targetsum=5;
//     int size=5;
//      int pairs=0;
//       for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;i++){
//             if(array[i]+array[j]==targetsum){
//                 pairs++;
//             }
//         }
//       }
//       cout<<pairs<<endl;
// return 0;
// }

//count the number of triplets whose sum is equal to the given value x.
  

  // int main(){
    // // [3,1,2,4,0,6]
    // //
    // int array[]={3,1,2,4,0,6};
    // int targetsum=5;
    // int size=6;
    // int triplets=0;
    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         for(int k=j+1;k,size;k++){
    //             if(array[i]+array[j]+array[k]==targetsum){
    //                 triplets++;
    //             }
    //         }
    //     }
    // }
    // cout<<triplets<<endl;
    // return 0;

    //find the uniqe number in a given array where all the ele are being repeated twice one value being unique.
//     int array[]={2,3,1,3,2,4,4,5,1};
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(array[i]==array[j]){
//                 array[i]=array[j]=-1;
//             }
//         }
//     }
// int unique=0;
// for(int i=0;i<size;i++){
//     if(array[i]>0){
//         cout<<array[i];
//     }
// }
// return 0;
//   }

//find the second largest element in the given array.

// int largestelementindex(int array[],int size);{
//   int max=INT16_MIN;
//   int maxindex=-1;
//   for(int i=0;i<size;i++){
//     if(array[i]>max){
//       max=array[i];
//       maxindex=i;

//     }
//   }
//   return max;
// }

// int secondLargestElement(int array[],int size){
//   int max=INT16_MIN;
//   int second_max=Int_MIN;
//   for(int i=0;i<size;i++){
//     if(array[i]>max){
//       max=array[i];
//     }
//   }
//   for(int i=0;i<size;i++){
//     if(array[i]>second_max && array[i]!=max){
//       second_max=array[i];
//     }
//   }
//   return second_max;
// }
// int main(){
//   int array[]={2,3,5,7,6,1};
//   intindexoflargest = largestele(array,6);
// // array[indexoflargest]=-1;
// int indexofsecondlargest=largestelementindex(array,6);
// for(int i=0;i<n;i++){
//   if(array[i]==largestelementindex){
//     array[i]=-1;
//   }
// }
// cout<<array[indexofsecondlargest]<<endl;


//   return 0;
// }
//2,3,4,5,7,8
//

//Rotate the given array 'a' by k steps, where k is non-negative Note: k can be greater than n as well where n is the size of array 'a'.
// int array[]={1,2,3,4,5};
// int k=2;
// //k can be greated than n
// k=k%n;
// int ansarray[5];
// int j=0;
// for(int i=n-k;i<n;i++){
// ansarray[j++]=array[i];
// }

// return 0;

//given q queries check if the given number is present in the array or not.
//note:value of all the elements in the array is less than 10 to the power 5.
 

//  int main(){
//   int n;
//   cin>>n;
//  vector<int>v(n);
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }
//   const int N=1e5+10;
// vector<int>freq(N,0);
// for(int i=0;i<n;i++){
//   freq[v[i]]++;
// }
// cout<<"enter queries:";
// int q;
// cin>>q;
// while (q--)
// {
//   /* code */
// }


//  }