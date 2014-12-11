/***************************************************************************************************
 * File name		: Static_Class_Member.h
 * Description		: 研究static類成員
 * Creator			: XU ZAN
 * Creation date	: Thur.	Dec. 11, 2014
 * Copyright(C)		2014	All rights reserved.
 * *
 ***************************************************************************************************/


#ifndef STATIC_CLASS_MEMBER_H
#define	STATIC_CLASS_MEMBER_H

	#include <string>

	class Account
	{
	public:
	#if 0
		Account(void)
		{
			owner = "Nobody";
			amount = 0.0;
			interestRate = 0.0;
		}
		Account(std::string sName, double dAmount, double dInitInterestRate)
		{
			owner = sName;
			amount = dAmount;
			interestRate = dInitInterestRate;
		}
		virtual ~Account(void)
		{
			owner = "";
			amount = 0.0;
			interestRate = 0.0;
		}
	#endif
		
		void applyint(void)
		{
			amount += amount*interestRate;
		}		
		
		static double rate(void)
		{
			return interestRate;
		}
		
		static void rate(double newRate)
		{
			interestRate = newRate;
		}
	private:
		std::string owner;
		double amount;
		static double interestRate;
		static double initRate();
	};
	
	class Bar
	{
	public:
		Bar(void);
		~Bar(void);
	private:
		static Bar mem1;
		Bar *mem2;
		// Bar mem3;
	};
	
	

#endif	/* STATIC_CLASS_MEMBER_H */

