#include "skibidi.hpp"
#include "toes.hpp"
#include "beans.hpp"
#include "astral_divinity.hpp"
#include "deepfried.hpp"

int main() {
    int energy = skibidi_spin() +
                 wiggle_toes() +
                 bean_burst() +
                 astral_glow() +
                 deepfried_crunch();

    announce_energy(energy);
    return 0;
}