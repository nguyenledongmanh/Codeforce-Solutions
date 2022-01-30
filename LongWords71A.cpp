#include <iostream>
#include <string>

std::string reduceWord(std::string wordInput)
{
    int length = wordInput.length();

    if (length <= 10)
    {
        return wordInput;
    }

    char CharAtFirst = wordInput.at(0);
    char CharAtLast = wordInput.at(length - 1);

    int lengthBetweenFirstandLast = length - 2;

    std::string insert = std::to_string(lengthBetweenFirstandLast);

    std::string result = CharAtFirst + insert + CharAtLast;

    return result;
}

int main()
{

    int testcase;
    std::cin >> testcase;

    while (testcase--)
    {
        std::string input;
        std::cin >> input;

        std::string result = reduceWord(input);

        std::cout << result << std::endl;
    }

    return 0;
}