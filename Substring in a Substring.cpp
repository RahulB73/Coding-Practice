// Substring in a Substring
// Write a code to add string in a substring
// Ex.  String : ABCDEFGH
//      Substring : RAH
//      Position : 2 
//      newString : ABRAHCDEFGH

// There are multiple approches to do this
// Approch 1 : Slice the String into to parts from given postion and add Substring
// Approch 2 : Use prebuild method to add substring to given string
// Approch 3 : Manual approch in which change the postion of characters to make space for substring


#include <iostream>
#include <string>

std::string insertString(std::string str, const std::string& substr, int pos) {
    int str_len = str.length();
    int substr_len = substr.length();

    // Check if the position is valid or if it's at the end of the string
    if (pos >= str_len) {
        str += substr; // Append the substring to the end
    } else {
        // Shift characters to make room for the substring
        for (int i = str_len - 1; i >= pos; i--) {
            str[i + substr_len] = str[i];
        }

        // Insert the substring at the specified position
        for (int i = 0; i < substr_len; i++) {
            str[pos + i] = substr[i];
        }
    }

    return str;
}

int main() {
    std::string str;
    std::string substr;
    int pos;

    std::cout << "Enter the string: ";
    std::cin >> str;

    std::cout << "Enter the substring: ";
    std::cin >> substr;

    std::cout << "Enter the position in which you want to insert the string: ";
    std::cin >> pos;

    std::string result = insertString(str, substr, pos);
    std::cout << "New string after insertion is " << result << std::endl;

    return 0;
}
