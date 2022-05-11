// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of value ?

#include <iostream>

long largest_factor(long& value)
{
    long maxPrime = 1;
    while(value != 1)
    {
        ++maxPrime;
        if(value % maxPrime == 0)
        {
            while(value % maxPrime == 0)
            {
                value = value / maxPrime;
            }
        }
    }
    return maxPrime;
}
int main()
{
    long value = 0;
    std::cout << "Please enter the value to get its largest prime : ";
    std::cin >> value;
    std::cout << "The largest prime of your value is equal to : " << largest_factor(value) << std::endl;
    return 0;
}