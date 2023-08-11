#pragma once
#include <vector>
#include <algorithm>

template <class T>
class Task2 {
private:
    std::vector<T> m_data;

public:
    Task2(std::vector<T> data): m_data(data) {

    }

    template<typename UserFunction>
    void ApplyUserFunction(UserFunction function) {
        std::transform(m_data.begin(), m_data.end(), m_data.begin(), function);
    }

    template<typename UserPredicate>
    bool CompairePairwise(UserPredicate predicate) {
        auto iterator = std::adjacent_find(m_data.begin(), m_data.end(), predicate);
        return iterator != m_data.end();
    }

    void PrintVector() const {
        for (const T& value : m_data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};
