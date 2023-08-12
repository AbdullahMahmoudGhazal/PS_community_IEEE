#include <iostream>
#include <vector>
#include <array>
using namespace std;
int LengthOfLastWord(string s);
int main(int argc, char const *argv[])
{
    string s;
    int l;
    cout<<"Enter your phrase : ";
    cin>>s;
    l=LengthOfLastWord(s);
    cout<<"Length = "<<l<<endl;
    return 0;
}
int LengthOfLastWord(string s)
{
    int length = 0;
    int last = s.size() - 1;
    while (last >= 0 && s[last] == ' ')
    {
        last--;
    }
    while (last >= 0 && s[last] != ' ')
    {
        length++;
        last--;
    }

    return length;
}