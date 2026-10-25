#include <iostream>
using namespace std;

class Premium{
public:
//Count Ways to Climb Stairs: Given n stairs, count the number of distinct ways to reach the top (you can climb either 1 or 2 stairs at a time).
int countWays(int n) {
    // Base cases
    if (n == 0 || n == 1)
        return 1;
    return countWays(n - 1) + countWays(n - 2);
}
    
};