#include "Task1.h"
#include <iostream>
#include <algorithm>

void Task1::AddString(const std::string &string) {
    m_strings.push_back(string);
}

void Task1::PrintStrings() const {
    for (const std::string &string : m_strings) {
        std::cout << string << std::endl;
    }
}

int Task1::CountStringsContainingPattern(const std::string &pattern) {
    return std::count_if(m_strings.begin(), m_strings.end(),
                         [&pattern, this](const std::string &string) {
                             return ContainsSubstring(string, pattern);
    });
}

bool Task1::ContainsSubstring(const std::string &string, const std::string &pattern) {
    return std::search(string.begin(), string.end(), pattern.begin(), pattern.end()) != string.end();
}

std::string Task1::GetUserInput() {
    std::string input;
    std::getline(std::cin, input);
    return input;
}
