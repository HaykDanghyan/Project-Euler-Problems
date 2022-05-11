// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//     1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed n , find the sum of the even-valued terms.


#include <iostream>

void fibonacci(int n , int& sum)
{
    int prevTerm = 0;
    int currTerm = 1;
    int add = 0;
    for(int i = 2; ; i++)
    {
        add = prevTerm + currTerm;
        prevTerm = currTerm;
        currTerm = add;
        if(currTerm > n)
        {break;}
        else if(currTerm % 2 == 0)
        {sum += currTerm;}
    }
}
int main(int argc, char const *argv[])
{
    int index = 0;
    int sum = 0;
    std::cout << "Please enter the index : ";
    std::cin >> index;
    fibonacci(index,sum);
    std::cout << "Sum of even values : " << sum << std::endl;
    return 0;
}

