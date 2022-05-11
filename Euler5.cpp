// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


#include <iostream>

const int max_count = 20;

int main()
{
    int max = 20;
    int found = 0;

    while(!found)
    {
        max += 2;
        found = 1;
        for(int i = 1; i <= max_count; i++)
        {
            if(max % i != 0)
            {
                found = 0;
                break;
            }
        }
    }
    std::cout << "The biggest is : " << max << std::endl;
    return 0;
}