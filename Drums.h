#ifndef DRUMS_H
#define DRUMS_H

#include "Instrument.h"

class Drums : public Instrument {
public:
    Drums(); // constructor
    Drums(const std::string& name, int volume); // overloaded constructor

    // override
    std::string playSound() const override;
};

#endif
