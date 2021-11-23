#include<iostream>
#ifndef PRINTER_HPP
#define PRINTER_HPP

namespace printer{
    class Printer{
        public: 
            Printer();
            ~Printer() = default;
            void printDetails();
            void addScanner();
            void rechargeInk();
            int calculateNoPagesToPrintWithColorInk();
            int calculateNoPagesToPrintWithBlackInk();
            Printer(double colorInkPercentage, double blackInkPercentage, int capacityToPrintPerMinute,bool scanner, double energyConsumedPerHour , double colorTakePerPage , double blackTakePerPage);
            Printer(const Printer&);
            Printer & operator=(const Printer&);
            

        protected:
            bool scanner = false;
            double colorInkPercentage = 50;
            double blackInkPercentage = 50;
            double energyConsumedPerHour = 90.5;
            double colorTakePerPage = 0.5;
            double blackTakePerPage = 0.4;
            double capacityToPrintPerMinute = 12;

    };
}

#endif