//
// Created by Michael on 07/11/2020.
//

#ifndef LABTHREECPP_SUBTRACTOR_H
#define LABTHREECPP_SUBTRACTOR_H
#include "ExpressionEvaluator.h"

class Subtractor: public ExpressionEvaluator{
    public:
        Subtractor();
        Subtractor(int n);
        double calculate();
        void logToScreen();
        void logToFile(const std::string &filename);
        std::string getName();
    private:
        std::string name = "Subtractor";
};


#endif //LABTHREECPP_SUBTRACTOR_H
