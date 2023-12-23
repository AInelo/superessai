#include <iostream>
#include <cstring>
#include <iostream>
#include <cstring>

bool isPalindrome(const std::string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        ++left;
        --right;
    }

    return true;
}

int main()
{
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input))
    {
        std::cout << input << " is a palindrome.\n";
    }
    else
    {
        std::cout << input << " is not a palindrome.\n";
    }

    return 0;
}
