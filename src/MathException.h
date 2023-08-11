#pragma once
#include <stdexcept>

class MathException: public std::exception{
private:
    std::string m_message;

public:
    MathException(const std::string &errorMessage);
    const char* what() const noexcept override;
};
