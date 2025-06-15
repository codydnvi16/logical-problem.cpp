#include<iostream>
using namespace std;

// FIBONACCI SERIES 

int main(){
 int num1=0,num2=1,num3,number;
 cout<< "enter number" << endl;
 cin >> number;
 cout << num1 <<endl<< num2<< endl;

 for (int i=2;i<=number;i++){
  num3=num1+num2;
  cout << num3<<endl;
  num1=num2;
  num2=num3;
  }
  return 0;
  }

 
