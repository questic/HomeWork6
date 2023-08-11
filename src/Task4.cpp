#include "Task4.h"
#include "MathException.h"
#include <cmath>

double Task4::ComputeAtanh(double x) {
    if (x < - 1.0) {
        throw MathException("X for atanh cannot be < -1.0");
    } else if (x > 1.0) {
        throw MathException("X for atanh cannot be > 1.0");
    }

    return std::atan(x);
}

double Task4::ComputeCtanh(double x) {
    if (x == 0.0) {
        throw MathException("X for ctanh cannot be 0.0");
    }

    return 1.0 / std::tan(x);
}

double Task4::ComputeAsinh(double x) {
    if (x < 0.0) {
        throw MathException("X for asinh cannot be < 0.0");
    }

    return std::asinh(x);
}
