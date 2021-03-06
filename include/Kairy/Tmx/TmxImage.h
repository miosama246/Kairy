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

#ifndef KAIRY_TMX_TMX_IMAGE_H_INCLUDED
#define KAIRY_TMX_TMX_IMAGE_H_INCLUDED

#include <Kairy/Graphics/Color.h>

NS_KAIRY_BEGIN

class TmxImage
{
public:

    TmxImage()
        :_width(0)
        ,_height(0)
        ,_transColor(Color::Transparent)
    {
    }

    inline std::string getFilename() const { return _filename; }

    inline std::string getFormat() const { return _format; }

    inline int getWidth() const { return _width; }

    inline int getHeight() const { return _height; }

    inline Color getTransparentColor() const { return _transColor; }

private:
    friend class TmxImageLayer;
    friend class TmxObject;
    friend class TmxTilesetTile;
    friend class TmxTileset;

    bool parseElement(void*);

    std::string _filename;
    std::string _format;
    int _width;
    int _height;
    Color _transColor;
};

NS_KAIRY_END

#endif // KAIRY_TMX_TMX_IMAGE_H_INCLUDED
