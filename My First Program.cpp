#include <iostream>
using namespace std;

int main() {
  int x,y,sum;
  char opr;

  cout << "Enter the numbers";
  cin>> x >> opr>> y;
  sum= x+y;
  cout<<x <<opr <<y<<endl;
  cout<<"Sum"<<"="<<sum;
  
  return 0;
}
