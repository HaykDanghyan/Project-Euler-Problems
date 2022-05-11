// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?


#include <iostream>

bool is_prime(int& num)
{
    for(int i = 2; i < num / 2; i++ )
    {
        if(num % i == 0){return false;}
    }
    return true;
}

int main()
{
    int index = 0;
    std::cout << "Please enter the index : ";
    std::cin >> index;

    for(int i = 3,j = 0; ; i++)
    {
        if(is_prime(i))
        {
            j++;
            if(j == index)
            {
                std::cout << i << std::endl;
                break;
            }
        }
    }
    return 0;
}