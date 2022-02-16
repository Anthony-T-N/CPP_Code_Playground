#include <iostream>
#include <vector>
#include <string>

// Commit test

std::vector<int> digitize(unsigned long n)
{
    std::string s = std::to_string(n);
    std::vector<int> new_vector = {};
    for (int i = 0; i <= s.size() - 1; i++)
    {
        std::cout << "Adding: " << s[i] << "\n";
        new_vector.push_back((int)s[i]);
    }
    std::cout << new_vector.size() << "\n";
    std::cout << new_vector[1] << "\n";
    for (int i = 0; i <= new_vector.size() - 1; i++)
    {
        std::cout << "\n";
        std::cout << i << "\n";
        if ((i + 1) <= new_vector.size() - 1)
        {
            if (new_vector[i] < new_vector[i + 1])
            {
                std::swap(new_vector[i], new_vector[i + 1]);
            }
        }
        for (int i = 0; i <= new_vector.size() - 1; i++)
        {
            std::cout << new_vector[i] << " + ";
        }
    }
    std::cout << "\n";
    std::cout << "Result" << "\n";
    for (int i = 0; i <= new_vector.size() - 1; i++)
    {
        std::cout << new_vector[i] << " + ";
    }
    return new_vector;
}

int main()
{
    std::cout << "START" << "\n";
    digitize(35231);
}
