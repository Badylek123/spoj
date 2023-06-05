#include <iostream>
#include <string>
#include <algorithm>

std::string addNumbers(const std::string& num1, const std::string& num2) {
    std::string result;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;
        result.push_back(digit + '0');
        i--;
        j--;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int t;
    std::cin >> t; 
    for (int k = 0; k < t; k++) {
        std::string num1, num2;
        std::cin >> num1 >> num2; 

        std::string sum = addNumbers(num1, num2);
        std::cout << sum << std::endl;
    }

    return 0;
}
