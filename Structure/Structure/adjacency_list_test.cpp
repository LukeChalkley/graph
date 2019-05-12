/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

bool suite_adjacency_list_test_init = false;
#include "adjacency_list_test.h"

static adjacency_list_test suite_adjacency_list_test;

static CxxTest::List Tests_adjacency_list_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_adjacency_list_test( "adjacency_list_test.h", 8, "adjacency_list_test", suite_adjacency_list_test, Tests_adjacency_list_test );

static class TestDescription_suite_adjacency_list_test_testInitialisation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_adjacency_list_test_testInitialisation() : CxxTest::RealTestDescription( Tests_adjacency_list_test, suiteDescription_adjacency_list_test, 27, "testInitialisation" ) {}
 void runTest() { suite_adjacency_list_test.testInitialisation(); }
} testDescription_suite_adjacency_list_test_testInitialisation;

static class TestDescription_suite_adjacency_list_test_testAddVertex : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_adjacency_list_test_testAddVertex() : CxxTest::RealTestDescription( Tests_adjacency_list_test, suiteDescription_adjacency_list_test, 34, "testAddVertex" ) {}
 void runTest() { suite_adjacency_list_test.testAddVertex(); }
} testDescription_suite_adjacency_list_test_testAddVertex;

static class TestDescription_suite_adjacency_list_test_testRemoveVertex : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_adjacency_list_test_testRemoveVertex() : CxxTest::RealTestDescription( Tests_adjacency_list_test, suiteDescription_adjacency_list_test, 55, "testRemoveVertex" ) {}
 void runTest() { suite_adjacency_list_test.testRemoveVertex(); }
} testDescription_suite_adjacency_list_test_testRemoveVertex;

static class TestDescription_suite_adjacency_list_test_testAddEdges : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_adjacency_list_test_testAddEdges() : CxxTest::RealTestDescription( Tests_adjacency_list_test, suiteDescription_adjacency_list_test, 71, "testAddEdges" ) {}
 void runTest() { suite_adjacency_list_test.testAddEdges(); }
} testDescription_suite_adjacency_list_test_testAddEdges;

static class TestDescription_suite_adjacency_list_test_testGraphStructure : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_adjacency_list_test_testGraphStructure() : CxxTest::RealTestDescription( Tests_adjacency_list_test, suiteDescription_adjacency_list_test, 89, "testGraphStructure" ) {}
 void runTest() { suite_adjacency_list_test.testGraphStructure(); }
} testDescription_suite_adjacency_list_test_testGraphStructure;

