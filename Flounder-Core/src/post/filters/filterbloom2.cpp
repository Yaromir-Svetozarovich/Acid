#include "filterbloom2.h"

namespace flounder
{
	filterbloom2::filterbloom2() :
		ipostfilter("filterBloom2", "res/shaders/filters/bloom2.frag.spv")
	{
	}

	filterbloom2::~filterbloom2()
	{
	}

	void filterbloom2::storeValues()
	{
	}
}