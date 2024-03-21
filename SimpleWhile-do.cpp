#include<iostream>
using namespace std;
int main(){
  int sum=0,number=1;
  while(number<=1000){
    sum=sum+number;
    number++;
  }
  cout<<"Sum= "<<sum<<endl;

  return 0;
}