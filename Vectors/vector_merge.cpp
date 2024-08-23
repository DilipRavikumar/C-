#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize two sorted vectors
    vector<int> vec1 = {1, 2, 3}; // First sorted vector
    vector<int> vec2 = {2, 3, 4}; // Second sorted vector

    vector<int> merged; // Vector to store the merged result of vec1 and vec2
    vector<int> unique; // Vector to store the result with duplicates removed

    int i = 0, j = 0; // Indexes for vec1 and vec2 respectively

    // Merge the two sorted vectors into the merged vector
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            merged.push_back(vec1[i]); // Add the smaller element from vec1
            i++; // Move to the next element in vec1
        }
        else
        {
            merged.push_back(vec2[j]); // Add the smaller element from vec2
            j++; // Move to the next element in vec2
        }
    }

    // Append remaining elements from vec1, if any
    while (i < vec1.size())
    {
        merged.push_back(vec1[i]); // Add the remaining elements from vec1
        i++; // Move to the next element in vec1
    }

    // Append remaining elements from vec2, if any
    while (j < vec2.size())
    {
        merged.push_back(vec2[j]); // Add the remaining elements from vec2
        j++; // Move to the next element in vec2
    }

    // Remove duplicates manually
    for (int k = 0; k < merged.size();k++)
    {
        // Check if the current element is already in the unique vector
        bool found = false;
        for (int l = 0; l < unique.size(); l++)
        {
            if (merged[k] == unique[l])
            {
                found = true; // Element is already in unique
                break; // No need to check further
            }
        }
        // If the element is not found in unique, add it
        if (!found)
        {
            unique.push_back(merged[k]); // Add the unique element to the unique vector
        }
    }

    // Print the vector with duplicates removed
    cout << "Vector with duplicates removed: ";
    for (int n : unique)
    {
        cout << n << " "; // Output each element in the unique vector
    }
    cout << endl; // New line after the output

    return 0; // End of the program
}
