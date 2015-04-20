/*
 * =====================================================================================
 *
 *       Filename:  IWJServerCore.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2015 14:57:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Captain (), liwijis@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "IWJThread.h"

typedef void (ProcessBlock)(void);

enum EWJServerCoreStatus
{
	CoreReady,
	CoreBusy,
	CoreFree,
};

struct IWJServerCore : public IWJThread
{
	virtual void pushCommand(std::string cmd) = 0;
	// virtual void pushProcessBlock(ProcessBlock block) = 0;
	// virtual void pushProcessor(IWJProcessor* pProcessor) = 0;

	virtual int countProcessors() = 0;
	virtual EWJServerCoreStatus getCoreStatus() = 0;
	virtual void clearAllProcessor() = 0;
};