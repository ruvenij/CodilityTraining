#include <iostream>
#include <cmath>

int solution(int X, int Y, int D)
{
    return std::ceil((Y - X) / (double)D);
}

int main()
{
    std::cout << solution(10, 85, 30) << std::endl;
    return 0;
}