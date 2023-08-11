#pragma once
#include <vector>
#include <string>

class Task1 {
private:
    std::vector<std::string> m_strings;

public:
    void AddString(const std::string &string);
    void PrintStrings() const;
    int CountStringsContainingPattern(const std::string &pattern);
    bool ContainsSubstring(const std::string &string, const std::string &pattern);
    std::string GetUserInput();
};
