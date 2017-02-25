#pragma once

#include <vector>
#include <cstdint>

#include "LightNode/Color.hpp"

class APA102
{
public:
	APA102();
	~APA102();

	void display(const std::vector<Color>& colors);

private:
	static constexpr double GAMMA = 2.3;

	std::vector<char> colorToFrame(const Color& c) const;
	std::vector<double> gammaTable;
};
