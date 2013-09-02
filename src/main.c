
/*******************************************************************************
** @file
** @authors 	Neil Wang 
** @email   	neil.one@outlook.com
** @date    	2013-09-02 22:04:24
** @version 	$Id$
*******************************************************************************/

/**********		Includes 		***********************************************/
#include "includes.h"
/**********		Definition 		***********************************************/

/**********		Variables 		***********************************************/

/**********		Functions 		***********************************************/


//	Function Name:  void system_init(void)
//	Input:			None;
//	Output:			None;
//	Des:			Init the system.
//	Where Called:	main.c/main()
void system_init(void)
{
	bsp_init();
}


//	Function Name:  void main(void)
//	Input:			None;
//	Output:			None;
//	Des:			entry of the firmeare
//	Where Called:	
int main(void)
{
	system_init();

	while(1)
	{
		
	}
	return 0;
}