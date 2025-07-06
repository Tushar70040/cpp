#include <iostream>


using namespace std;

void plaindromes(string s)
{
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }
    if (s == rev)
    {
        cout << "this is a plaindrom" << " " << s;
    }
    else
    {
        cout << "this is not a plaindrome";
    }
}

void plaindromn(int n)
{
    string num = to_string(n);
    string rev = "";

    for (int i = num.length() - 1; i >= 0; i--)
    {
        rev = rev + num[i];
    }
    if (rev == num)
    {
        cout << "the number is palindrome " << stoi(rev);
    }
    else
    {
        cout << "the number is not a palindrome";
    }
}

int main()
{
    string name = "mam";
    plaindromes(name);
    cout << "\n";

    int digit = 45854;
    plaindromn(digit);

    return 0;
}