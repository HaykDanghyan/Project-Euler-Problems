// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23 .
// Find the sum of all the multiples of 3 or 5 below 1000.


#include <iostream>

const int sum_3 = 3;
const int sum_5 = 5;

int return_sum(int& number)
{
    int sum = 0;
    for(int i = 0; i < number; i++)
    {
        if((i % sum_3 == 0) || (i % sum_5 == 0))
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int value = 0;
    std::cout << "Please enter the value to get the sum of all multipes of 3 or 5 : ";
    std::cin >> value;
    std::cout << "The sum of all multiples of 3 or 5 below " << value << " equals to : " << return_sum(value) << std::endl;
    return 0; 
}