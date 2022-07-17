#include <iostream>
#include <bitset>

constexpr const int MaxBinaryLength = 32;

int solution(int N)
{
    std::bitset<MaxBinaryLength> bitConvertedNumber(N);
    std::string bitConvertedString = bitConvertedNumber.to_string();
    int maxBinaryGapLen = 0;
    int indexOfOne = -1;

    for (int i = 0; i < bitConvertedString.length(); i++)
    {
        if (bitConvertedString.at(i) == '1')
        {
            if (indexOfOne > 0)
            {
                int currentBinaryGapLength = (i - indexOfOne - 1);

                if ((currentBinaryGapLength > 0) and (maxBinaryGapLen < currentBinaryGapLength))
                {
                    maxBinaryGapLen = currentBinaryGapLength;
                }
            }
            
            indexOfOne = i;
        }
    }

    return maxBinaryGapLen;
}

int main()
{
    std::cout << solution(9) << std::endl;
    std::cout << solution(529) << std::endl;
    std::cout << solution(20) << std::endl;
    std::cout << solution(15) << std::endl;
    std::cout << solution(32) << std::endl;
    std::cout << solution(1041) << std::endl;
    
    return 0;
}