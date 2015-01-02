/******************************************************************************
 * File name		: Date.h
 * Description		: 結構體的定義與實現.
 * Creator			: XU ZAN
 * Creation date	: Jan. 01, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 ******************************************************************************/

#ifndef DATE_H
#define	DATE_H

	/* Date structure
	 */
#if !defined (STRUCT_ACCESS_CONTROLLER)
	typedef struct Date
	/* A structure with a member function.
	 */
	{
		int month;
		int day;
		int year;
		void display(void);
	}
	Date;	
	void display(Date& dt);
#else
	typedef struct Date
	{
	private:
		int month;
		int day;
		int year;
	public:
		void display(void);
	}
	Date;
	void display(Date& dt);
#endif	/*  STRUCT_ACCESS_CONTROLLER  */
	class CDate
	{
	private:
		int month;
		int day;
		int year;
	public:
		CDate(void);
		~CDate(void);
		void display(void);
	};

#endif	/* DATE_H */

