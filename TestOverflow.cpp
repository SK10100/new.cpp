/*Test Arithmetic Overflow/underflow*/
#include<iostream>
using namespace std;
int main(){
  //range of int is [-2147483648,2147483647]
  int i1=2147483647;
  cout<<i1+1<<endl;//(Overflow)
  cout<<i1+2<<endl;
  cout<<i1*i1<<endl;

  int i2=-2147483648;
  cout<<i2-1<<endl;//(Underflow)
  cout<<i2-2<<endl;
  cout<<i2*i2<<endl;

  return 0;

}
