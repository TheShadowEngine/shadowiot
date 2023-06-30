/**
 * @file activationfunctions.h
 * @author Krisna Pranav
 * @brief Activation Functions
 * @version 1.0
 * @date 2023-06-30
 * 
 * @copyright Copyright (c) 2023 Krisna Pranav, ShadowEngine Developers 
 * 
 */

#pragma once

#include <stdio.h>
#include <math.h>

namespace Net {
    typedef double(*ActivationFunction)(double);

    /**
     * @param initialOutput 
     * @return double 
     */
    inline double sigmoid(double initialOutput) {
        return (1 / (1 + exp(-initialOutput / 1)));
    }

    /**
     * @param initialOutput 
     * @return double 
     */
    inline double binary(double initialOutput) {
        return (initialOutput > 0 ? 1 : 0);
    }

    /**
     * @param initialOutput 
     * @return double 
     */
    inline double integer(double initialOutput) {
        return floor(initialOutput);
    }

    /**
     * @param neuronOutput 
     * @return double 
     */
    inline double simpleLinearDerivative(double neuronOutput) {
        return 1;
    }

    /**
     * @param neuronOutput 
     * @return double 
     */
    inline double sigmoidDerivative(double neuronOutput) {
        return neuronOutput * (1 - neuronOutput);
    }
}