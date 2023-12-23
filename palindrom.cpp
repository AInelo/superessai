

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
