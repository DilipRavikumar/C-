#include <iostream>
using namespace std;

int main() {
    int height = 7; // Height of the pattern

    for (int i = 0; i < height; i++) {
        // D
        for (int j = 0; j < height; j++) {
            if (j == 0 || (i == 0 && j < height - 1) || (i == height - 1 && j < height - 1) || (j == height - 1 && i != 0 && i != height - 1)) {
                cout << "$";
            } else {
                cout << " ";
            }
        }
        cout << "  "; // Space between letters

        // I
        for (int j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == height / 2) {
                cout << "$";
            } else {
                cout << " ";
            }
        }
        cout << "  "; // Space between letters

        // L
        for (int j = 0; j < height; j++) {
            if (j == 0 || i == height - 1) {
                cout << "$";
            } else {
                cout << " ";
            }
        }
        cout << "  "; // Space between letters

        // I
        for (int j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == height / 2) {
                cout << "$";
            } else {
                cout << " ";
            }
        }
        cout << "  "; 

        // P
        for (int j = 0; j < height; j++) {
            if (j == 0 || (i == 0 && j < height - 1) || (i == height / 2 && j < height - 1) || (j == height - 1 && i < height / 2 && i != 0)) {
                cout << "$";
            } else {
                cout << " ";
            }
        }

        cout << endl; 
    }

    return 0;
}
