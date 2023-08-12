#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"Your reversed string : "<<s;
    return 0;
}
