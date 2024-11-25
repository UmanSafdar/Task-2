#include <iostream>
#include <string>
using namespace std;

int main() {
 string input_string;
 cout<<"Enter a string";
 cin>> input_string;
 int sum = 0;
 int num = 0;
 for (int i = 0; i < input_string.length(); i++)
 {
    /* code */
    if (isdigit(input_string[i]))
    {
        /* code */
        num = num * 10 + (input_string[i] - '0');
    }
        else
        {
            sum+= num;
            num =0;
        }
    }
    sum+=num;
    cout<< "Sum: " << sum << endl;

 
 
  
  return 0;
}