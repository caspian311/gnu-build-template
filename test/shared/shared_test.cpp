#include "shared_test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( SharedTest );

void SharedTest::test_greeting() {
	CPPUNIT_ASSERT("Hello, Matt!" == greeting("Matt"));
}
