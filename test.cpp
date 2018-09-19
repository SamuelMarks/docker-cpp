#define CATCH_CONFIG_MAIN

#include "catch2/catch.hpp"
#include "library.h"

TEST_CASE("Factorials are computed0", "[factorial]") {
    REQUIRE(v() == 2);
}
