#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\Desktop\1 курс\Инструментальные средства разработки ПО\Лабораторная 5\labwork5ck\calculator.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calculator_test)
	{
	public:
		
		TEST_METHOD(Addition1)
		{
			int a = 3;
			int b = 7;
			char operation = '+';
			int expected = 10;
			int actual = Addition(a, b);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Subtraction1)
		{
			int a = 3;
			int b = 7;
			char operation = '-';
			int expected = -4;
			int actual = Subtraction(a, b);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Multiplication1)
		{
			int a = 3;
			int b = 7;
			char operation = '*';
			int expected = 20;
			int actual = Multiplication(a, b);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(Division1)
		{
			int a = 7;
			int b = 7;
			char operation = '/';
			int expected = 1;
			int actual = Division(a, b);
			Assert::AreEqual(expected, actual);
		}
	};
}
