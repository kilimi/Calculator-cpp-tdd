
#include <cppunit/extensions/HelperMacros.h>
#include "../../src/Calculator/Calculator.h"

class CalculatorTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( CalculatorTest );
    CPPUNIT_TEST( Add );
    CPPUNIT_TEST( Subtract );
    CPPUNIT_TEST_SUITE_END();
protected:
    void Add();
    void Subtract();
};

CPPUNIT_TEST_SUITE_REGISTRATION( CalculatorTest );

void CalculatorTest::Add() {

    Acme::Calculator::Calculator c;

    CPPUNIT_ASSERT_EQUAL(4, c.Add(2, 2));

}

void CalculatorTest::Subtract() {

    Acme::Calculator::Calculator c;

    CPPUNIT_ASSERT_EQUAL(0, c.Subtract(2, 2));

}
