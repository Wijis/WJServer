/*
 * =====================================================================================
 *
 *       Filename:  IWJProcessor.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2015 14:58:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Captain (), liwijis@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

struct SWJPackage;
struct IWJProcessorDelegate
{
	virtual void willProcess() = 0;
	virtual void didProcess() = 0;
}

class IWJProcessor 
{
protected:
	virtual void _process(IN SWJPackage* pInPkg, OUT SWJPackage** ppOutPkg) = 0;

public: // Interface Function
	virtual void process(IN SWJPackage* pInPkg, OUT SWJPackage** ppOutPkg)
	{
		if (m_pDelegate)
			m_pDelegate->willProcess();

		_process();

		if (m_pDelegate)
			m_pDelegate->didProcess();
	}

	void setDelegate(IWJProcessorDelegate* delegate)
	{
		m_pDelegate = delegate;
	}

private:
	IWJProcessorDelegate* m_pDelegate;
};