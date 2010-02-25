/*  
  zlib-like interface to FastLZ, the lightning-fast lossless compression library
  Copyright (C) 2010 Exalead SA. (http://www.exalead.com/)
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.

  Remarks/Bugs:
  FastLZ compression library by Ariya Hidayat (ariya@kde.org)
  Library encapsulation by Xavier Roche (fastlz@exalead.com)
*/

/* zlib compatibility header file - wrap main zlib functions by fastlz ones */

#ifndef FASTLZ_FASTLZLIB_ZLIB_H
#define FASTLZ_FASTLZLIB_ZLIB_H

#include "fastlzlib.h"

#define zlibVersion  fastlzlibVersion
#define deflateInit  fastlzlibCompressInit
#define deflate      fastlzlibCompress
#define deflateEnd   fastlzlibCompressEnd
#define inflateInit  fastlzlibDecompressInit
#define inflate      fastlzlibDecompress
#define inflateEnd   fastlzlibDecompressEnd
#define deflateReset fastlzlibCompressReset
#define inflateSync  fastlzlibDecompressSync
#define inflateReset fastlzlibDecompressReset

/*
  Undefined symbols:
  
  deflateInit2
  deflateSetDictionary
  deflateCopy
  deflateParams
  deflateTune
  deflateBound
  deflatePrime
  deflateSetHeader
  inflateInit2
  inflateSetDictionary
  inflateCopy
  inflatePrime
  inflateGetHeader
  inflateBackInit
  inflateBack
  inflateBackEnd
  zlibCompileFlags
  compress*
  uncompress
  gz*
  adler32*
  crc32*
*/

#endif
