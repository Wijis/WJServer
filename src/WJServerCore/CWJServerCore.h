/*
 * =====================================================================================
 *
 *       Filename:  CWJServerCore.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2015 10:21:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Captain (), liwijis@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

class CWJServerCore : public IWJServerCore // Main Thread
{
public:
	// Interface WJServerCore
	EWJThreadStatus getCoreStatus();
	void run(); // Core Run
	void stop(); // Core Stop
	void pause(); // Core Pause

	// Interface WJProcessor
	// void process(IN SWJPackage* pInPkg, OUT SWJPackage** ppOutPkg);
};
