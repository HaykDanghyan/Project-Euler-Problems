// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

const int MAX = 100;
const int MIN = 1;

#include <iostream>

int find_difference(const int& MAX , const int& MIN)
{
    int squareofSums = 0;
    int difference = 0;

    int sum1 = 0;
    for(int i = MIN; i <= MAX; i++)
    {
        sum1 += i;
    }
    squareofSums = sum1 * sum1;

    int sumofSquares = 0;
    for(int i = MIN; i <= MAX; i++)
    {
        sumofSquares += i * i;
    }
    difference = squareofSums - sumofSquares;
    return difference;
}
int main()
{
    std::cout << find_difference(MAX,MIN);
    return 0;
}
