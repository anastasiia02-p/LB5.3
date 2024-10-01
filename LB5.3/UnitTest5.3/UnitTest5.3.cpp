#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(1);
			Assert::AreEqual(t, 1);
		}
	};
}
