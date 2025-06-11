Creating music isn’t always as easy as we might wish. Instruments can be incredibly expensive, and mastering them is an adventure in itself that requires time, dedication, and practice. But what if there were a digital solution? We live in an era where technology allows us to simulate sounds at will—so why not use it to unleash our creativity?

This project is heavily inspired by Avicii, a legendary DJ and producer who composed some of the most iconic and widely listened-to songs in history—all by himself, using digital tools. Following that inspiration, the goal of this project is to develop a music creation tool that empowers anyone, regardless of musical expertise or access to real instruments, to compose and experiment with music.

By simulating instruments such as guitars, drums, and bass, and applying sound effects through a digital pedalboard system, users can mix and create unique sounds. Whether you’re an aspiring musician or simply looking for a fun way to explore music creation, this project aims to provide an engaging and interactive experience that brings music production closer to everyone.
![image](https://github.com/user-attachments/assets/896ad5c1-dd72-4edb-b233-62ffcc066360)

Class Descriptions

Instrument (Abstract Class)
Purpose: Represents a general musical instrument.

  Attributes:

    name: The name of the instrument (e.g., Guitar, Drums, Bass).

    volume: The volume of the instrument.

    duration: The duration for which the instrument plays in the song.

    effects: A list of effects (of type Effect*) applied to the instrument.

  Methods:

    playSound(): An abstract method that is overridden in each derived instrument class (e.g., Guitar, Drums).

    playSound(int volume): A method to play sound with the given volume (overloaded).

    addEffect(Effect* effect): Adds an effect to the instrument.

    removeEffect(Effect* effect): Removes a specific effect.

    clearEffects(): Clears all effects applied to the instrument.

