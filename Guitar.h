#ifndef GUITAR_H
#define GUITAR_H

#include "Instrument.h"

class Guitar : public Instrument {
public:
    Guitar(); // constructor
    Guitar(const std::string& name, int volume, int duration); // overloaded constructor

    // overloading the playSound method
    std::string playSound() const override;
    std::string playSound(int volume) const override; // method overloading
};

#endif
