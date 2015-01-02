/***************************************************************************************************
 * File name		: Window_Mgr.h
 * Description		: Define the class Window_Mgr
 * Creator			: XU ZAN
 * Creation date	: Thur.	Dec. 11, 2014
 * Copyright(C)		2014	All rights reserved.
 * 
 ***************************************************************************************************/

#ifndef WINDOW_MGR_H
#define	WINDOW_MGR_H

	#include <string>
	#include "Screen.h"
	/*=============================================================================================*/

	class Window_Mgr 
	{
	public:
		typedef std::string::size_type	index;
		
		Window_Mgr(void);
		Window_Mgr(const Window_Mgr& orig);
		virtual ~Window_Mgr(void);
		
		/* 友元函數的定義
		 * 目前尚未搞懂， 待到後面來研究
		 * 
		Window_Mgr& relocate(Window_Mgr::index r, Window_Mgr::index c, Screen& s);
		 * 
		 * <<<<<<<<<<<<<<<<<<<<< 待續
		 */
	private:
	};

#endif	/* WINDOW_MGR_H */

