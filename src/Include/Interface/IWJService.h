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

struct SWJErrorInfo
{

};

struct SWJPackage
{

};

struct SWJServiceID
{
	// 可能是一个MD5码 + 描述信息
};

interface IWJService
{
	SWJServiceID getServiceID(); // 服务信息
	SWJErrorInfo excute(IN SWJPackage *inPackage, OUT SWJPackage** outPackage); // 服务执行

};
