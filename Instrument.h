#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <string>
#include <vector>
#include "Effect.h"

class Instrument {
protected:
    std::string name;
    int volume;
    std::vector<Effect*> effects; // effects list

public:
    Instrument(); // default constructor
    Instrument(const std::string& name, int volume); // overloaded constructor

    // get n set
    std::string getName() const;
    void setName(const std::string& name);

    int getVolume() const;
    void setVolume(int volume);

    // virtual methods
    virtual std::string playSound() const = 0; // abstract
    void addEffect(Effect* effect);
    void removeEffect(Effect* effect);
    void clearEffects();
};

#endif
