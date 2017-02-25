#pragma once

#include "LightNode/LightStrip.hpp"
#include "APA102.hpp"


class StripDigital : public LightStrip
{
public:
	StripDigital(size_t ledCount);

	virtual void update() override;

private:
	APA102 strip;
};
