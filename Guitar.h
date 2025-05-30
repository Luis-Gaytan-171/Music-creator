#ifndef GUITAR_H
#define GUITAR_H

#include "Instrument.h"

class Guitar : public Instrument {
public:
    Guitar(); // constructor
    Guitar(const std::string& name, int volume); // overloaded constructor

    // override
    std::string playSound() const override;
};

#endif
