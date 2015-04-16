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

struct SWJPackage;

enum EWJServerCoreStatus
{
	CoreReady,
	CoreRunning,
	CorePause,
};

struct SWJServerCoreConfig
{

};

class CWJServerCore
{
public:
	void setConfig(SWJServerCoreConfig* config); // set Config to Core

	EWJServerCoreStatus getCoreStatus();
	void reset(); // Core Reset
	void run(); // Core Run
	void stop(); // Core Stop
	void pause(); // Core Pause
};
