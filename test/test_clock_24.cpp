#include <catch2/catch.hpp>
#include "clock_24.hpp"

TEST_CASE( "24 hour clock" )
{
    REQUIRE( clocks::clock_24::N == 24 );
}
