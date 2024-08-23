#include<iostream>
#include<string>
using namespace std;
bool isValid(const string& s )
{
    int r=0;
    int sq=0;
    int c=0;
    
    for(char ch : s)
    {
        if(ch =='(')
        {
            r++;
        }
        else if(ch == ')')
        {
            if(r==0)
            { 
            return false;
            }
                r--;
            
        }
        else if(ch=='[')
        {
            sq++;
        }
        else if(ch == ']')
        {
            if(sq==0) 
            {
                return false;
            }
            sq--;
        }
        else if (ch=='{')
        {
            c++;
        }
        else if (ch=='}')
        {
            if (c==0) 
            {
                return false;
            }
            c--;
        }
        else{
            return false;
        }
    }


return r==0 && sq==0 && c==0;
}
int main()
{
    string s;
    cin >> s;
    if(isValid(s))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}