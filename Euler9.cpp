// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, pow(3 , 2) + pow(4 , 2) = 9 + 16 = 25 = sqrt(25).

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.v

#include <iostream>
#include <cmath>

int find_mul(int target)
{
    int result = 0;
    for(int a = 1; a < target; ++a)
    {
        for(int b = 1; b < target; ++b)
        {
            for(int c = 1; c < target; ++c)
            {
                if((a * a) + (b * b) == (c * c))
                {
                    if(a + b + c == target)
                    {
                        result = a * b * c;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }
    return result;
}

int main()
{
    int target = 0;
    std::cout << "Please enter the target : ";
    std::cin >> target;
    int result = find_mul(target);
    std::cout << "The result is equal to : " << result << std::endl;
    return 0;
}