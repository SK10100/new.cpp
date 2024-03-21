#include<iostream>
using namespace std;
int main(){
  int x=5;
  int y=10;
  int z=20;
  x=y;
  x=y=z;
  cout<<x<<endl<<y<<endl<<z<<endl;

  return 0;
}