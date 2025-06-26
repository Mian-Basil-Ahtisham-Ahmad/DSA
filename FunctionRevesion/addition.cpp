#include<iostream>
#include<cmath>
using namespace std; 
int addition(int x, int y){
    int result=x+y;
    return result;
}
void fun(string name){
    cout<<"Are you having fun"<<name<<"?"<<endl;
}

int main(){
  int x=addition(10,5);
  cout<<"The sum is "<<x;
  cout<<endl<<endl;
  cout<<"Now the direct print"<<endl;
  cout<<addition(20,30)<<endl;

  fun("Basil");
  cout<<endl;
  cout<<"Now for STL Functions"<<endl;
  int y=10;
//   int x=10;
  int result=x+y;
  cout<<sqrt(result)<<endl;
  return result;

return 0;
} 