#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <boost/test/unit_test.hpp>
#include "lib1/lib1.h"

BOOST_AUTO_TEST_CASE(lib1_test)
{
    BOOST_REQUIRE_EQUAL(lib1(), "lib1");
}
