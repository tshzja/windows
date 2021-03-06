/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IRPCPROXYBUFFER_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IRPCPROXYBUFFER_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "ObjIdl.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IRpcProxyBufferNotImpl :
	public IRpcProxyBuffer
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IRpcProxyBufferNotImpl)

public:

	typedef IRpcProxyBuffer Interface;

	STDMETHOD(Connect)(
		/*[in,unique]*/ IRpcChannelBuffer* /*pRpcChannelBuffer*/)VSL_STDMETHOD_NOTIMPL

	virtual void STDMETHODCALLTYPE Disconnect(){ return ; }
};

class IRpcProxyBufferMockImpl :
	public IRpcProxyBuffer,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IRpcProxyBufferMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IRpcProxyBufferMockImpl)

	typedef IRpcProxyBuffer Interface;
	struct ConnectValidValues
	{
		/*[in,unique]*/ IRpcChannelBuffer* pRpcChannelBuffer;
		HRESULT retValue;
	};

	STDMETHOD(Connect)(
		/*[in,unique]*/ IRpcChannelBuffer* pRpcChannelBuffer)
	{
		VSL_DEFINE_MOCK_METHOD(Connect)

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pRpcChannelBuffer);

		VSL_RETURN_VALIDVALUES();
	}

	virtual void _stdcall Disconnect()
	{
		VSL_DEFINE_MOCK_METHOD_NOARGS_NORETURN(Disconnect)

	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IRPCPROXYBUFFER_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
