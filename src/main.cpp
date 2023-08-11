#include <iostream>
#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "MathException.h"

int main() {
    // Solution of task 1 ----------------------------------------------------------------------------------------------
    Task1 solution1;
    std::cout << "Begin of solution 1: " << std::endl;
    std::cout << "Enter strings (empty line to stop): " << std::endl;
    std::string input;

    while (true) {
        input = solution1.GetUserInput();

        if (input.empty()) {
            break;
        }

        solution1.AddString(input);
    }

    std::cout << "Entered strings: " << std::endl;
    solution1.PrintStrings();

    std::cout << "Enter pattern for search: " << std::endl;
    std::string pattern = solution1.GetUserInput();
    int count = solution1.CountStringsContainingPattern(pattern);

    std::cout << "Number of strings containing the pattern: " << count << std::endl;
    std::cout << "End of solution 1: " << std::endl;
    // End of solution task 1 ------------------------------------------------------------------------------------------

    // Solution of task 2 ----------------------------------------------------------------------------------------------
    std::cout << "Begin of solution 2: " << std::endl;
    std::vector<int> numbers = {1, 2, 2, 4, 5};

    Task2<int> solution2(numbers);

    std::cout << "Vector before applying the function: ";
    solution2.PrintVector();

    solution2.ApplyUserFunction([](int x) {
        return x * x;
    });

    std::cout << "Vector after applying the function: ";
    solution2.PrintVector();

    bool hasAdjacentEqual = solution2.CompairePairwise([](int first, int second) {
        return first % 2 == 0 && second % 2 == 0;
    });

    if (hasAdjacentEqual) {
        std::cout << "The vector has adjacent even elements." << std::endl;
    } else {
        std::cout << "The vector does not have adjacent even elements." << std::endl;
    }
    std::cout << "End of solution 2: " << std::endl;
    // End of solution task 2 ------------------------------------------------------------------------------------------

    // Solution of task 3 ----------------------------------------------------------------------------------------------
    std::cout << "Begin of solution 3: " << std::endl;
    Task3 solution3;

    solution3.AddExecutor([]() {
        std::cout << "Executor 1 do something." << std::endl;
    });
    solution3.AddExecutor([]() {
        std::cout << "Executor 2 do something." << std::endl;
    });
    solution3.AddExecutor([]() {
        std::cout << "Executor 3 do something." << std::endl;
    });

    solution3.ExecuteAll();

    solution3.RemoveExecutor(0);

    solution3.ExecuteAll();

    solution3.RemoveAllExecutors();

    solution3.ExecuteAll();
    std::cout << "End of solution 3: " << std::endl;
    // End of solution task 3 ------------------------------------------------------------------------------------------

    // Solution of task 4 ----------------------------------------------------------------------------------------------
    std::cout << "Begin of solution 4: " << std::endl;
    Task4 solution4;

    try {
        double x;
        std::cout << "Enter x for compute Atanh." << std::endl;
        std::cin >> x;
        double resultTanh = solution4.ComputeAtanh(x);
        std::cout << "Atanh(" << x <<  ") = " << resultTanh << std::endl;

        std::cout << "Enter x for compute Ctanh." << std::endl;
        std::cin >> x;
        double resultCtanh = solution4.ComputeCtanh(x);
        std::cout << "Ctanh(" << x <<  ") = " << resultCtanh << std::endl;

        std::cout << "Enter x for compute Asinh." << std::endl;
        std::cin >> x;
        double resultAsinh = solution4.ComputeAsinh(x);
        std::cout << "Asinh(" << x <<  ") = " << resultAsinh << std::endl;
    } catch (const MathException &e) {
        std::cerr << "An error occurred while computing mathematical function: " << e.what() << std::endl;
    }
    std::cout << "End of solution 4: " << std::endl;
    // End of solution task 4 ------------------------------------------------------------------------------------------
}
