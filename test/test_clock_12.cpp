#include <catch2/catch.hpp
#include "clock_12.hpp"

TEST_CASE( "12 hour clock" )
{
    REQUIRE( clocks::clock_12::N == 12 );
}
