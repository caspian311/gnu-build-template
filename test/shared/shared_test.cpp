#include "shared_test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( SharedTest );

void SharedTest::test_greeting() {
	CPPUNIT_ASSERT_EQUAL("Hello, Matt", greeting("Matt"));
}
