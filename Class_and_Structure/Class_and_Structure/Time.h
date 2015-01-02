/************************************************************************
 * File name		: Time.h
 * Description		: Define the structure "Time".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Jan. 01, 2015
 * Copyright(C)		2015	All rights reserved.
 ************************************************************************/

#ifndef TIME_H
#define	TIME_H

	typedef struct Time
	/* Time structure with a member function
	 */
	{
		int hour;
		int minute;
		int second;
		void display();
	}
	Time;


#endif	/* TIME_H */

