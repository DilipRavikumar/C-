#include <iostream>
using namespace std;

int main() {
    int n=9;
    

    int count = 0;

    for (int k = 1; k * (k + 1) / 2 <= n; ++k) {
        if ((n - k * (k - 1) / 2) % k == 0) {
            count++;
        }
    }

    cout << "Number of ways to express " << n << " as the sum of consecutive integers: " << count << endl;

    return 0;
}
