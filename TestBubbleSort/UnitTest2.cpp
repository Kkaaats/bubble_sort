#include "pch.h"
#include "CppUnitTest.h"
#include "..\Bubbles\Bubbles\Bubbles.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		TEST_METHOD(test1)
		{
			BubbleSort Arr;
			int n = 0;
			int expected[] = { 1, 3, 5, 7, 9 };
			int t[] = { 3, 9, 5, 1,7 };
			Arr.SortArr();
			for (int i = 0; i < 5; i++)
			{
				if (expected[i] == t[i])
				{
					n += 1;
				}
			}
			if (n == 5)
			{
				Logger::WriteMessage("Successful sorting");
			}
		}
		TEST_METHOD(test2)
		{
			BubbleSort Arr;
			int n = 0;
			int expected[] = { -3, -1, 5, 7, 9 };
			int t[] = { -3, 9, 5, -1,7 };
			Arr.SortArr();
			for (int i = 0; i < 5; i++)
			{
				if (expected[i] == t[i])
				{
					n += 1;
				}
			}
			if (n == 5)
			{
				Logger::WriteMessage("Successful sorting");
			}
		}
		TEST_METHOD(test3)
		{
			BubbleSort Arr;
			int n = 0;
			int expected[] = { 0 };
			int t[] = { 0 };
			Arr.SortArr();
			for (int i = 0; i < 5; i++)
			{
				if (expected[i] == t[i])
				{
					n += 1;
				}
			}
			if (n == 5)
			{
				Logger::WriteMessage("Successful sorting");
			}
		}
		TEST_METHOD(test4)
		{
			BubbleSort Arr;
			int n = 0;
			int expected[] = {  1, 1, 1 };
			int t[] = { 1, 1, 1 };
			Arr.SortArr();
			for (int i = 0; i < 5; i++)
			{
				if (expected[i] == t[i])
				{
					n += 1;
				}
			}
			if (n == 5)
			{
				Logger::WriteMessage("Successful sorting");
			}
		}
	};
}
