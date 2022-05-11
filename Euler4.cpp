// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>

const int max = 999;
const int min = 99;

bool is_palindrome(int& number)
{
    int value = number;
    int reversed = 0;
    while(value > 0)
    {
        reversed *= 10;
        reversed += value % 10;
        value /= 10;
    }
    return (reversed == number);
}
int main()
{
    int maxProduct = 0;
    for(int i = max; i > min; i--)
    {
        for(int j = max; j > min ; j--)
        {
            int product = i * j;
            if(is_palindrome(product))
            {
                maxProduct = (maxProduct > product) ? maxProduct : product;
                break;
            }
        }
    }
    std::cout << "The maximum product which is palindrome is equal to : " << maxProduct << std::endl;
    return 0;
}
