#include <iostream>
#include <vector>
std::vector<int> solution(std::vector<int> nums)
{
    if (nums.size() == 0)
    {
        return {};
    }
    for (int i = 0; i <= nums.size() - 1; i++)
    {
        if (!((i + 1) > nums.size() - 1))
        {
            std::cout << nums[i] << " " << nums[i + 1] << "\n";
            if (nums[i] > nums[i + 1])
            {
                std::iter_swap(nums.begin() + i, nums.begin() + i + 1);
            }
        }
    }
    std::cout << "LIST: " << "\n";
    for (int i = 0; i <= nums.size() - 1; i++)
    {
        std::cout << nums[i] << "\n";
    }
    return nums;
}

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
#include<algorithm>
bool scramble(const std::string& s1, const std::string& whole_word)
{
    if (std::all_of(s1.begin(), s1.end(), islower))
    { 
        return false;
    }

    bool iteration = true;
    int count_correct = 0;
    std::vector<char> vector_whole_word(whole_word.begin(), whole_word.end());
    std::vector<char> vector_s1(s1.begin(), s1.end());

    std::cout << "Vector_whole_word: " << whole_word << " " << vector_whole_word.size() << "\n";
    std::cout << "Vector_s1: " << s1 << " " << vector_s1.size() << "\n";

    for (int i = 0; i <= whole_word.size() - 1; i++)
    {
        std::cout << "Main: " << whole_word[i] << ": ";
        for (int j = 0; j <= s1.size() - 1; j++)
        {
            std::cout << "j:" << s1[j] << "\n";
            if (vector_whole_word[i] == vector_s1[j])
            {
                std::cout << vector_s1[j] << "\n";
                count_correct += 1;
                iteration = true;
                vector_s1.erase(vector_s1.begin() + j);
                break;
            }
            else
            {
                iteration = false;
            }
        }
        if (iteration == false)
        {
            std::cout << "iteration false" << "\n";
            return false;
        }
        std::cout << "\n";
    }
    std::cout << "count_correct: " << count_correct << "\n";
    if (count_correct == vector_whole_word.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Algorithm slower than previous function.
#include<string>
#include<algorithm>
bool scramblez(const std::string& s2, const std::string& word)
{
    
    if (!std::all_of(s2.begin(), s2.end(), islower))
    {
        return false;
    }
    
    std::string s1 = s2;
    std::string whole_word = word;

    bool iteration = true;
    int count_correct = 0;

    std::cout << "whole_word: " << whole_word << " " << whole_word.size() << "\n";
    std::cout << "s1: " << s1 << " " << s1.size() << "\n";

    for (int i = 0; i <= whole_word.size() - 1; i++)
    {
        std::cout << "Main: " << whole_word[i] << ": ";
        for (int j = 0; j <= s1.size() - 1; j++)
        {
            std::cout << "j:" << s1[j] << "\n";
            if (whole_word[i] == s1[j])
            {
                std::cout << s1[j] << "\n";
                count_correct += 1;
                iteration = true;
                s1[j] = '0';
                break;
            }
            else
            {
                iteration = false;
            }
            // Break function early once number of correct letters outweigh total word.
            if (count_correct >= whole_word.size())
            {
                return false;
            }
        }
        if (iteration == false)
        {
            std::cout << "iteration false" << "\n";
            return false;
        }
        std::cout << "\n";
    }
    std::cout << "count_correct: " << count_correct << "\n";
    if (count_correct == whole_word.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

#include<chrono>
int main()
{
    /*
    auto start = std::chrono::steady_clock::now();
    std::cout << "BEGIN TESTING" << "\n";
    if (scramblez("rkqodlw", "world") == true)
    {
        std::cout << "True" << "\n";
    }
    else
    {
        std::cout << "False" << "\n";
    }
    // False
    if (scramblez("scriptjavx", "javascript") == true)
    {
        std::cout << "True" << "\n";
    }
    else
    {
        std::cout << "False" << "\n";
    }
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    std::cout << std::chrono::duration <double, std::milli>(diff).count() << " ms" << std::endl;
    */
    std::vector<int> answer = { 1, 2, 3, 5, 10 };
    if (solution({ 1,2,3,10,5 }) == answer)
    {
        std::cout << "Works" << "\n";
    }
    else
    {
        std::cout << "Failed" << "\n";
    }
    

}
