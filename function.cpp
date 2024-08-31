#include<iostream>
#include<cmath>
using namespace std;
//  void usa(){
//     cout<<"good moring"<<endl;
// }
// void india(){

//     cout<<"good afternoon"<<endl;
//     return;
//        cout<<"hey this a main"<<endl;
//           cout<<"good afternoon"<<endl;
// }
// void napal(){

//     cout<<"good afternoon"<<endl;
// }
// int main(){
//   napal();
    // cout<<"hey this a main"<<endl;
//    india();
//    usa();
   
// }
//  void usa(){
//     cout<<"You are in Usa"<<endl;
//     return ;
//  }
//   void india(){
//     cout<<"You are in India"<<endl;
//     usa();
//  }
// int main(){
//     cout<<"Yor in main"<<endl;
   
//     india();
//     return 0;

// }
//return type:sum function se samajte hai
// void sum(int a,int b){
//     cout<<a+b;
// }
//  int main(){
//     int a;
//     cout<<"Enter 1st Number :";
//     cin>>a;
//     int b;
//     cout<<"Enter 2st Number :";
//     cin>>b;
//     sum(a,b);
//  }

// int sum (int a,int b){
//     return a+b;
// }
// int main(){
//     cout<<sum(72,9);
// }

//library functions
//sqrt(),cbrt(),min(),max(),pow()

// int main(){
    // cout<<sqrt(10);
    // cout<<min(4,9);
    // cout<<max(4,9);
    //   cout<<cbrt(10);
    // cout<<pow(2,10);

// }

// //combination and permutation
// int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f *=i;

//     }
//     return f;
// }

// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//      int r;
//     cout<<"Enter r : ";
//     cin>>r;
//     int a=fact(n);

//     int b=fact(n);

//    int c=fact(n);

//     cout<<a/(b*c);



// }


//permutation  = n/p/r=n!/(n-r)!
// int ncr(int n,int r){
     

//     int b=fact(r);

//    int c=fact(n-r);

//     return a/(b*c);

// }
// int main(){
//     cout<<"Enter n :";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";

//         }
//         cout<<endl;
//     }
// }

//scope of variable
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<i<<endl;
//     }
// //       cout<<i<<endl;
// // }


//formal parameters= and actual=actual values that are pasd parameters



//swap 2 numbers

// int main(){
//     int x=2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     x=y;
//     y=x;
//        cout<<x<<" "<<y<<endl;
// }
//method 1.
// int main(){
//     int x=2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
//     int temp=x;
//     x=y;
//     y=temp;
//        cout<<x<<" "<<y<<endl;
// }
//without using third variable
// int main(){
//     int x=45;
//     int y=59;
//     cout<<x<<" "<<y<<endl;
//    x=x+y;
//    y=x-y;
//    x=x-y;
//        cout<<x<<" "<<y<<endl;
// }
void swap(int& x,int& y){
int temp =x;
x=y;
y=temp;
}

int main(){
    int x=12;
    int y=15;
    cout<<x<<" "<<y<<endl;
    swap (x,y);
   
    cout<<x<<" "<<y<<endl;
}