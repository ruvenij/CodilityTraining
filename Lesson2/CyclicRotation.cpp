#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int>& A, int K)
{
    std::vector<int> outputVector;
    int vectorSize = A.size();

    if ((vectorSize == 0) or (K == 0))
    {
        return outputVector;
    }

    for (int i = (vectorSize - K); i < vectorSize; i++)
    {
        outputVector.push_back(A.at(i));
    }

    for (int i = 0; i < (vectorSize - K); i++)
    {
        outputVector.push_back(A.at(i));
    }

    return outputVector;
}

std::vector<int> betterSolution(std::vector<int>& A, int K)
{
    int vectorSize = A.size();
    std::vector<int> outputVector(vectorSize);

    if ((vectorSize == 0) or (K == 0))
    {
        return outputVector;
    }

    for (int i = 0; i < vectorSize; i++)
    {
        outputVector.at((i + K) % vectorSize) = A.at(i);
    }

    return outputVector;
}

void printVector(const std::vector<int>& A)
{
    for (auto value : A)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> input = {3, 8, 9, 7, 6};
    std::vector<int> output = solution(input, 3);
    printVector(output);

    input.clear();
    output.clear();

    input = {0, 0, 0};
    output = solution(input, 1);
    printVector(output);

    input.clear();
    output.clear();
    
    input = {1, 2, 3, 4};
    output = solution(input, 4);
    printVector(output);

    //////////////////////////////

    input.clear();
    output.clear();

    input = {3, 8, 9, 7, 6};
    output = betterSolution(input, 3);
    printVector(output);

    input.clear();
    output.clear();

    input = {0, 0, 0};
    output = betterSolution(input, 1);
    printVector(output);

    input.clear();
    output.clear();
    
    input = {1, 2, 3, 4};
    output = betterSolution(input, 4);
    printVector(output);
    
    return 0;
}