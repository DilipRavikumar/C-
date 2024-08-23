#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="98754613284";

    sort(s1.begin(),s1.end(),greater<int>());
    cout << s1;






}