AM_LDFLAGS=-Lcppunit -lcppunit -ldl
INCLUDES=-I${top_srcdir}/src/shared /usr/local/include
bin_PROGRAMS=test
test_SOURCES=test_suite.cpp shared_test.cpp
test_LDADD=${top_builddir}/src/shared/libshared.a
