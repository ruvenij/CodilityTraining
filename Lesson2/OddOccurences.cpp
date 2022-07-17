#include <iostream>
#include <vector>

int solution(std::vector<int> &A)
{
    std::vector<int> counter;
    std::vector<int> keyValues;

    for (int value : A)
    {
        if (counter.size() < value)
        {
            counter.resize(value + 1);
            counter[value] = 0;
        }

        counter[value]++;

        if (counter[value] == 1)
        {
            keyValues.push_back(value);
        }
    }

    for (int key : keyValues)
    {
        if (counter[key] == 1)
        {
            return key;
        }
    }

    return 0;
}

int main()
{
    std::vector<int> input = {9, 3, 9, 3, 9, 7, 9};
    std::cout << solution(input) << std::endl;
    return 0;
}