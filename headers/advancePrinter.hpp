#include "./printer.hpp"
#include<iostream>
#ifndef ADVANCEPRINTER_HPP
#define ADVANCEPRINTER_HPP

namespace advance{
    class Advance : public virtual printer::Printer{
        public: 
            Advance();
            ~Advance() = default;
            void printDetails();
            Advance(double colorInkPercentage, double blackInkPercentage, int capacityToPrintPerMinute,bool scanner, double energyConsumedPerHour , double colorTakePerPage , double blackTakePerPage, bool wirless);

        protected:
            bool wirless = false;

        private:
            Advance(const Advance&);
            Advance & operator=(const Advance&);

    };
}

#endif