#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {111, 222, 333, 121, 123}; 
    for (int i = 0; i < vec.size(); i++) {
        int original = vec[i];  
        int rev = 0;
        int left=0;
        
        while (original > 0) {
            left = original % 10;  
            rev = rev * 10 + left;  
            original = original / 10; 
        }
        
        if (rev == vec[i]) {
            cout << vec[i] << " is a palindrome" << endl;
        } else {
            cout << vec[i] << " is not a palindrome" << endl;
        }
    }

    return 0;
}
