/*
 * =====================================================================================
 *
 *       Filename:  IWJService.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/15/2015 15:53:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Captain (), liwijis@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

struct SWJErrorInfo;
struct SWJPackage;
struct SWJServiceID
{
	// Maybe a md5 code and description
};

struct IWJService
{
	virtual SWJServiceID getServiceID() = 0; // 服务信息
	virtual SWJErrorInfo* excute(IN SWJPackage *inPackage, OUT SWJPackage** outPackage) = 0; // 服务执行
};
