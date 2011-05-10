#ifndef SHAREDTEST_H_
#define SHAREDTEST_H_

#include <cppunit/extensions/HelperMacros.h>
#include "shared.h"

class SharedTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( SharedTest );
	CPPUNIT_TEST( test_greeting );
	CPPUNIT_TEST_SUITE_END();

public:
	void test_greeting();
};

#endif /* SHAREDTEST_H_ */
