#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "example";
    int vowelFreq[5] = {0}; // Index 0 = 'a', 1 = 'e', 2 = 'i', 3 = 'o', 4 = 'u'

    // Count frequency of each vowel
    for (char c : str) {
        switch(tolower(c)) {
            case 'a': vowelFreq[0]++; break;
            case 'e': vowelFreq[1]++; break;
            case 'i': vowelFreq[2]++; break;
            case 'o': vowelFreq[3]++; break;
            case 'u': vowelFreq[4]++; break;
        }
    }

    // Display only the vowels that are found
    cout << "Found vowels and their frequencies:\n";
    if (vowelFreq[0] > 0) cout << "a: " << vowelFreq[0] << endl;
    if (vowelFreq[1] > 0) cout << "e: " << vowelFreq[1] << endl;
    if (vowelFreq[2] > 0) cout << "i: " << vowelFreq[2] << endl;
    if (vowelFreq[3] > 0) cout << "o: " << vowelFreq[3] << endl;
    if (vowelFreq[4] > 0) cout << "u: " << vowelFreq[4] << endl;

    return 0;
}
