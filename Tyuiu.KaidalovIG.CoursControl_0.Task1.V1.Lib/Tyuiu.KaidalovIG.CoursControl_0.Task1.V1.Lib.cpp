// Tyuiu.KaidalovIG.CoursControl_0.Task1.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"


class Service : public ISprint0Task8V0
{
	virtual int Control(int a) override
	{
		int num1 = a / 100;
		int num2 = a / 10 % 10;
		int num3 = a % 10;
		return num1 * num2 * num3;
	}

};