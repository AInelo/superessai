#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> n;

    std::cout << "Fibonacci Series up to " << n << " terms:\n";

    for (int i = 0; i < n; ++i)
    {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
