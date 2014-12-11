/***************************************************************************************************
 * File name		: misc.h
 * Description		: To handle some miscellaneous classes.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Dec. 11, 2014
 * Copyright(C)		2014	All rights reserved.
 * 
 ***************************************************************************************************/

#ifndef MISC_H
#define	MISC_H

	#include <string>
	
	/*=============================================================================================*/
	
	class NoDefault
	{
	public:
		NoDefault(void);				// 默認構造函數
		NoDefault(std::string Str);		// 顯式地定義構造函數 
	private:
		std::string str;
	};

#endif	/* MISC_H */

