#include <iostream>
#include <string>
#include <unordered_map>
#include <stdexcept>
class RomanToIntegerConverter {
public:
    int romanToInt(const std::string& s) {
        std::unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500},
            {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            char romanChar = *it;
            if (romanMap.find(romanChar) == romanMap.end()) {
                throw std::invalid_argument("Invalid Roman numeral character");
            }

            int currentValue = romanMap[romanChar];

            if (currentValue < prevValue) {
                total -= currentValue;
            } else {
                total += currentValue;
            }
            prevValue = currentValue;
        }

        return total;
    }