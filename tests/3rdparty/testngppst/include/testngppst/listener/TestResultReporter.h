
#ifndef __TESTNGPPST_TEST_RESULT_REPORTER_H
#define __TESTNGPPST_TEST_RESULT_REPORTER_H

#include <testngppst/testngppst.h>

TESTNGPPST_NS_START

struct TestResultReporter
{
    virtual unsigned int getNumberOfTestCases() const = 0;
    virtual unsigned int getNumberOfSuccessfulTestCases() const = 0;
    virtual unsigned int getNumberOfUnsuccessfulTestCases() const = 0;
    virtual unsigned int getNumberOfFailedTestCases() const = 0;
    virtual unsigned int getNumberOfErrorTestCases() const = 0;
    virtual unsigned int getNumberOfCrashedTestCases() const = 0;
    virtual unsigned int getNumberOfSkippedTestCases() const = 0;
    virtual unsigned int getNumberOfLoadedSuites() const = 0;
    virtual unsigned int getNumberOfUnloadableSuites() const = 0;
    virtual unsigned int getNumberOfErrorFixtures() const = 0;    

    virtual ~TestResultReporter() {}
};

TESTNGPPST_NS_END

#endif

