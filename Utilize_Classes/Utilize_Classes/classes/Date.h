/***************************************************************
 * File name		: Date.h
 * Description	: Define a class "Date"
 * Creator			: XU ZAN
 * Creation date	: Sat.	Jan 03, 2015
 * Copyright(C)	2015	All rights reserved.
 * 
 ***************************************************************/


#ifndef DATE_H
#define DATE_H

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
		Date(int m, int d, int y);
		~Date(void);
		operator long(void);	// Member conversion function
		void display(void);
		void DisplayCalender(char *sCalender);
	};

#endif	/* DATE_H */

