#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "dilip1234";
    int n = str.length();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1) {
                cout << str[j];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
