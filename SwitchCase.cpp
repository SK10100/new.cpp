//switch-case
#include<iostream>
using namespace std;
int main(){
  char opr;
  int num1=2,num2=3,result;
  cout<<"Enter a mathematical operation(+,-,*,/,%):";
  cin>>opr;
  cout<<"Enter the first number: "<<endl;
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  switch(opr){
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '*':
    result=num1*num2;
    break;
    case '/':
      if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; // return an error code
      }
      result = num1 / num2;
      break;
    case '%':
      if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; // return an error code
      }
      result = num1 % num2;
      break;
    default:
      cout << "Error: Invalid operation." << endl;
      return 1; // return an error code

  }
  cout<<"Result: "<<result;

  return 0;
}


  