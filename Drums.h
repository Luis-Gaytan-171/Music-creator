#ifndef DRUMS_H
#define DRUMS_H

#include "Instrument.h"

class Drums : public Instrument {
public:
    Drums(); // constructor
    Drums(const std::string& name, int volume, int duration); // overloaded constructor

    // overloading the playSound method
    std::string playSound() const override;
    std::string playSound(int volume) const override; // method overloading
};

#endif
