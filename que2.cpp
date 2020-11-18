#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

void indexOfSubstring(string str1, string str2)
{
    sort(str2.begin(), str2.end());

    do {
        size_t found = str1.find(str2);
        if (found != string::npos)
            cout<< "substring '" << str2 << "' present at index " << found << endl;

        found = str1.find(str2, found + 1);
        if (found != string::npos)
            cout<< "substring '" << str2 << "' present at index " << found << endl;

    } while (next_permutation(str2.begin(), str2.end()));
}

int main()
{
    string str1, str2;
    cout << "Enter the string : ";
    cin >> str1;
    cout << "Enter the substring : ";
    cin >> str2;
    indexOfSubstring(str1, str2);



    return 0;
}
