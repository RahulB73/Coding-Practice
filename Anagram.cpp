// Checking string is anagram or not

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2) {
    int freq[26] = {0};

    int l1 = str1.length();
    int l2 = str2.length();

    if (l1 != l2) {
        return false;
    }

    for (int i = 0; i < l1; i++) {
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    bool result = isAnagram(str1, str2);

    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
