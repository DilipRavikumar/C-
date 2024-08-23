#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "example";
    int freq[256] = {0}; // Assuming ASCII characters

    // Count frequency of each character
    for (char c : str) {
        freq[c]++;
        cout<<freq[c];

    }
    // Find the maximum frequency
    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Character with max frequency: " << maxChar << " (Frequency: " << maxFreq << ")" << endl;

    return 0;
}
