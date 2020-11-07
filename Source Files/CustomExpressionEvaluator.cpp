//
// Created by Michael on 07/11/2020.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <random>
#include "../Header Files/CustomExpressionEvaluator.h"

CustomExpressionEvaluator::CustomExpressionEvaluator(): ExpressionEvaluator(){

}

CustomExpressionEvaluator::CustomExpressionEvaluator(int n) : ExpressionEvaluator(n) {

}
double CustomExpressionEvaluator::calculate() {
    double output;
    for(int i = 0;i<n;++i){
        if(i == 0){
            output = ops[i];
        } else{
            i % 2 != 0 ? (output *= ops[i]) : (output /= ops[i]);
        }
    }
    return output;
}
void CustomExpressionEvaluator::logToScreen() {
    for(int i = 0; i<n;++i){
        (ops[i] >= 0 ?
        std::cout << ops[i]:
        std::cout << '(' << ops[i] << ')') //add parenthesis when operand is negative
        << (i != n - 1 ?
        (i % 2 == 0?"*":"/"):
        "="); // change the symbol to the equals sign if its the last one
    }
    std::cout<<calculate()<<std::endl;
}

void CustomExpressionEvaluator::logToFile(const std::string &filename) {
    std::ofstream myfile;
    myfile.open (filename);
    for(int i = 0; i<n;++i){
        (ops[i] >= 0 ?
         myfile << ops[i]:
         myfile << '(' << ops[i] << ')') //add parenthesis when operand is negative
                << (i != n - 1 ?
                    (i % 2 == 0?"*":"/"):
                    "="); // change the symbol to the equals sign if its the last one
    }
    myfile<<calculate()<<std::endl;

}
void CustomExpressionEvaluator::shuffle() const{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, n-1);
    for(int i=0; i<n; ++i)
        shuffle(distr(gen), distr(gen));
}
void CustomExpressionEvaluator::shuffle(size_t i, size_t j) const{
    std::swap(ops[i], ops[j]);
};
std::string CustomExpressionEvaluator::getName() {
    return name;
}
