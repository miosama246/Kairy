/******************************************************************************
*
* Copyright (C) 2015 Nanni
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*****************************************************************************/

#ifndef KAIRY_ACTIONS_CALL_FUNCTION_H_INCLUDED
#define KAIRY_ACTIONS_CALL_FUNCTION_H_INCLUDED

#include "Action.h"

NS_KAIRY_BEGIN

class CallFunction : public Action
{
public:
	using Function = std::function<void(float)>;

	static std::shared_ptr<CallFunction>
		create(const Function& function);

	CallFunction(const Function& function);

	virtual void update(float dt) override;

private:
	Function _function;
};

NS_KAIRY_END

#endif // KAIRY_ACTIONS_CALL_FUNCTION_H_INCLUDED
