// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <iostream>
#include <vector>
#define ll long long

int main()
{
    int n = 0;
    std::cout << "Please enter the count of values : ";
    std::cin >> n;
    ll answer = 0;
    std::vector<bool> flag(n + 10, true);
    for(int i = 2; i < n; ++i)
    {
        if(flag[i])
        answer += i;
        for(int j = i + i; j < n ; j += i)
        {
            flag[j] = false;
        }      
    }
    std::cout << "All sums below 2000000 is equal to : " << answer << std::endl;
    return 0;
}