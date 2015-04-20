/*
 * =====================================================================================
 *
 *       Filename:  IWJThread.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2015 14:57:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Captain (), liwijis@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

enum EWJThreadStatus
{
	ThreadReady,
	ThreadRunning,
	ThreadPause,
};

struct IWJThreadDelegate
{
	virtual void willRun() = 0;
	virtual void didRunning() = 0;

	virtual void willStop() = 0;
	virtual void didStop() = 0;

	virtual void willPause() = 0;
	virtual void didPause() = 0;
};

struct IWJThread
{
	virtual EWJThreadStatus getThreadStatus() = 0;
	virtual void run() = 0;
	virtual void stop() = 0;
	virtual void pause() = 0;
};

class CWJThread : public IWJThread
{
public:
	virtual void setDelegate(IWJThreadDelegate* delegate)
	{
		m_pDelegate = delegate;
	}

	virtual EWJThreadStatus getThreadStatus()
	{

	}

	virtual void run()
	{
		if (m_pDelegate)
			m_pDelegate->willRun();

		if (m_pDelegate)
			m_pDelegate->didRunning();
	}

	virtual void stop()
	{
		if (m_pDelegate)
			m_pDelegate->willStop();

		if (m_pDelegate)
			m_pDelegate->didStop();
	}

	virtual void pause()
	{
		if (m_pDelegate)
			m_pDelegate->willPause();

		if (m_pDelegate)
			m_pDelegate->didPause();
	}

private:
	IWJThreadDelegate* m_pDelegate;
};