#include "StripDigital.hpp"


StripDigital::StripDigital(size_t ledCount)
	:	LightStrip(ledCount) {
}

void StripDigital::update() {
	strip.display(leds);
}
