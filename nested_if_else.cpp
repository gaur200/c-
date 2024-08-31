#include<iostream>
using namespace std;
int main(){
    //take 3 positive integers input and print the greatest of them
//     int a ,b,c;
//  cout<<"enter first side ";
//  cin>>a;
//  cout<<"enter second side ";
//  cin>>b;
//  cout<<"enter thide side ";
//  cin>>c;
//  //a>b and b
//  if(a>b){//b can never be the greatest
// if(a>c) {
//     cout<<a<<"is greatest";

// }
// else{
//     cout<<c<<"is greatest";
// }
//  }
//  else{
//     if(b>c){
//         cout<<b<<"is greatest";
//     }
//     else{
//           cout<<b<<"is greatest";
//     }

//  }
// }

//take input percentage of a student and print the Grade according to marks;
//1. 81-100 very good 2. 61-80 good 3. 41-60 average 4. <=40 fail

// int n;
// cout<<"enter marks :";
// cin>>n;
// if(n>=81 and n<=100){
//     cout<<"very good";
// }
//  else if(n>=61 ){
//     cout<<" good";
// }
//  else if(n>=41 ){
//     cout<<"Average";
// }
// if(n<=40){
//     cout<<"fail";
// }
// }

//ternary operator

// expression 1? expression 2: expression 3;
// int n;
// cout<<"enter n:";
// cin>>n;
// //(condition )? if true : if false;
// (n%2==0)? cout<<"even":cout<<"odd";
// }

//SWITCH STATEMENT
 
 //write a programm to create a calculater that performs basic arithmetic operations(add,subtract,multiply and divide) using switch case .the calculator should input tow numbers and an operator from user.

//  int n;
//  cin>>n;
//  char op;
// cin>>op;
// int n2;
// cin>>n2;
// if(op=='+')cout<<n+n2;
// if(op=='-')cout<<n-n2;
// if(op=='*')cout<<n*n2;
// if(op=='/')cout<<n/n2;
// }

//switch (integer expression){
// case constant 1:
// do this;
// case constant 2:
// do this;
// case constant 3:
// do this;

// }

//  int n;

//  cin>>n;
//    char op;
//   cin>>op;
//   int n2;
//   cin>>n2;
//   switch (op)
//   {
// case '+':
// cout<<n+n2<<endl;
// break;
// case '-':
// cout<<n-n2<<endl;
// break;
// case '*':
// cout<<n*n2<<endl;
// break;
// case '/':
// cout<<n/n2<<endl;
// break;
// default:
// cout<<"invalid opertator"<<endl;
//   }
// }


int x=3,y,z;
y=x=10;
z=x<10;
cout<<x<<" "<<y<< " "<<z;
}