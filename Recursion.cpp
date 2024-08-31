#include<iostream>
using namespace std;
// void  greet(){
//     cout<<"hey"<<endl;
// greet();
// }
// int main(){
//     greet();
// }

//print n to 1.
// void  print(int n){
//     if(n==0) return ;
//     cout<<n<<endl;
// print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the nu :";
//     cin>>n;

//     print(n);
// }


// void  print(int n,int x){
//     if(n==90) return ;
//     cout<<n<<endl;
// print(x+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter the nu :";
//     cin>>n;

//     print(1,n);
// }
//n to 1 without using third parameter
// void  print(int n){
    
//     if(n==0) return ;

// print(n-1);
//   cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the nu :";
//     cin>>n;

//     print(n);
// }

// PRINT sum from 1 to n(parameterised)
// //print sum from 1 to n (return type)
// int sum(int n){
//   if(n==1) return 1;
//   return  n+sum(n-1);
// }
// int main(){
//   int n;
//   cout<<"Enter the Nu :";
//   cin>>n;
//   cout<<sum(n);

// }

//MAKE a function which calculates the factorial recursion

// int fact(int n){
//   if(n==1) return 1;
//   return  n*fact(n-1);
// }
// int main(){
//   int n;
//   cout<<"Enter the Nu :";
//   cin>>n;
//   cout<<fact(n);

// }
//make a function which calculates 'a'raised to the 'b' using recursion.
// int power(int a,int b){
// if(b==0) return 1;
// return a*power (a,b-1);
// }


// int main(){
//   int a;
//   cout<<"Enter base : ";
//   cin>>a;
//   int b;
//   cout<<"Enter power :";
//   cin>>b;
//   cout<<a<<"raised to the power"<< b<<"is"<<power(a,b);
// }

//wap to calculate the nth fibonacci number using recursion.
// int fibo(int n){
//   if(n==1||n==2) return 1;
//   return fibo(n-1) + fibo(n-2);
// }
// int main(){
//   int n;
//   cout<<"Enter n :";
//   cin>>n;
//   cout<<fibo(n);
// }