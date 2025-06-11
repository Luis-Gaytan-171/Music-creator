#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <string>
#include <vector>
#include "Effect.h"

class Instrument {
protected:
    std::string name;
    int volume;
    int duration;  // duration of the instrument in the song
    std::vector<Effect*> effects; // effects applied to the instrument

public:
    Instrument(); // default constructor
    Instrument(const std::string& name, int volume, int duration); // overloaded constructor

    // get n set
    std::string getName() const;
    void setName(const std::string& name);

    int getVolume() const;
    void setVolume(int volume);

    int getDuration() const;
    void setDuration(int duration);

    // abstract methods
    virtual std::string playSound() const = 0;   // abstract method
    virtual std::string playSound(int volume) const; // method overloading
    void addEffect(Effect* effect);
    void removeEffect(Effect* effect);
    void clearEffects();

    // operator overloading
    Instrument* operator+(const Instrument& other); // combine two instruments
    Effect* operator[](int index); // access effects by index
    friend std::ostream& operator<<(std::ostream& os, const Instrument& instrument);  // print instrument
};

#endif
