#include "resistor_color.h"
#include <stdlib.h>
#include <stdbool.h>

int color_code(resistor_band_t band) {
    return band;
}

// originally i was just going to set up an array here, but then we would have to change the
// contents of it each time resistor_band_t changes, which isn't ideal, so lets dynamically
// populate an array instead
const resistor_band_t* colors() {
    static resistor_band_t bands[BAND_COUNT];
    static bool initialized = false;

    if(!initialized) {
        for(int i = 0; i < BAND_COUNT; i++) {
            bands[i] = (resistor_band_t)i;
        }
        initialized = true;
    }
    return bands;
}