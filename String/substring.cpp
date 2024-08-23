#include <iostream>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "llo";

    // Find the position of str2 in str1
    size_t pos = str1.find(str2);

    // Check if the substring was found
    if (pos != string::npos) {
        // Output the substring starting from the found position
        cout << "Substring found at position " << pos << ": " << str1.substr(pos) << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    return 0;
}
