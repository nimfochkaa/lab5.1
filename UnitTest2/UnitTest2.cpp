#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(h(1.0, 1.0), 0.5);
		}

	};
}
