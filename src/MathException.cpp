#include "MathException.h"

MathException::MathException(const std::string &errorMessage): m_message(errorMessage) {

}

const char *MathException::what() const noexcept {
    return m_message.c_str();
}

