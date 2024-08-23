#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="abc";

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<< s1;
    string s2="XYZ";
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    cout<< s2;


}