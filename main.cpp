#include <string>
class PP
{
  public:
  static std::string pP(const std::string &s, int n)
  {
    std::vector<char> alphabet = {'A','B','C','D','E','F',
		'G','H','I','J','K','L','M','N','O','P',
		'Q','R','S','T','U','V','W','X','Y','Z'};
    
    // Letter shift
    // Complement to 9
    std::string modifiable_copy = s;
    std::string rebulit_string = "";
    for (unsigned long i = 0; i <= modifiable_copy.length() - 1; i++)
    {
      if (modifiable_copy[i] == ' ')
      {
        rebulit_string += " ";
      }
      else if (modifiable_copy[i] >= '0' && modifiable_copy[i] <= '9' )
      {
        rebulit_string += std::to_string(9 - (int(modifiable_copy[i]) - 48));
      }
      else
      {
        bool find_switch = false;
        for (unsigned long j = 0; j <= alphabet.size() - 1; j++)
        {
          if (char(tolower(modifiable_copy[i])) == char(tolower(alphabet[j])))
          {
            if (alphabet.size() - 1 < (j + n))
            {
              rebulit_string += alphabet[(j + n) - (alphabet.size())];
            }
            else
            {
              rebulit_string += alphabet[j + n];
            }
            find_switch = true;
            break;
          }
        }
        if (find_switch == false)
        {
          rebulit_string += modifiable_copy[i];
        }
      }
    }
    // Downcasing letter.
    std::vector<char> rebulit_vector(rebulit_string.begin(), rebulit_string.end());
    for (unsigned long i = 0; i <= rebulit_vector.size() - 1; i++)
    {
      if (i % 2 != 0)
      {
        rebulit_vector[i] = tolower(rebulit_vector[i]);
      }
    }
    // Reverse String.
    std::string reverse_string = "";
    for (int i = rebulit_vector.size() - 1; i >= 0; i--)
    {
      reverse_string += rebulit_vector[i];
    }
    return reverse_string;
  }
};

#include <array>

using persons_t = std::array<int, 3>;

persons_t g_p(long n) 
{
  //std::cout << "n: " << n << "\n";
  int person_a = -1;
  int person_b = 0;
  int person_c = 0;
  for (long i = 0; i <= n; i++)
  {
    person_a++;
    if (person_a == 3)
    {
      person_a = 0;
      person_b++;
      if (person_b == 3)
      {
        person_b = 0;
      }
      if (person_b == 0)
      {
        person_c++;
      }
    }
    if (person_c == 3)
    {
      person_c = 0;
    }
    //std::cout << i << "] " << person_a << " " << person_b << " " << person_c << "\n";
  }
  return { person_a, person_b, person_c };
}

int gP(int upSpeed, int downSpeed, int desiredHeight)
{
  int plant_size = 0;
  int days = 1;
  std::cout << "upSpeed: " << upSpeed << " downSpeed: " << downSpeed << " desiredHeight: " << desiredHeight << "\n";
  while (plant_size < desiredHeight)
  {
    std::cout << "Days: " << days << "\n";
    std::cout << "Plant Size: " << plant_size << "\n";
    plant_size += upSpeed;
    if (plant_size >= desiredHeight)
    {
      return days;
    }
    plant_size -= downSpeed;
    days++;
  }
  return days;
}

#include <string>
#include <vector>
std::vector<std::string> tB(unsigned nFloors) 
{
  std::cout << "nFloors: " << nFloors << "\n";
  std::vector<std::string> tower; 
  std::string current_line;
  for (int i = 1; i <= nFloors; i++)
  {
    current_line = "";
    if (i == 1)
    {
      std::cout << i << " " << i << "\n";
      tower.push_back(current_line(i, "*"));
    }
    else
    {
      std::cout << i << " " << (i * 2) - 1 << "\n";
      tower.push_back(current_line((i * 2) - 1, "*"));
    }
  }
  return std::vector<std::string>();
}

#include <vector>
std::vector<std::vector<int>> m_t(int n)
{
  if (n <= 0)
  {
    return {};
  }
  std::vector<std::vector<int>> super_vector;
  std::vector<int> current_vector;
  for (int i = 1; i <= n; i++)
  {
    current_vector.clear();
    for (int j = 1; j <= n; j++)
    {
      if (i == 1)
      {
        current_vector.push_back(j);
      }
      else
      {
        if (j == 1)
        {
          current_vector.push_back(i);
        }
        else
        {
          current_vector.push_back(super_vector[0][j - 1] * current_vector[0]);
        }
      }
    }
    super_vector.push_back(current_vector);
  }
  return super_vector;
}

#include <string>
std::string s(int n) 
{
  int index = 0;
  for (int i = 0; i < std::to_string(n).size() + 1; i++)
  {
    index = i;
  }
  std::string padded_num = "";
  for (int i = 0; i < (5 - index); i++)
  {
    padded_num += "0";
  }
  padded_num += std::to_string(n);
  return "Value is " + padded_num;
}

#include <vector>
std::vector<unsigned int> rS(const std::vector<unsigned int>& numbers) 
{
  if (numbers.size() == 0)
  {
    return numbers;
  }
  std::vector<unsigned int> mutated_vector = numbers;
  unsigned int lowest_num = mutated_vector[0];
  unsigned long index = 0;
  for (unsigned long i = 0; i <= mutated_vector.size() - 1; i++)
  {
    if (lowest_num > mutated_vector[i])
    {
      lowest_num = mutated_vector[i];
      index = i;
    }
  }
  mutated_vector.erase(mutated_vector.begin() + index);
  return mutated_vector;
}

class GS
{
public:
    static int gps(int s, std::vector<double> &x)
    {
      std::vector<double> copied_vector = x;
      if (copied_vector.size() - 1 <= 1)
      {
        return 0;
      }
      std::cout << "\n" << "copied_vector.size(): " << copied_vector.size() << "\n";
      for (unsigned long i = 0; i <= copied_vector.size() - 1; i++)
      {
        std::cout << i << ":" << copied_vector[i] << " ";
      }
      std::cout << "\n\n";
      std::vector<double> average; 
      int cal = 0;
      for (unsigned long i = 0; i < copied_vector.size() - 1; i++)
      {
        std::cout << "i): " << i << " - Cal: " << cal << " copied_vector[i+1]: " << copied_vector[i+1] << " copied_vector[i]: " << copied_vector[i] << "\n";
        cal = (3600 * (copied_vector[i+1] - copied_vector[i])) / s;
        average.push_back(cal);
      }
      std::cout << "\n";
      int highest_num = 0;
      for (unsigned long i = 0; i < average.size() - 1; i++)
      {
        if (average[i] > highest_num)
        {
          highest_num = average[i];
        }
      }
      std::cout << "highest_num: " << highest_num << "\n";
      return highest_num;
    }
};

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

bool s(const std::vector<std::string>& words) 
{
  std::vector<std::string> temp_vector_two;
  std::vector<std::string> short_vector;
  std::string word;
  std::map<char, int> letter_map;
  for (unsigned long i = 0; i <= words.size() - 1; i++)
  {
    std::cout << words[i] << "\n";
    letter_map[words[i][0]]++;
    letter_map[words[i].back()]++;
    word += words[i][0];
    word += words[i].back();
    std::cout << words[i][0] << " " << words[i].back() << "\n";
    std::cout << word << "\n";
    short_vector.push_back(word);
    word = "";
  }
  std::cout << "\n";
  
  unsigned long stage = 0;
  std::vector<std::string> copied_short_vector = short_vector;
  std::vector<std::string> temp_vector;
  int ace = 0;
  for (unsigned long i = 0; i <= short_vector.size() - 1; i++)
  {
    std::cout << short_vector[i] << " | ";
  }
  std::cout << "\n";
  
  std::sort(short_vector.begin(), short_vector.end());
  do 
  {
    for (const std::string item : short_vector)
    {
      std::cout << item << " ";
      temp_vector_two.push_back(item);
    }
    int match_cout = 0;
    for (int i = 0; i <= temp_vector_two.size() - 1; i++)
    {
      if ((temp_vector_two[i].back() == temp_vector_two[i+1][0]) && (i + 1 <= temp_vector_two.size() - 1))
      {
        std::cout << temp_vector_two[i].back() << " " << temp_vector_two[i+1][0] << "\n";
        match_cout++;
      }
      if (match_cout == temp_vector_two.size() - 1)
      {
        std::cout << "TRUE" << "\n";
        return true;
      }
    }
    std::cout << match_cout << "\n";
    temp_vector_two.clear();
  } 
  while(std::next_permutation(short_vector.begin(), short_vector.end()));
  return false;
}

#include <iostream>
bool iC(std::string s)
{
  bool consecutive_grouped = false;
  std::map<int, int> map;
  for (unsigned long i = 0; i <= s.length() - 1; i++)
  {
    if (map.count(s[i]))
    {
      if (consecutive_grouped == true)
      {
        continue;
      }
      else
      {
        return false;
      }
    }
    else
    {
      map[s[i]]++;
      if (s[i] == s[i + 1])
      {
        consecutive_grouped = true;
      }
      else 
      {
        consecutive_grouped = false;
      }
    }
  }
  return true;
}

#include <vector>
std::vector<int> s(std::vector<int> vec)
{
  std::vector<int> solved_vector;
  std::map<int, int> duplicate_map;
  for (int i = vec.size() - 1; i >= 0; i--)
  {
    if (duplicate_map[vec[i]] == 1)
    {
      continue;
    }
    duplicate_map[vec[i]]++;
    solved_vector.push_back(vec[i]);
  }
  vec.clear();
  for (int i = solved_vector.size() - 1; i >= 0; i--)
  {
    vec.push_back(solved_vector[i]);
  }
  return vec;
}

#include <vector>
bool c_a(const std::vector<int>& arr, const std::vector<int>& target) 
{
  std::cout << "===" << "\n";
  if (arr.size() == 0 || target.size() == 0)
  {
    std::cout << "Return False" << "\n";
    return false;
  }
  
  std::cout << "arr: ";
  for (unsigned long i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n" << "target: ";
  for (unsigned long i = 0; i < target.size(); i++)
  {
    std::cout << target[i] << " ";
  }
  std::cout << "\n";
  for (unsigned long i = 0; i < target.size(); i++)
  {
    bool valid = false;
    for (unsigned long j = 0; j < arr.size(); j++)
    {
      std::cout << "i: " << target[i] << " j: " << arr[j] << "\n";
      if (target[i] == arr[j])
      {
        std::cout << "TRUE" << "\n";
        valid = true;
        break;
      }
      else
      {
        valid = false;
      }
      if (j == arr.size() - 1)
      {
        std::cout << "Return False" << "\n";
        return false;
      }
    }
    if (valid == false)
    {
      return false;
    }
  }
  std::cout << "Return True" << "\n";
  return true;
}

class K {
  public:
  static bool v(long long int n) 
  {
    std::cout << "\n" << "==============" << "\n";
    std::string n_to_string = std::to_string(n);
    std::vector<char> credit_card_num(n_to_string.begin(), n_to_string.end());
    std::vector<int> valid_credit_card_num = {};
    for (unsigned long i = 0; i <= credit_card_num.size() - 1; i++)
    {
      std::cout << credit_card_num[i] << "\n";
      if (i % 2 == 0 && n_to_string.size() % 2 == 0 || i % 2 != 0 && n_to_string.size() % 2 != 0)
      {
        if ((credit_card_num[i] - '0') * 2 > 9)
        {
          std::cout << "if ((credit_card_num[i] - '0') * 2 > 9)" << "\n";
          int split_digital = ((credit_card_num[i] - '0') * 2);
          std::cout << split_digital << "\n";
          std::string split_digital_s = std::to_string(split_digital);
          split_digital = 0;
          for (unsigned long j = 0; j <= split_digital_s.size() - 1; j++)
          {
            std::cout << split_digital_s[j] << "\n";
            split_digital += split_digital_s[j] - '0';
          }
          valid_credit_card_num.push_back(split_digital);
          std::cout << "MARK 1" << "\n";
        }
        else
        {
          std::cout << "UNDER 9" << "\n";
          valid_credit_card_num.push_back((credit_card_num[i] - '0') * 2);
        }
      }
      else
      {
        valid_credit_card_num.push_back((credit_card_num[i] - '0'));
      }
    }
    std::cout << "\n";
    int final_sum = 0;
    for (unsigned long i = 0; i <= valid_credit_card_num.size() - 1; i++)
    {
      std::cout << valid_credit_card_num[i] << " ";
      final_sum += valid_credit_card_num[i];
    }
    std::cout << "\n" << "SUM: " << final_sum << "\n";
    if (final_sum % 10 == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

#include <string>
#include <vector>
template <typename T> std::vector<T> uIO(const std::vector<T>& iterable)
{
  if (iterable.empty())
  {
    return {};
  }
  std::vector<T> iterable_string(iterable.begin(), iterable.end());
  std::vector<T> returned_vector = {};
  for (unsigned long i = 0; i <= iterable_string.size() - 1; i++)
  {
    std::cout << iterable_string[i] << "\n";
    while (true)
    {
      if (i + 2 > iterable_string.size())
      {
        std::cout << "i + 1 > iterable_string.size()" << "\n";
        break;
      }
      std::cout << iterable_string[i] << " " << iterable_string[i + 1] << "\n";
      if (iterable_string[i] == iterable_string[i + 1] && iterable_string.size() >= i + 1)
      {
        iterable_string.erase(iterable_string.begin());
      }
      else
      {
        break;
      }
    }
    returned_vector.push_back(iterable_string[i]);
    if (i + 1 > iterable_string.size())
    {
      break;
    }
  }
  std::cout << "END" << "\n";
  return returned_vector;
}

std::vector<char> uIO(const std::string& iterable)
{
  if (iterable.empty())
  {
    return {};
  }
  std::cout << "Passed Arug: " << iterable << "\n";
  std::vector<char> iterable_string(iterable.begin(), iterable.end());
  std::vector<char> returned_vector = {};
  for (unsigned long i = 0; i <= iterable_string.size() - 1; i++)
  {
    std::cout << iterable_string[i] << "\n";
    while (true)
    {
      if (i + 2 > iterable_string.size())
      {
        std::cout << "i + 1 > iterable_string.size()" << "\n";
        break;
      }
      std::cout << iterable_string[i] << " " << iterable_string[i + 1] << "\n";
      if (iterable_string[i] == iterable_string[i + 1] && iterable_string.size() >= i + 1)
      {
        iterable_string.erase(iterable_string.begin());
      }
      else
      {
        break;
      }
    }
    returned_vector.push_back(iterable_string[i]);
    if (i + 1 > iterable_string.size())
    {
      break;
    }
  }
  std::cout << "END" << "\n";
  return returned_vector;
}

#include <map>
#include <string>
std::map<char, unsigned> c(const std::string& string) 
{
  if (string.empty())
  {
    return {};
  }
  std::map<char, unsigned> char_cout;
  for (int i = 0; i <= string.size() - 1; i++)
  {
    char_cout[string[i]]++;
  }
  return char_cout;
}

long qT(std::vector<int> customers,int n)
{
  std::cout << "\n";
  std::cout << "===========================================================" << "\n";
  std::cout << "Passed List: ";
  for (unsigned long i = 0; i < customers.size(); i++)
  {
    std::cout << customers[i] << " ";
  }
  int time = 0;
  if (customers.empty())
  {
    return time;
  }
  // If queue can accommodate all customers logic.
  if (n >= (int)customers.size())
  {
    std::cout << "Large Queue" << "\n";
    int largest_element  = *max_element(customers.begin(),customers.end());
    return largest_element + time;
  }
  
  while (customers.size() != 0)
  {
    std::cout << "\n" << "New Loop:" << "\n";
    for (int j = 0; j <= n-1; j++)
    {
      std::cout << "j: " << j << "\n";
      if (!(customers[j] == 0))
      {
        std::cout << customers.at(j) << " >>> " << customers.at(j) - 1 << "\n";
        customers.at(j) = customers.at(j) - 1;
      }
    }
    // Remove all zeros in list:
    customers.erase(std::remove(customers.begin(), customers.end(), 0), customers.end());
    time++;
    std::cout << "Current List: ";
    for (unsigned long i = 0; i < customers.size(); i++)
    {
      std::cout << customers[i] << " ";
    }
    std::cout << "n: " << n << " | Customer size: " << customers.size() << "\n";
    // If queue can accommodate all customers logic.
    if (n >= (int)customers.size())
    {
      std::cout << "Large Queue" << "\n";
      int largest_element  = *max_element(customers.begin(),customers.end());
      return largest_element + time;
    }
  }
  return time;
}

bool XO(const std::string& str)
{
  int o = 0;
  int x = 0;
  for (int i = 0; i <= str.size(); i++)
  {
    if (str[i] == 'o' || str[i] == 'O')
    {
      o++;
    }
    else if (str[i] == 'x' || str[i] == 'X')
    {
      x++;
    }
  }
  if (o == x)
  {
    return true;
  }
  else
  {
    return false;
  }
}

std::vector<std::string> sBL(std::vector<std::string> array)
{
	std::vector<std::string> sorted_vector;
	for (unsigned long i = 0; i <= array.size() - 1; i++)
	{
	std::cout << "\n" << array[i] << "\n";
	int current_low = 0;
	std::string current_low_string = array[i];
	std::cout << i << "] Internal Loop: " << "\n";
	if (array.size() != 1)
	{
		for (unsigned long j = 0; j <= array.size() - 1; j++)
		{
			std::cout << current_low_string << " > " << array[j] << "\n";
			if (current_low_string.size() > array[j].size())
			{
				std::cout << "Current Low: " << array[j] << "\n";
				current_low_string = array[j];
				current_low = j;
			}
		}
		sorted_vector.push_back(current_low_string);
		array.erase(array.begin() + current_low);
	}
	else if (array.size() == 1)
	{
		sorted_vector.push_back(array[0]);
		std::cout << "BREAK" << "\n";
		break;
	}
	for (unsigned long k = 0; k <= array.size() - 1; k++)
	{
		std::cout << array[k] << " ";
	}
	std::cout << "\n";
	i = -1;
	}
	return sorted_vector;
}

#include <string>
#include <unordered_map>

std::unordered_map<std::string, int> assembler(const std::vector<std::string>& program)
{
  std::unordered_map<std::string, int> assembled_map;
  std::string current_var = "";
  
  std::cout << "Full list of instructions:" << "\n";
  for (unsigned long i = 0; i <= program.size() - 1; i++)
  {
    std::cout << program[i] << "\n";
  }
  std::cout << "\n";
 
  for (unsigned long i = 0; i <= program.size() - 1; i++)
  {
    std::cout << i << ") Instruction: " << program[i] << "\n";
    current_var = program[i].substr(program[i].find(" ") + 1, program[i].length() - program[i].find(" "));
    current_var = current_var.substr(0, current_var.find(" "));
    std::cout << "Register : !" << current_var << "!" << "\n";
    if (program[i].find("mov") != std::string::npos)
    {
      std::string mov = "";
      mov = program[i].substr(program[i].find(" ") + 1);
      mov = mov.substr(mov.find(" ") + 1);
      
      if (mov.find_first_of("0123456789") == std::string::npos)
      {
        std::cout << assembled_map[current_var] << " = " << assembled_map[mov] << "\n";
        assembled_map[current_var] = assembled_map[mov];
      }
      else
      {
        assembled_map[current_var] = std::stoi(mov);
      }
    }
    else if (program[i].find("inc") != std::string::npos)
    {
      std::cout << "++: " << assembled_map[current_var] << "\n";
      assembled_map[current_var]++;
    }
    else if (program[i].find("dec") != std::string::npos)
    {
      std::cout << "--: " << assembled_map[current_var] << "\n";
      assembled_map[current_var]--;
    }
    // Regardless of whether register is letter or number. Jump.
    else if (program[i].find("jnz") != std::string::npos)
    {
      if (current_var.find_first_of("0123456789") == std::string::npos)
      {
         std::cout << "Jump: " << assembled_map[current_var] << "\n";
        // Move to next instruction if register is zero.
        if (assembled_map[current_var] != 0)
        {
          std::string jumps = "";
          jumps = program[i].substr(program[i].find(" ") + 1);
          jumps = jumps.substr(jumps.find(" ") + 1);

          std::cout << "# Jumps: " << std::stoi(jumps) << "\n";
          std::cout << "Previous Instruction: " << program[i + std::stoi(jumps)] << "\n";

          if (i + std::stoi(jumps) > program.size() - 1)
          {
            std::cout << "Break" << "\n";
            break;
          }
          else
          {
            i = i + std::stoi(jumps) - 1;
          }
        }
      }
      else
      {
        std::string jumps = "";
        jumps = program[i].substr(program[i].find(" ") + 1);
        jumps = jumps.substr(jumps.find(" ") + 1);

        std::cout << "# Jumps: " << std::stoi(jumps) << "\n";
        std::cout << "Previous Instruction: " << program[i + std::stoi(jumps)] << "\n";
        
        if (i + std::stoi(jumps) > program.size() - 1)
        {
          std::cout << "Break" << "\n";
          break;
        }
        else
        {
          i = i + std::stoi(jumps) - 1;
        }
      }
    }
    std::cout << "\n";
    for (auto const &pair: assembled_map) 
    {
      std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
    std::cout << "\n";
  }
  for (auto const &pair: assembled_map) 
  {
    std::cout << "{" << pair.first << ": " << pair.second << "}\n";
  }
  std::cout << "\n";
  return (assembled_map);
}

#include <map>
bool i_i(std::string str) 
{
  if (str.empty() == true)
  {
    return true;
  }
  std::cout << str << "\n";
  std::cout << "START" << "\n";
  std::map<char, int> str_map;
  for (unsigned long i = 0; i <= str.size() - 1; i++)
  {
    std::cout << char(std::tolower(str[i])) << " ";
    str_map[char(std::tolower(str[i]))]++;
  }
  std::cout << "\n";
  for (auto const& [key, val] : str_map)
  {
    std::cout << key
              << ':'  
              << val
              << "\n";
    if (val > 1)
    {
      return false;
    }
  }
  return true;
}

#include <string>
std::string s_s(const std::string& a, const std::string& b)
{
  std::string aa = a;
  std::string bb = b;

  if (aa.empty())
  {
    aa = "0";
  }
  else if (bb.empty())
  {
    bb = "0";
  }
  
  for (unsigned long int i = 0; i <= aa.length() - 1; i++)
  {
    if (!std::isdigit(aa[i]))
    {
      return "0";
    }
  }
  for (unsigned long int i = 0; i <= bb.length() - 1; i++)
  {
    if (!std::isdigit(bb[i]))
    {
      return "0";
    }
  }
  return std::to_string(std::stoi(aa) + std::stoi(bb));
}

int s_of_m(const std::vector<std::vector<int>> &numbers)
{
  int mini_sum = 0;
  int lowest_value = 0;
  for (unsigned long int i = 0; i <= numbers.size() - 1; i++)
  {
    lowest_value = numbers[i][0];
    std::cout << numbers[i][0] << "\n";
    for (unsigned long int j = 0; j <= numbers[i].size() - 1; j++)
    {
      if (lowest_value > numbers[i][j])
      {
        std::cout << "lowest_value: " << numbers[i][j] << "\n";
        lowest_value = numbers[i][j];
      }
    }
    mini_sum += lowest_value;
  }
  return mini_sum;
}

std::vector<int> m(const std::vector<int> & values) 
{
  std::vector<int> vector_double;
  if (values.empty() == true)
  {
    return vector_double;
  }
  for (unsigned long i = 0; i <= values.size() - 1; i++)
  {
    std::cout << values[i] << "\n";
    vector_double.push_back(values[i]*2);
  }
  return vector_double;
}

int tRF(int f) 
{
  std::cout << "F: " << f << "\n";
  if (f > 13)
  {
    return f-2;
  }
  else if (f >= 1)
  {
    return f-1; 
  }
  else
  {
    return f;
  }
}

int cM(std::string friend)
{
  std::cout << "Merry" << friend << "/m";
}

#include <vector>
unsigned long long mV(std::vector <int> values)
{
  sort(values.begin(), values.end());
  values.erase(unique(values.begin(), values.end()), values.end());
  std::string values_string = "";
  for (unsigned long i = 0; i <= values.size() - 1; i++)
  {
    values_string += std::to_string(values[i]);
  }
  return std::stol(values_string);
}

#include <vector>
int g(std::vector<int> nums) 
{
  int total = 1;
  for (int i = 0; i <= nums.size() - 1; i++)
  {
    total = total * nums[i];
  }
  return total;
}

std::string g(const std::string& name, const std::string& owner) 
{
  if (name == owner)
  {
    return "Hello boss";
  }
  else
  {
    return "Hello guest";
  }
}

std::string b_b(std::string zxc)
{
  std::vector<std::string> sample;
  for (int i = 0; i <= zxc.size() - 1; i++)
  {
    if (zxc[i] % 2 == 0)
    {
      sample.push_back(zxc[i]);
    }
  }
}

bool c_c(std::vector<std::string> vec_string)
{
	int true_sum = 0;
	for (int i = 0; i <= vec_string.size() - 1; i++)
	{
		std::cout << vec_string[i] << "\n";
		if (vec_string == "false")
		{
			return true;
		}
		else if (vec_string == "true")
		{
			true_sum++;
		}
	}
	if (true_sum / 2 == vector[true_sum])
	{
		std::cout << (true_sum / 2) << vector[true_sum] << "\n";
		return true;    
	}
	else
	{
		return false;
	}
}	

std::string reverse_letter(const std::string &str)
{
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
  std::string reverse_string = "";
  for (int i = str.size(); i >= 0; i--)
  {
    if (alphabet.find(str[i]) != std::string::npos)
    {
      reverse_string += str[i];
    }
    std::cout << reverse_string << "\n";
  }
  return reverse_string;
}

#include <vector>
#include <string>
#include <gmp.h>

int test_function()
{
  mpz_class x = 0;
  std::cout << x << "\n";
}
  
int missing(std::string original_string) 
{
  test_function();
  std::cout << "\n" << "Passed Argument: " << original_string << "\n";
  unsigned long index_one = 0;
  int index_two = 1;
  int index_incrementer = 1;
  bool double_digit_trigger = false;
  unsigned long long parallel_counting = std::stoull(std::string() + original_string.substr(0, index_two));
  bool pattern_found = false;
  unsigned long long pattern_number = -1;
  int temp_cout = 0;
  int orig_index_incrementer = 0;
  while (true)
  {
    if (original_string == std::to_string(parallel_counting) || index_one >= original_string.length() - 1)
    {
      std::cout << "[!] Pattern-Break (Match or substring beyond original string's length) " << index_one << " " << original_string.length() - 1 << "\n";
      // Return -1 if no pattern found.
      if (pattern_found == true)
      {
        std::cout << "Return: " << pattern_number << "\n";
        return pattern_number;
      }
      std::cout << "return -1" << "\n";
      return -1;
    }

    std::cout << "index_incrementer: " << index_incrementer << " index_one: " << index_one << " index_two: " << index_two << "\n";
    std::cout << "OS: " << original_string.substr(index_one, index_two) << " PC: " << parallel_counting << "\n";
    
    if (index_one >= original_string.length() - 1)
    {
      std::cout << "[!] Pattern-Break (Substring beyond original string's length)" << "\n";
      index_one = 0;
      index_two++;
      index_incrementer++;
      if (double_digit_trigger == true)
      {
        std::cout << "double_digit_trigger 1" << "\n";
        double_digit_trigger = false;
        index_two--;
        index_incrementer = orig_index_incrementer;
        temp_cout = 0;
      }
      // Reset parallel counter;
      parallel_counting = std::stoull(std::string() + original_string.substr(0, index_two));
      std::cout << "\n";
      continue;
    }
    if (std::stoull(original_string.substr(index_one, index_two)) != parallel_counting)
    {
      if (pattern_found == true)
      {
        std::cout << "[!] Pattern-Break (Substring != Parallel Counting when pattern already found)" << "\n";
        pattern_found = false;
        index_one = 0;
        index_two++;
        index_incrementer++;
        // Reset parallel counter;
        parallel_counting = std::stoull(std::string() + original_string.substr(0, index_two));
        std::cout << "\n";
        continue;
      }
      std::cout << "[!] Pattern-Break (Substring != Parallel Counting)" << "\n";
      std::cout << "Break #: " << original_string.substr(index_one, index_two) << "\n";
      if (std::stoull(original_string.substr(index_one, index_two)) - 1 == parallel_counting)
      {
        std::cout << "[R] parallel_counting (Expected #):  " << parallel_counting << "\n";
        pattern_found = true;
        pattern_number = parallel_counting;
        parallel_counting++;
        continue;
      }
      index_one = 0;
      index_two++;
      index_incrementer++;

      if (double_digit_trigger == true)
      {
        std::cout << "double_digit_trigger two" << "\n";
        double_digit_trigger = false;
        index_two--;
        index_incrementer = orig_index_incrementer;
        index_incrementer++;
        std::cout << "index_incrementer: " << index_incrementer << "\n";
        temp_cout = 0;
      }
      // Reset parallel counter;
      parallel_counting = std::stoull(std::string() + original_string.substr(0, index_two));
      continue;
    }
    if (std::to_string(parallel_counting).length() != std::to_string(parallel_counting + 1).length())
    {
      std::cout << "[!] New Digit + double_digit_trigger = true;" << "\n";
      std::cout << parallel_counting << " " << parallel_counting + 1 << "\n";
      double_digit_trigger = true;
      index_two++;
      std::cout << "index_incrementer: " << index_incrementer << "\n";
      orig_index_incrementer = index_incrementer;
    }
    if (double_digit_trigger == true)
    {
      if (temp_cout == 1)
      {
        std::cout << "temp_cout: index_incrementer++;" << "\n";
        index_incrementer++;
      }
      temp_cout += 1;
    }
    index_one += index_incrementer;
    parallel_counting++;
  }
  return -1;
}
/*
  //std::cout.setstate(std::ios_base::failbit);
  std::cout << "Testing..." << "\n";
  std::vector<long long> vector_missing;
  unsigned long a = 0;
  unsigned long b = 0;
  unsigned long i = 0;
  while (true)
  {
    bool pattern_fail = false;
    vector_missing.clear();
    a = 0;
    b += 1;
    i = 0;
    std::cout << "Substring += vector loop: " << b << "\n";
    std::cout << "Size: " << original_string.size() -1 << "\n";
    while (i <= original_string.size() - 1)
    {
      if (a > original_string.size() - 1)
      {
        break;
      }
      std::cout << "i: " << i << " " << original_string.substr(a,b) << "\n";
      std::cout << " a: " << a << " b: " << b << " i: " << i << "\n";
      
      vector_missing.push_back(std::stoll(std::string() + original_string.substr(a,b)));
      a += b;
      //b++;
      i++;
    }
    std::cout << "Vector missing check: " << "\n";
    for (unsigned long i = 0; i <= vector_missing.size() - 1; i++)
    {
       std::cout << vector_missing[i] << " | ";
    }
    std::cout << "\n" << "Pattern Check" << "\n";
    int missing_number = 0;
    int compare = vector_missing[0];
    for (unsigned long i = 0; i <= vector_missing.size() - 1; i++)
    {
      if (compare != vector_missing[i])
      {
        int baseline_cout = vector_missing[i-2];
        std::cout << "Broken pattern" << "\n";
        std::cout << "Compare: " << compare << "\n\n";
        missing_number = compare;
        for (int j = -2; j <= 2; j++)
        {
          std::cout << "i: " << vector_missing[i] << "\n";
          std::cout << "j: " << j << " Internal loop: " << vector_missing[i+j] << " Baseline: " << baseline_cout << "\n";
          if (j == 0)
          {
            if (baseline_cout != missing_number)
            {
              // Expected current number does not equal expected missing number thus fail
              std::cout << "0 Baseline: " << baseline_cout << " missing_number: " << missing_number << "\n";
              std::cout << "pattern fail" << "\n";
              pattern_fail = true;
              break;
            }
            baseline_cout+=2;
            continue; 
          }
          else if (baseline_cout != vector_missing[i+j])
          {
            // Broken pattern with current # of digits
            std::cout << "Baseline: " << baseline_cout << " vector_missing: " << vector_missing[i+j] << "\n";
            std::cout << "pattern fail" << "\n";
            pattern_fail = true;
            break;
          }
          std::cout << j << "\n";
          std::cout << "Missing # loop: " << vector_missing[i+j] << "\n\n";
          baseline_cout++;
        }
        break;
      }
      std::cout << vector_missing[i] << "\n";
      compare++;
    }
    if (pattern_fail == false)
    {
      std::cout << "Missing # result: " << missing_number << "\n\n";
      if (missing_number == 0)
      {
        return -1;
      }
      return missing_number;
    }
    else
    {
      std::cout << "BREAK BREAK BREAK" << "\n";
      // BREAK -> Begin loop again with increase to next set of digitals.
    }
  }
  return -1;
}
*/

#include <vector>

std::vector<int> m_z(const std::vector<int>& input) 
{
  std::cout << "\n\n";
  std::cout << "Debug Test " << "\n";
  std::vector<int> i_vector = input;
  for (unsigned long i = 0; i <= i_vector.size() - 1; i++)
  {
    std::cout << i_vector[i] << " ";
  }
  std::cout << "\n\n";
  std::cout << "New Test 2nd" << "\n";
  for (unsigned long i = 0; i <= i_vector.size() - 1; i++)
  {
    std::cout << i_vector[i] << " ";
    if (i_vector[i] == 0)
    {
      std::cout << "Detection: " << i_vector[i] << "\n";
      std::cout << "[ " << i_vector[i-1] << " " << i_vector[i] << " " << i_vector[i+1] << " ]" << "\n";
      i_vector.erase(i_vector.begin() + i);
      i_vector.push_back(0);
      std::cout << "[ " << i_vector[i-1] << " " << i_vector[i] << " " << i_vector[i+1] << " ]" << "\n";
    }
  }
  return i_vector;
}

#include <vector>

int sum(std::vector<int> nums) 
{
  if (nums.empty())
  {
    return 0;
  }
  int sum = 0;
  for (unsigned long i = 0; i <= nums.size() - 1; i++)
  {
    sum += nums[i];
  }
  return sum;
}

std::vector<int> sortArray(std::vector<int> array)
{
  if (array.empty())
  {
    return array;
  }
  std::vector<std::string> even_list;
  std::vector<int> odd_list;
  for (int i = 0; i <= array.size() - 1; i++)
  {
    if (array[i] % 2 == 0)
    {
      even_list.push_back(std::to_string(array[i]));
    }
    else
    {
      odd_list.push_back(array[i]);
      even_list.push_back("_");
    }
  }
  for (int i = 0; i <= odd_list.size() - 1; i++)
  {
    std::cout << odd_list[i];
  }
  std::cout << "\n";
  std::sort(odd_list.begin(), odd_list.end());
  int j = 0;
  for (int i = 0; i <= even_list.size() - 1; i++)
  {
    std::cout << even_list[i];
    if (even_list[i] == "_")
    {
      even_list[i] = std::to_string(odd_list[j]);
      j++;
    }
  }
  std::cout << "\n";
  odd_list.clear();
  for (int i = 0; i <= even_list.size() - 1; i++)
  {
    odd_list.push_back(std::stoi(even_list[i]));
  }
  return odd_list;
}

#include <iostream>
#include <vector>

std::vector<int> josephus(std::vector<int> items, unsigned long k)
{
  if (k <= 1 || items.empty())
  {
    return items;
  }
  std::cout << "Items" << " k: " << k << "\n";
  for (unsigned long i = 0; i <= items.size() - 1; i++)
  {
    std::cout << items[i] << "\n";
  }
  std::cout << "\n";
  std::vector<int> permutation_vec;
  unsigned long index = 0;
  unsigned long pos = 0;
  while (items.size() != 0)
  {
    if (index == items.size())
    {
      index = 0;
    }
    std::cout << "Index: " << index << "\n";
    std::cout << "Pos: " << pos << "\n";
    std::cout << items[index] << "\n";
    if (1 == items.size() && !items.empty())
    {
      permutation_vec.push_back(items[0]);
      break;
    }
    if (pos == k - 1)
    {
      std::cout << "pos==k-1: " << items[index] << "\n";
      permutation_vec.push_back(items[index]);
      items.erase(items.begin() + index);
      pos = 0;
      for (unsigned long z = 0; z <= items.size() - 1; z++)
      {
        std::cout << items[z];
      }
      std::cout << "\n";
    }
    else
    {
      pos++;
      index++;
    }
    std::cout << "\n";
  }
  std::cout << "\n";
  std::cout << "Permutation_vec" << "\n";
  for (unsigned long i = 0; i <= permutation_vec.size() - 1; i++)
  {
    std::cout << permutation_vec[i] << "\n";
  }
  return permutation_vec;
}

#include <string>
#include <vector>

std::string rot13(std::string msg)
{
  std::string new_string = "";
  std::cout << "[D]: " << msg << "\n";
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
  for (unsigned long i = 0; i <= msg.size() - 1; i++)
  {
    for (unsigned long j = 0; j <= alphabet.size() - 1; j++)
    {
      if (msg[i] == alphabet[j] || msg[i] == std::toupper(alphabet[j]))
      {
        bool upper_case_switch = false;
        if (msg[i] == std::toupper(alphabet[j]))
        {
          upper_case_switch = true;
        }
        std::cout << msg[i] << " == " << alphabet[j] << "\n";
        for (unsigned long k = 0; k <= 12; k++)
        {
          j++;
          if (j == alphabet.size())
          {
            j = 0;
          }
        }
        if (upper_case_switch == true)
        {
          new_string += std::toupper(alphabet[j]);
        }
        else
        {
          new_string += alphabet[j];
        }
        break;
      }
      std::cout << "[D] " << msg[j] << "\n";
      if (j == alphabet.size() - 1)
      {
        new_string += msg[i];
      }
    }
  }
  std::cout << "New string: " << new_string << "\n";
  return  new_string;
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
  bool iT(long a, long b, long c)
  {
    std::cout << a << " " << b << " " << c << "\n";
    if (a <= 0 || b <= 0 || c <= 0)
    {
      std::cout << "return false;" << "\n";
      return false;
    }
    if (a == b == c)
    {
      std::cout << "return false;" << "\n";
      return false;
    }
    if (a + b > c)
    {
      if (a + c > b)
      {
        if (b + c > a)
        {
          std::cout << "return true;" << "\n";
          return true;
        }
        else
        {
          std::cout << "return false;" << "\n";
          return false;
        }
      }
      else
      {
        std::cout << "return false;" << "\n";
        return false;
      }
    }
    else
    {
      std::cout << "return false;" << "\n";
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
