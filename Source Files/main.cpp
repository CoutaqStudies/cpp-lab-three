#include <iostream>
#include "../Header Files/ExpressionEvaluator.h"
#include "../Header Files/CustomExpressionEvaluator.h"
#include "../Header Files/Subtractor.h"
#include "../Header Files/Multiplier.h"
#include "../Header Files/Photographer.h"
#include "../Header Files/Designer.h"

void taskOne();
void taskTwo();

int main() {
    taskTwo();
    return 0;
}

#pragma region Task One
void taskOne(){
    printf("%s\n", "----Task One----");
    ExpressionEvaluator* evaluators[3];

    double customOperands[] = {5, 10, -2.5, -40, -2};
    auto* customExpressionEvaluator = new CustomExpressionEvaluator(5);
    evaluators[0] = customExpressionEvaluator;
    evaluators[0]->setOperands(customOperands, 5);

    double subtractorOperands[] = {120, -12, 83.2, -1.5, 5, 7, 2, 18.5, 76};
    evaluators[1] = new Subtractor(9);
    evaluators[1]->setOperands(subtractorOperands, 9);

    evaluators[2] = new Multiplier(2);
    evaluators[2]->setOperand(0, -1.5);
    evaluators[2]->setOperand(1, 80);

    for(auto & evaluator : evaluators){
        std::cout<<evaluator->getName()<<':'<<std::endl;
        evaluator->logToFile("Lab3.log");
        evaluator->logToScreen();
        std::cout<<"result: "<<evaluator->calculate()<<std::endl;
    }
    for(auto & evaluator : evaluators) {
        IShuffle* shufflable = dynamic_cast<IShuffle*>(evaluator);
        if(shufflable!= nullptr){
            std::cout<<evaluator->getName()<<" is shuffleable!"<<std::endl;
            std::cout<<"Before shuffling: "<< std::endl;
            evaluator->logToScreen();
            shufflable->shuffle();
            std::cout<<"After shuffling: "<< std::endl;
            evaluator->logToScreen();
        }
    }
}
#pragma endregion
#pragma region Task Two
void taskTwo(){
    Employee* employees[4];

    Photographer* bo = new Photographer("barack", "obama", "m", 1984, 2000, 3.5, "0713123123", 6);
    employees[0] = bo;
    Photographer* bg = new Photographer("bill", "gates", "m", 1978, 2005, 3.4, "0713123124", 4);
    employees[1] = bg;

    Designer* qe = new Designer("queen", "elizabeth", "f", 1000, 2020, 4.1, "0713123125");
    employees[2] = qe;
    Designer* th = new Designer("tom", "hanks", "m", 1960, 2001, 2, "0713126126");
    employees[3] = th;
    printf("Our employees are:\n");
    for(auto & employee : employees) {
        employee->printInfo();
    }
    printf("Now everybody who can process a photo will:\n");
    for(auto & employee : employees) {
        employee->printInfo();
        IPictureProcessor* processor = dynamic_cast<IPictureProcessor*>(employee); //rtti
        if(processor != nullptr){
            processor->process("any photo");
            employee->printInfo();
        }

    }

}