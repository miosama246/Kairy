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

#ifndef KAIRY_UI_CONTROL_H_INCLUDED
#define KAIRY_UI_CONTROL_H_INCLUDED

#include <Kairy/Graphics/Node.h>

NS_KAIRY_BEGIN

class Control : public Node
{
public:
	using ClickCallback = std::function<void(float)>;

	Control(void);

	void setClickCallback(const ClickCallback& callback);

	virtual void setEnabled(bool enabled);
	
	virtual bool isEnabled() const;

	virtual bool onTouchDown(const Vec2& position, float dt) override;

	virtual void onTouchUp(const Vec2& position, float dt) override;

	virtual void onTouchMoved(const Vec2& position, float dt) override;

protected:
	bool _enabled;
	bool _touched;

	ClickCallback _clickCallback;
};

NS_KAIRY_END

#endif // KAIRY_UI_CONTROL_H_INCLUDED
