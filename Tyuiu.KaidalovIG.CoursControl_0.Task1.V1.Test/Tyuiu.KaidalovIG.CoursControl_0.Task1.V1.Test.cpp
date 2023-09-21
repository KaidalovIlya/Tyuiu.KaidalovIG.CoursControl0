#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KaidalovIG.CoursControl_0.Task1.V1.Lib/Tyuiu.KaidalovIG.CoursControl_0.Task1.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKaidalovIGCoursControl0Task1V1Test
{
	TEST_CLASS(TyuiuKaidalovIGCoursControl0Task1V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* rezult = new Service();
			int a = 123;
			int b = rezult->Control(a);
			Assert::AreEqual(6, b);
		}
	};
}
