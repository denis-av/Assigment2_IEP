#include "../headers/printer.hpp"
#include<iostream>

namespace printer{

    Printer::Printer() {}

    Printer::Printer(double colorInkPercentage = 50, double blackInkPercentage = 50, int capacityToPrintPerMinute = 12,bool scanner = false, double energyConsumedPerHour = 90.5, double colorTakePerPage = 0.5, double blackTakePerPage = 0.4) :
            colorInkPercentage(colorInkPercentage),
            blackInkPercentage(blackInkPercentage),
            capacityToPrintPerMinute(capacityToPrintPerMinute),
            scanner(scanner),
            energyConsumedPerHour(energyConsumedPerHour),
            colorTakePerPage(colorTakePerPage),
            blackTakePerPage(blackTakePerPage)
            {}

    Printer::Printer(const Printer& printerOne) :
            colorInkPercentage(printerOne.colorInkPercentage),
            blackInkPercentage(printerOne.blackInkPercentage),
            capacityToPrintPerMinute(printerOne.capacityToPrintPerMinute),
            scanner(printerOne.scanner),
            energyConsumedPerHour(printerOne.energyConsumedPerHour),
            colorTakePerPage(printerOne.colorTakePerPage),
            blackTakePerPage(printerOne.blackTakePerPage)
            {}

    Printer &Printer::operator = (const Printer &simpl){
            this->colorInkPercentage = simpl.colorInkPercentage;
            this->blackInkPercentage = simpl.blackInkPercentage;
            this->capacityToPrintPerMinute = simpl.capacityToPrintPerMinute;
            this->scanner = simpl.scanner;
            this->energyConsumedPerHour = simpl.energyConsumedPerHour;
            return *this;
    }

    void Printer::printDetails(){
            std::cout << "Color ink percentage: "<< this->colorInkPercentage << "%" << std::endl;
            std::cout << "Black ink percentage: "<< this->blackInkPercentage << "%" << std::endl;
            std::cout << "Maximum number of pages printed per minute: "<< this->capacityToPrintPerMinute << std::endl;
            std::cout << "Scanner supported: ";
            if(this->scanner == true) std::cout<< "true" << std::endl;
            else std::cout<< "false" << std::endl;
            std::cout << "Energy consumed per hour: "<< this->energyConsumedPerHour <<std::endl;
            std::cout << "Color ink take per page: "<< this->colorTakePerPage << "%" << std::endl;
            std::cout << "Energy consumed per hour: "<< this->blackTakePerPage << "%" << std::endl;
    }

    void Printer::rechargeInk(){
            if(this->colorInkPercentage == 100) {
                std::cout << std::endl << "Color ink is already full.";
            }else {
                this->colorInkPercentage = 100;
                std::cout << std::endl << "Color ink successfully recharged.";
            }

            if(this->blackInkPercentage == 100) {
                std::cout << std::endl << "Black ink is already full.";
            }else {
                this->blackInkPercentage = 100;
                std::cout << std::endl << "Black ink successfully recharged.";
            }
            std::cout << std::endl;
        }

    int Printer::calculateNoPagesToPrintWithColorInk(){
        return this->colorInkPercentage/this->colorTakePerPage;
    }

    int Printer::calculateNoPagesToPrintWithBlackInk(){
        return this->blackInkPercentage/this->blackTakePerPage;
    }

}