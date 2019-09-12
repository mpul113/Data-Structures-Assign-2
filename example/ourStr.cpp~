// FILE: ourStr.cpp
// CLASS IMPLEMENTED: ourStr (see ourStr.h for documentation)
// INVARIANT for the ourStr class:
//   1. Characters of the ourStr are stored in a one-dimensional,
//      run-time (dynamic) array referenced by the member variable data
//      (i.e., the starting address of the array is stored in data); the
//      capacity of the array is stored in the member variable capacity.
//   2. Number of characters of the string represented by ourStr is in
//      member variable len.
//   3. For an empty string, we don't care what is stored in any of data;
//      for a non-empty string, the characters of the string (len of them,
//      from left to right) are stored in data[0] through data[len - 1]
//      and we don't care what's in the rest of data.
//
// DOCUMENTATION for private member (helper) function:
//   void resize(int newSize)
//     Pre:  (none)
//     Post: The capacity (size of the dynamic array) of the invoking
//           ourStr is changed to newSize, with the provision that the
//           new capacity should never be less than len (so that the
//           existing string can still be represented) AND should be at
//           least 1 (len may be 0 and we don't want to request a dynamic
//           array of size 0). The string represented by the invoking
//           ourStr remains unchanged.

#include "ourStr.h"
#include <cassert>
#include <cstring>
using namespace std;


void ourStr::resize(int newSize)
{
   if (newSize < len)
      newSize = len;
   if (newSize < 1)
      newSize = 1;
   capacity = newSize;
   char * newData = new char[capacity];
   for (int i = 0; i < len; ++i)
      newData[i] = data[i];
   delete [] data;
   data = newData;
}

ourStr::ourStr(int init_cap) : capacity(init_cap), len(0)
{
   if (capacity < 1)
      capacity = DEF_CAP;
   data = new char[capacity];
}

ourStr::ourStr(const ourStr& src)
   : capacity(src.capacity), len(src.len)
{
   data = new char[capacity];
   for (int i = 0; i < len; ++i)
      data[i] = src.data[i];
}


ourStr& ourStr::operator=(const ourStr& rhs)
{
   if (this != &rhs)
   {
      char* newData = new char[rhs.capacity];
      for (int i = 0; i < rhs.len; ++i)
         newData[i] = rhs.data[i];
      delete [] data;
      data = newData;
      capacity = rhs.capacity;
      len = rhs.len;
   }
   return *this;
}

ourStr::~ourStr()
{
   delete [] data;
}

void ourStr::showStr(ostream& out) const
{
   for (int i = 0; i < len; ++i)
      out << data[i];
}

int ourStr::getLen() const { return len; }

char ourStr::charAt(int pos) const
{
   assert(pos >= 1);
   assert( pos <= getLen() );
   return data[pos - 1];
}

void ourStr::setChar(int pos, char newChar)
{
   assert(pos >= 1);
   assert(pos <= getLen() + 1);
   if (pos > capacity)
      resize( int(1.5*capacity) + 1 );
   data[pos - 1] = newChar;
   if (pos > len) ++len;
}

void ourStr::setStr(const char cStr[])
{
   int cStrLen = strlen(cStr);
   if (cStrLen > capacity)
      resize(cStrLen);
   // should not use strcpy (why?)
   for (int i = 0; i < cStrLen; ++i)
      data[i] = cStr[i];
   len = cStrLen;
}

bool ourStr::equal_m(const ourStr& rhs) const
{
   if (len != rhs.len) return false;
   for (int i = 0; i < len; ++i)
      if (data[i] != rhs.data[i]) return false;
   return true;
}

/*
bool ourStr::operator==(const ourStr& rhs) const
{
   if (len != rhs.len) return false;
   for (int i = 0; i < len; ++i)
      if (data[i] != rhs.data[i]) return false;
   return true;
}
*/

bool equal_nmnf(const ourStr& lhs, const ourStr& rhs)
{
   int lhsLen = lhs.getLen();
   if ( lhsLen != rhs.getLen() ) return false;
   for (int p = 1; p <=  lhsLen; ++p)
      if ( lhs.charAt(p) != rhs.charAt(p) ) return false;
   return true;
}

/*
bool operator==(const ourStr& lhs, const ourStr& rhs)
{
   int lhsLen = lhs.getLen();
   if ( lhsLen != rhs.getLen() ) return false;
   for (int p = 1; p <=  lhsLen; ++p)
      if ( lhs.charAt(p) != rhs.charAt(p) ) return false;
   return true;
}
*/

bool equal_nmf(const ourStr& lhs, const ourStr& rhs)
{
   if (lhs.len != rhs.len) return false;
   for (int i = 0; i < lhs.len; ++i)
      if (lhs.data[i] != rhs.data[i]) return false;
   return true;
}

bool operator==(const ourStr& lhs, const ourStr& rhs)
{
   if (lhs.len != rhs.len) return false;
   for (int i = 0; i < lhs.len; ++i)
      if (lhs.data[i] != rhs.data[i]) return false;
   return true;
}
