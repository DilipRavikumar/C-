#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creating and initializing vectors
    vector<int> vec1 = {1, 2, 3, 4, 5}; // Initializing with values
    vector<int> vec2(5, 10);            // Initializing with 5 elements, all set to 10

    // Adding elements
    vec1.push_back(6); // Adds 6 to the end of vec1

    // Accessing elements
    cout << "Element at index 2: " << vec1[2] << endl; // Accesses the 3rd element
    cout << "Element at index 2 using at(): " << vec1.at(2) << endl; // Same as above, with bounds checking

    // Removing elements
    vec1.pop_back(); // Removes the last element (6)

    // Iterating through the vector
    cout << "Vector elements: ";
    for (int val : vec1) {
        cout << val << " "; // Prints all elements in vec1
    }
    cout << endl;

    // Size and capacity
    cout << "Size of vec1: " << vec1.size() << endl; // Number of elements in vec1
    cout << "Capacity of vec1: " << vec1.capacity() << endl; // Allocated capacity of vec1

    // Clearing the vector
    vec1.clear(); // Removes all elements from vec1
    cout << "Size of vec1 after clearing: " << vec1.size() << endl; // Size after clearing

    return 0;
}
