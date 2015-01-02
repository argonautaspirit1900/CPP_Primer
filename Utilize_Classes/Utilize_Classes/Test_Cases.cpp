/***************************************************************************************************
 * File name		: Test_Cases.cpp
 * Description		: 設計並執行當前項目的測試用例。
 * Creator			: XU ZAN
 * Creation date	: Fri.	Jan. 02, 2015
 * Copyright(C)		2015	All right reserved.
 * 
 ***************************************************************************************************/

#include "Test_Cases.h"
#include "classes/Test_Box.h"
#include "classes/Test_Date.h"

void Execute_General_Test_Cases(void)
{
    TestCase_Box_Class();
    TestCase_Date_Class();
}

void TestCase_Box_Class(void)
{
    Test_Box_Class();
}

void TestCase_Date_Class(void)
{
    Test_ConversionConstructorFunc();
}