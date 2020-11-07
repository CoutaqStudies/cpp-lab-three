//
// Created by Michael on 06.10.2020.
//
/*Класс ФОТОГРАФ.
Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с
помощью сеттеров, а третий проинициализировать с помощью конструктора с
параметрами. В главной функции проимитировать три фотосессии и голосование
зрителей по их результатам (нарастить рейтинг каждого фотографа на случайное число
из диапазона 0.0..1.0; если количество проголосовавших людей меньше 10, то не
наращивать рейтинг). Вывести список фотографов в порядке убывания суммарного
рейтинга.*/
#ifndef LABTHREECPP_PHOTOGRAPHER_H
#define LABTHREECPP_PHOTOGRAPHER_H
#include <iostream>
#include "Employee.h"
#include "IPictureProcessor.h"

class Photographer: public Employee, public IPictureProcessor{
    public:
        Photographer();
        Photographer(std::string firstName, std::string lastName, std::string gender, int yearOfBirth, int yearOfCareerStart, double rating, std::string phoneNumber, int totalPhotos);
        void printInfo() override;
        virtual ~Photographer(){}
        void process(const std::string &photo_path) override;
        int getTotalPhotos();
    private:
        int totalPhotos = 0;
};


#endif //LABTHREECPP_PHOTOGRAPHER_H