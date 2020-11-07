//
// Created by Michael on 07/11/2020.
//
#include <iostream>
#include <fstream>
#include "../Header Files/Subtractor.h"

Subtractor::Subtractor(): ExpressionEvaluator(){

}

Subtractor::Subtractor(int n) : ExpressionEvaluator(n) {

}
double Subtractor::calculate() {
    double output;
    for(int i = 0;i<n;++i){
        i == 0 ? (output = ops[i]) : (output -= ops[i]);
    }
    return output;
}
void Subtractor::logToScreen() {
    for(int i = 0; i<n;++i){
        (ops[i] >= 0 ?
         std::cout << ops[i]:
         std::cout << '(' << ops[i] << ')') //add parenthesis when operand is negative
                << (i != n - 1 ? (" minus "): " equals ");
    }
    std::cout<<calculate()<<std::endl;
}

void Subtractor::logToFile(const std::string &filename) {
    std::ofstream myfile;
    myfile.open (filename);
    for(int i = 0; i<n;++i){
        (ops[i] >= 0 ?
         std::cout << ops[i]:
         std::cout << '(' << ops[i] << ')') //add parenthesis when operand is negative
                << (i != n - 1 ? (" minus "): " equals ");
    }
    myfile<<calculate()<<std::endl;
}
std::string Subtractor::getName() {
    return name;
}