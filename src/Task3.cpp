#include "Task3.h"

void Task3::AddExecutor(std::function<void()> function) {
    m_functionList.push_back(function);
}

void Task3::RemoveExecutor(size_t index) {
    if (index < m_functionList.size()) {
        m_functionList.erase(m_functionList.begin() + index);
    }
}

void Task3::RemoveAllExecutors() {
    m_functionList.clear();
}

void Task3::ExecuteAll() {
    for (const auto& function: m_functionList) {
        function();
    }
}
