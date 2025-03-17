#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);

    int product = 1;
    int num = 0;

    for (char c : input_string) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (num != 0) {
            product *= num;
            num = 0;
        }
    }

    if (num != 0) {
        product *= num;
    }

    cout << "The Product of Numbers is : " << product << endl;

    return 0;
}