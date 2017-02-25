#include "LightNode/LightNode.hpp"
#include "StripDigital.hpp"

#include <thread>
#include <chrono>


int main() {
	const size_t ledCount = 2*66 + 2*37;

	std::shared_ptr<LightStrip> strip(std::make_shared<StripDigital>(ledCount));

	LightNode node(Communicator::NodeType::DIGITAL, strip);

	for(;;) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	return 0;
}
