#include <string>
#include <vector>

std::string rot13(std::string msg)
{
  std::cout << "[D]: " << msg << "\n";
  std::string alphabet = "abcdefghijklmnopqrstuvwsyz";
  for (unsigned long i = 0; i <= msg.size() - 1; i++)
  {
    for (unsigned long j = 0; j <= alphabet.size() - 1; j++)
    {
      std::cout << alphabet[j] << "\n";
      if (msg[i] == alphabet[j])
      {
        for (unsigned long k = 0; k <= 13; k++)
        {
          j++;
          if (alphabet.size() - 1)
          {
            
          }
        }
      }
    }
  }
  return "";
}

#include <vector>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) 
    {
      std::cout << "\n" << "===" << "\n";
      for (const auto i : a) 
      {
          std::cout << i << ' ';
      }
      std::cout << "\n";
      for (const auto i : b) 
      {
          std::cout << i << ' ';
      }
      std::cout << "\n" << "===" << "\n";
      
      std::cout << "\n" << "[D] New Test" << "\n";
      if (a.size() != b.size())
      {
        return false;
      }
      if (a.size() <= 0 || b.size() <= 0)
      {
        std::cout << "BAD SIZE: False" << "\n";
        return true;
      }
      std::vector<int> sqd_vec_a;
      for (unsigned long i = 0; i <= a.size() - 1; i++)
      {
        sqd_vec_a.push_back(a[i] * a[i]);
        std::cout << sqd_vec_a[i] << "\n";
      }
      std::sort(sqd_vec_a.begin(), sqd_vec_a.end());
      std::sort(b.begin(), b.end());
      for (unsigned long i = 0; i <= a.size() - 1; i++)
      {
        if (sqd_vec_a[i] != b[i])
        {
          std::cout << "ERROR: " << sqd_vec_a[i] << " == " << b[i] << "\n";
          return false;
        }
        else
        {
          std::cout << sqd_vec_a[i] << " == " << b[i] << "\n";
        }
      }
      return true;
    }
};

std::string e(std::string text, int n)
{
  std::cout << "New_Test" << "\n\n";
  if (n == 0 || text.length() == 0)
  {
    return text;
  }
  for (int i = 0; i < n; i++)
  {
    std::string odd_text = "";
    std::string even_text = "";
    for (int j = 0; j <= text.length() - 1; j++)
    {
      if (!(j % 2 == 0))
      {
        // ODD
        odd_text += text[j];
      }
      else
      {
        // EVEN
        even_text += text[j];
      }
      std::cout << "[" << j << "] " << odd_text << " " << even_text << "\n\n";
    }
    text = odd_text + even_text;
    std::cout << "[" << i << "] " << text << "\n\n";
  }
  std::cout << text << "\n\n";
  return text;
}

std::string d(std::string text, int n)
{
  int text_length = text.length() - 1;
  if (n == 0 || text.length() == 0)
  {
    return text;
  }
  for (int i = 0; i < n; i++)
  {
    int odd_int = 0;
    int even_int = 0;
    std::string odd_text = text.substr(0, text.length()/2);
    std::string even_text = text.substr(text.length()/2);
    text = "";
    std::cout << odd_text << " == " << even_text << "\n\n";
    for (int j = 0; j <= text_length; j++)
    {
      if ((j % 2 == 0))
      {
        // EVEN
        text += even_text[even_int];
        even_int++;
      }
      else
      {
        // ODD
        text += odd_text[odd_int];
        odd_int++;
      }
      std::cout << "[" << j << "] " << text << "\n\n";
    }
  }
  std::cout << text << "\n\n";
  return text;
}

std::vector<char> alphabet_upper
(
  { 
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
  }
);

int letter_score_return(char &letter)
{
  int letter_count = 0;
  for (int i = 0; i <= 26; i++)
  {
    if (letter = alphabet_upper)
    {
      letter_count = i;
      break;
    }
  }
  return letter_count;
}

std::string hSW(const std::string &str)
{
  int highest_score = 0;
  int temp_sum = 0;
  for (int i = 0; i <= str.length() - 1; i++)
  {
     temp_sum += letter_score_return(str[i]);
  }
  return "word";
}

#include <string>
bool i_u(const std::string &s) 
{
  std::cout << "Full string: " << s << "\n";
  // 18446744073709551615 error here
  std::cout << "s size: " << s.size() << "\n";
  if (s.size() <= 0)
  {
    return true;
  }
  bool is_upper_case = true;
  for (unsigned long i = 0; i <= s.size() - 1; i++)
  {
    std::cout << s[i] << "\n";
    if (isupper(s[i]))
    {
      is_upper_case = true;
      std::cout << s[i] << "\n";
    }
    else if (s[i] == ' ')
    {
      continue;
    }
    else if (!isalpha(s[i]))
    {
      std::cout << "[D] Not Alphabetic: " << s[i] << "\n"; 
      continue;
    }
    else
    {
      std::cout << "[D] Not upper_case: " << s[i] << "\n"; 
      is_upper_case = false;
      break;
    }
  }
  std::cout << is_upper_case << "\n";
  std::cout << "END " << "\n\n";
  return is_upper_case;
}

#include <vector>
long sTSN(std::vector<int> numbers)
{
  double first_low = numbers[0];
  int pos; 
  bool trigger = false;
  for (unsigned long int i = 0; i <= numbers.size() - 1; i++)
  {
    if (first_low > numbers[i] && i <= numbers.size() - 1)
    {
      trigger = true;
      first_low = numbers[i];
      pos = i;
    }
  }
  if (trigger == false)
  {
    numbers.erase(numbers.begin());
  }
  else if (trigger == true)
  {
    numbers.erase(numbers.begin() + pos);
  }
  double second_low = numbers[0];
  for (unsigned long int i = 0; i <= numbers.size() - 1; i++)
  {
    if (second_low > numbers[i] && i <= numbers.size() - 1)
    {
      second_low = numbers[i];
    }
  }
  double sum = (first_low + second_low);
  return sum;
}

#include <string>
std::string DtoR(std::string dna)
{
  std::string new_strand;
  for (int i = 0; i <= dna.length() - 1; i++)
  {
    if (dna[i] == 'T')
    {
      new_strand += 'U';
    }
    else
    {
      new_strand += dna[i];
    }
  }
  return new_strand;
}

namespace T
{
  // Triangle inequality theorem
  bool iT(int a, int b, int c)
  {
    std::cout << a << " " << b << " " << c << "\n";
    if (a <= 0 || b <= 0 || c <= 0)
    {
      return false;
    }
    if (a == b == c)
    {
      return false;
    }
    if (a + b > c)
    {
      if (a + c > b)
      {
        if (b + c > a)
        {
          return true;
        }
        else
        {
          return false;
        }
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
};

class Avg_Class
{ 
  private:
      std::vector<int> avg_vector;

  public:
    // Constructor
    Avg_Class operator()(int num)
    {
      avg_vector.push_back(num);
    }
    void method_repeat()
    {
      for (unsigned long i = 0; i <= avg_vector.size() - 1; i++)
      {
        std::cout << avg_vector[i] << "\n";
      }
    }
    void method_average()
    {
      int sum = 0;
      for (unsigned long i = 0; i <= avg_vector.size() - 1; i++)
      {
        std::cout << avg_vector[i] << "\n";
        sum += avg_vector[i]; 
      }
      std::cout << sum << "\n";
    }
};

// Persistent vector here:
auto rA(int num) 
{
  std::vector<int> avg_vector;
  avg_vector.push_back(num);
  Avg_Class avg_object(0);
  avg_object.method_repeat();
  return avg_object; 
}

#include <string>
bool hSp(const std::string& str)
{
  bool pattern_broken = true;
  std::cout << "Working pattern: " << str << "\n";
  if (str.length() == 0 || str.length() == 1)
  {
    return false;
  }
  std::string sub_pattern = std::string() + str[0];
  int i = 0;
  int j = 0;
  while (true)
  {
    if (sub_pattern[i] == str[j])
    {
      if (str.length() - 1 == j)
      {
        std::cout << "Length: " << str.length() - 1 << " " << j << "\n";

        if (pattern_broken == true)
        {
          std::cout << "END = true" << "\n";
          return false;
        }
        else
        {
          std::cout << "END = false" << "\n";
          return true;
        }
      }
      pattern_broken = false;
      j++;
    }
    else
    {
      std::cout << sub_pattern.length() - 1 << "\n";
      int temp = sub_pattern.length() - 1;
      // Once loop reaches to end of sub pattern, add new character.
      if (temp <= (i + 1))
      {
        sub_pattern += str[j];
        i = 0;
        j = 0;
        std::cout << "New: " << sub_pattern << "\n";
        pattern_broken = true;
      }
      else
      {
        i++;
      }
    }
  }
}
/*
  bool reset = false;
  std::cout << "Working pattern: " << str << "\n";
  if (str.length() == 0 || str.length() == 1)
  {
    return false;
  }
  std::string sub_pattern = std::string() + str[0];
  bool pattern = false;
  for (unsigned long int i = 0; i <= sub_pattern.length() - 1; i++)
  {
    for (unsigned long int j = 0; j <= str.length() - 1; j++)
    {
      std::cout << "[D] Loop round: " << "i: " << i << " j: " << j << "\n"; 
      std::cout << "[D] Comparison: " << "Sub: " << sub_pattern[j] << " str: " << str[j] << "\n";
      std::cout << "[D] Sub pattern: " << sub_pattern << "\n";
      if (sub_pattern[j] == str[j])
      {
        pattern = true;
        continue;
      }
      else
      {
        std::cout << "No Match" << "\n";
        if (j == str.length() - 1)
        {
          std::cout << "END" << "\n";
          pattern = false;
        }
        if (i == 0)
        {
          break;
        }
        sub_pattern += str[i];
        reset = true;
        break;
      }
    }
    std::cout << "Sub-pattern: " << sub_pattern << "\n";
    if (reset == true)
    {
      std::cout << "[D] RESET" << "\n";
      i = -1;
    }
  }
  if (pattern == false)
  {
    std::cout << "Return: false" << "\n\n";
    return false;
  }
  std::cout << "Return: true" << "\n\n";
  return true;
}
*/

#include <string>
double m_v(const std::string &s)
{
  std::cout << "Para: " << s << "\n";
  std::string value_copy = s;
  if (value_copy.find_first_of("0123456789") == std::string::npos)
  {
    return 0.0;
  }
  while (value_copy.find(' ') != std::string::npos)
  {
    value_copy.erase(value_copy.begin() + value_copy.find(' '));
  }
  if (value_copy.find("$") != std::string::npos)
  {
    while (value_copy.find("$") != std::string::npos)
    {
      value_copy.erase(value_copy.begin() + value_copy.find("$"));
    }
    std::cout << "Return: " << std::stod(value_copy) << "\n";
    return std::stod(value_copy);
  }
  else
  {
    std::cout << "Return: (!= $): " << value_copy << "\n";
    return std::stod(value_copy);
  }
}

#include <string>
std::map<char, int> vowels_map =
{
  {'a', 1},
  {'e', 2},
  {'i', 3},
  {'o', 4},
  {'u', 5}
};

std::string e(const std::string &str) 
{
  std::cout << "Encoding" << "\n";
  std::string copied_str = str;
  for (unsigned long i = 0; i <= str.length() - 1; i++)
  {
    std::cout << str[i] << "\n";
    for (auto const& [key, val] : vowels_map)
    {
      if (key == str[i])
      {
        copied_str[i] = '0' + val;
        std::cout << key << " " << str[i] << "\n";
      }
    }
  }
  return copied_str;
}

std::string d(const std::string &str) 
{
  std::cout << "Decoding" << "\n";
  std::string copied_str = str;
  for (unsigned long i = 0; i <= str.length() - 1; i++)
  {
    std::cout << str[i] << "\n";
    for (auto const& [key, val] : vowels_map)
    {
      if (val + '0' == (int)str[i])
      {
        std::cout << "DEBUG: " << (int)val << " " << (int)str[i] << "\n";
        copied_str[i] = key;
        std::cout << val << " " << str[i] << "\n";
      }
    }
  }
  return copied_str;
}

#include <vector>
#include <map>
int fO(const std::vector<int>& numbers)
{
  std::map<int, int> odd_map;
  for (int i = 0; i <= numbers.size() - 1; i++)
  {
    std::cout << numbers[i] << " ";
    if (odd_map.count(numbers[i]) != 1)
    {
      odd_map[numbers[i]] = 1;
    }
    else if (odd_map.count(numbers[i]) == 1)
    {
      odd_map[numbers[i]]++;
    }
  }
  std::cout << " " << "\n";
  for (auto const& [key, val] : odd_map)
  {
      std::cout << key
                << ':'  
                << val
                << std::endl;
    if (val % 2 != 0)
    {
      std::cout << "Is odd: " << key << "\n";
      return key;
    }
  }
  return 1;
}

class CD
{
public:
    static int nD(int n, int d)
    {
      /*
      std::cout << "d: " << d << "\n";
      std::cout << '0' + d << "\n";
      */
      int total_digital_count = 0;
      for (int i = 0; i <= n; i++)
      {
        std::string temp_squared_str = std::to_string(i*i);
        //std::cout << i << " " << i*i << "\n";
        for (unsigned long int j = 0; j <= temp_squared_str.size() - 1; j++)
        {
          //std::cout << "j: " << temp_squared_str[j] << " char: " << ttt << "\n";
          if (temp_squared_str[j] == '0' + d) 
          {
            total_digital_count++;
          }
        }
      }
      std::cout << "Total Digital Count: " << total_digital_count << "\n";
      return total_digital_count;
    }
};

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

#include <string>
#include <vector>
std::string pig_it(std::string str)
{
  std::cout << "[Debug] Whole string: " << str << "\n";
  std::string first_character_store;
  bool signal = false;
  std::string char_temp;
  std::vector<std::string> vector_new;
  std::string punctuation_marks = "!,.?";
  for (unsigned long i = 0; i <= str.size() - 1; i++)
  {
    std::cout << str[i];
    if (signal == true || i == 0)
    {
      first_character_store = str[i];
      std::cout << "[Debug] F_store;" << "\n";
      signal = false;
    }
    else if (str[i] != ' ')
    {
      char_temp += str[i];
    }
    if (str[i] == ' ' || i == str.size() - 1)
    {
      if (punctuation_marks.find(str[i - 1]) != std::string::npos)
      {
        vector_new.push_back(std::string() + str[i - 1]);
        std::cout << "@" << "\n";
      }
      // Else if breaks program.
      else if (punctuation_marks.find(str[i]) != std::string::npos)
      {
        vector_new.push_back(std::string() + str[i]);
        std::cout << "@" << "\n";
      }
      else 
      {
        // Remove first character, place after word. Then add ay.
        vector_new.push_back(char_temp + first_character_store + "ay");
        std::cout << "<>" << "\n";
      }
      char_temp = "";
      signal = true;
    }
  }
  std::cout << "\n";
  std::string string_new = "";
  std::cout << "[Debug] Creating new string: " << "\n";
  for (unsigned long i = 0; i <= vector_new.size() - 1; i++)
  {
    if (i == vector_new.size() - 1)
    {
      std::cout << vector_new[i] << "#";
      string_new += vector_new[i];
    }
    else
    {
      std::cout << vector_new[i] << " ";
      string_new += vector_new[i] + " ";
    }
  }
  std::cout << "\n\n";
  return string_new;
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
    
    std::vector<int> answer = { 1, 2, 3, 5, 10 };
    if (solution({ 1,2,3,10,5 }) == answer)
    {
        std::cout << "Works" << "\n";
    }
    else
    {
        std::cout << "Failed" << "\n";
    }
    */
    if (pig_it("Acta est fabula") == ("ctaAay steay abulafay"))
    {
        std::cout << "WORKS" << "\n";
    }
}
