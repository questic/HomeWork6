#pragma once
#include <vector>
#include <functional>

class Task3 {
private:
    std::vector<std::function<void()>> m_functionList;

public:
    void AddExecutor(std::function<void()> function);
    void RemoveExecutor(size_t index);
    void RemoveAllExecutors();
    void ExecuteAll();
};
