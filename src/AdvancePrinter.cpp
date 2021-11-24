#include "../headers/advancePrinter.hpp"
#include "../headers/printer.hpp"
#include<iostream>

namespace advance{

    Advance::Advance () : Printer(){ }

    Advance::Advance(double colorInkPercentage = 100, double blackInkPercentage = 100, int capacityToPrintPerMinute = 25,bool scanner = true, double energyConsumedPerHour = 65.5, double colorTakePerPage = 0.3, double blackTakePerPage = 0.2, bool wirless = false) :
            Printer(colorInkPercentage,blackInkPercentage,capacityToPrintPerMinute,scanner,energyConsumedPerHour,colorTakePerPage,blackTakePerPage),
            wirless(wirless)
            {}

    Advance &Advance::operator = (const Advance &adv){
            if(this == &adv) return *this;
            Printer::operator=(adv);
            this->wirless = adv.wirless;
            return *this;
    }

    void Advance::printDetails(){
        Printer::printDetails();
        std::cout << "Wirless: ";
            if(wirless == true) std::cout<< "true" << std::endl << std::endl;
            else std::cout<< "false" << std::endl << std::endl;
    }

}

