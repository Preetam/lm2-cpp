#include <catch.hpp>
#include "lm2.h"

TEST_CASE( "Placeholder", "[placeholder]" ) {
	REQUIRE(lm2_collection_create("", 0) == nullptr);
}
