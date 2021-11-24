#include<iostream>
#include "../headers/printer.hpp"
#include "../headers/advancePrinter.hpp"

int main(){
    printer::Printer printer(70,35,12,false,100.5,0.5,0.4);
    printer::Printer printer2;
    printer::Printer printer3(printer);
    printer.printDetails();
    std::cout << std::endl;
    std::cout << printer.calculateNoPagesToPrintWithColorInk() << " files could be printed using blank ink by Printer 1" << std::endl;
    std::cout << std::endl;
    printer2.printDetails();
    std::cout << std::endl;
    printer3.printDetails();
    std::cout << std::endl;
    advance::Advance advance(110,150,30,true,50.7,0.25,0.15,true);
    advance=advance;//self-assigmnet
    std::cout<<"Self-assigment"<<std::endl;
    advance.printDetails();
    std::cout << std::endl;
    advance::Advance advance2;
    advance2.printDetails();
    std::cout << std::endl;
    advance2=advance;//without self-assigment
    std::cout<<"Construct printer advance2 from printer advance using copy assigment operator."<<std::endl;
    advance2.printDetails();
    std::cout << std::endl;
    printer::Printer printer4;
    printer4=printer;
    printer4.printDetails();
    std::cout << std::endl;



    return 0;
}