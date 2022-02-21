#include <iostream>
#include <vector>
#include <string>
std::vector<int> digitize(unsigned long n)
{
    std::string s = std::to_string(n);
    std::vector<int> vector_int = {};
    std::vector<int> vector_final = {};
    for (int i = 0; i <= s.size() - 1; i++)
    {
        vector_int.push_back((int)s[i] - '0');
    }
    for (int i = vector_int.size() - 1; i >= 0; i--)
    {
        vector_final.push_back(vector_int[i]);
    }
    return vector_final;
}

int summation(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

#include <vector>
#include <utility>
std::pair<int, int> rowWeights(const std::vector <int>& weights)
{
    for (int i = 0; i <= weights.size() - 1; i++)
    {
        std::cout << weights[i] << " + ";
    }
    std::cout << "\n";
    int team_one = 0;
    int team_two = 0;
    for (int i = 0; i <= weights.size() - 1; i++)
    {
        std::cout << i << " #: " << weights[i] << "\n";
        if (i % 2 == 0)
        {
            team_one += weights[i];
        }
        else
        {
            team_two += weights[i];
        }
    }
    std::cout << "Team_One: " << team_one << "\n";
    std::cout << "Team_Two: " << team_two << "\n";
    return std::make_pair(team_one, team_two);
}

#include <string>
#include <vector>
std::string createPhoneNumber(const int arr[10])
{
    std::vector<std::string> vector_new;
    std::vector<int> vector_phone(arr, arr + 10);
    std::cout << "Size: " << vector_phone.size() << "\n";
    vector_new.push_back("(");
    for (int i = 0; i <= vector_phone.size() - 1; i++)
    {
        std::cout << i << "\n";
        if (i == 3)
        {
            vector_new.push_back(") ");
        }
        vector_new.push_back(std::to_string(vector_phone[i]));
        if (i == 5)
        {
            vector_new.push_back("-");
        }
    }
    std::cout << "Final Result: " << "\n";
    std::string str = "";
    for (int i = 0; i <= vector_new.size() - 1; i++)
    {
        std::cout << vector_new[i];
        str += vector_new[i];
    }
    return str;
}

#include<string>
bool scramble(const std::string& s1, const std::string& s2)
{
    int count_correct = 0;
    std::vector<char> vector_s2(s2.begin(), s2.end());
    std::vector<char> vector_s1(s1.begin(), s1.end());

    std::cout << "Vector_s2: " << vector_s2.size() << "\n";
    std::cout << "Vector_s1: " << vector_s1.size() << "\n";

    for (int i = 0; i <= s1.size() - 1; i++)
    {
        for (int j = 0; j <= s2.size() - 1; j++)
        {
            if (vector_s2[j] == vector_s1[i])
            {
                std::cout << vector_s2[j] << "\n";
                count_correct += 1;
            }
        }
    }
    std::cout << "count_correct: " << count_correct << "\n";
    if (count_correct == vector_s2.size())
    {
        return true;
    }
}

int main()
{
    std::cout << "BEGIN TESTING" << "\n";
    if (scramble("katas", "steak") == true)
    {
        std::cout << "True" << "\n";
    }
    else
    {
        std::cout << "False" << "\n";
    }
    
}
