/***************************************************************
 * File name		: Date.h
 * Description		: Define a class "Date"
 * Creator			: XU ZAN
 * Creation date	: Sat.	Jan 03, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 ***************************************************************/


#ifndef DATE_H
#define	DATE_H

	#include <ctime>

	class Date;
	
	class Date
	{
	private:
		int mo;
		int da;
		int yr;
	public:
		Date(time_t);	// Conversion constructor function
		~Date(void);
		void display(void);
	};

#endif	/* DATE_H */

