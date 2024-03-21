#include<iostream>
using namespace std;
int main(){
   bool valid=false;
   int number;
   cout<<"Enter the number: ";
   cin>>number;
   do{
    if(number>1 && number<10){
      valid=true;
       }
   }while(!(number>1 && number<10));
  cout<<valid;
  return 0;
}

