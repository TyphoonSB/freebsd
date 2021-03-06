/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_MD5KeyTypeWithoutDigestLength();
extern void test_MD5KeyTypeWithDigestLength();
extern void test_SHA1KeyTypeWithDigestLength();
extern void test_MD5KeyName();
extern void test_SHA1KeyName();


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}

char *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  Unity.TestFile = "ssl_init.c";
  UnityBegin("ssl_init.c");
  RUN_TEST(test_MD5KeyTypeWithoutDigestLength, 19);
  RUN_TEST(test_MD5KeyTypeWithDigestLength, 23);
  RUN_TEST(test_SHA1KeyTypeWithDigestLength, 32);
  RUN_TEST(test_MD5KeyName, 47);
  RUN_TEST(test_SHA1KeyName, 51);

  return (UnityEnd());
}
