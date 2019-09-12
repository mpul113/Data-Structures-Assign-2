// FILE: ourStr.h
// CLASS PROVIDED: ourStr
//
// MEMBER CONSTANT for the ourStr class:
//   static const int DEF_CAP = ___
//     ourStr::DEF_CAP is the default highest # of characters that an ourStr
//     initially can hold; at any later time during use, an ourStr will adapt
//     as neecessary to hold more characters.
//
// CONSTRUCTOR for the ourStr class:
//   ourStr(int init_cap = DEF_CAP);
//     pre:  (none)
//     post: The invoking ourStr is initialized to a null string (i.e., one
//           that contains no characters. The highest # of characters that
//           the ourStr initially can hold is init_cap; at any later time
//           during use, the ourStr will adapt as necessary to hold more
//           characters.
//     Note: If init_cap is not provided by client, or if the value provided
//           for it by client is invalid (i.e., less than 1), it is set to
//           DEF_CAP.
//
// CONSTANT MEMBER FUNCTIONS (ACCESSORS) for the ourStr class:
//   int getLen() const
//     pre:  (none)
//     post: The return value is the total number of characters in the ourStr.
//
//   char charAt(int pos) const
//     pre:  pos >= 1 && pos <= getLen()
//     post: The return value is the character at position pos of the ourStr.
//     NOTE: 1st character is @ position 1, 2nd character is @ position 2, ...
//
//   void showStr(std::ostream& out) const
//     pre:  (none)
//     post: The characters in the ourStr have been written to out.
//     NOTE: No newline is inserted at the end.
//
//   bool equal_m(const ourStr& rhs) const
//     pre:  (none)
//     post: The return value is true if the invoking ourStr is equal to rhs,
//           otherwise the return value is false.
//     NOTE: 2 ourStr objects are equal if they contain the same number of
//           characters and each of the pairs of corresponding characters
//           in them are equal, case-sensitively.
//
//   bool operator==(const ourStr& rhs) const
//     pre:  (none)
//     post: The return value is true if the invoking ourStr is equal to rhs,
//           otherwise the return value is false.
//     NOTE: 2 ourStr objects are equal if they contain the same number of
//           characters and each of the pairs of corresponding characters
//
// MODIFICATION MEMBER FUNCTIONS (MUTATORS) for the ourStr class:
//   void setStr(const char cStr[])
//     pre:  cStr is a C-string (null-terminated)
//     post: The ourStr has been set to represent a string equivalent to cStr.
//
//   void setChar(int pos, char newChar)
//     pre:  pos >= 1 && pos <= getLen() + 1
//     post: The character at position pos has been set to newChar and len
//           has been set to pos if pos == ( getLen() + 1 ) initially.
//     NOTE: 1st character is @ position 1, 2nd character is @ position 2, ...
//
//   bool equal_nmnf(const ourStr& lhs, const ourStr& rhs)
//   bool equal_nmf(const ourStr& lhs, const ourStr& rhs) // friend version
//     pre:  (none)
//     post: The return value is true if the lhs is equal to rhs, otherwise
//           the return value is false.
//     NOTE: 2 ourStr objects are equal if they contain the same number of
//           characters and each of the pairs of corresponding characters
//           in them are equal, case-sensitively.
//
//   bool operator==(const ourStr& lhs, const ourStr& rhs)
//     pre:  (none)
//     post: The return value is true if the lhs is equal to rhs, otherwise
//           the return value is false.
//     NOTE: 2 ourStr objects are equal if they contain the same number of
//           characters and each of the pairs of corresponding characters
//           in them are equal, case-sensitively.
//
// VALUE SEMANTICS
//   Assignment and the copy constructor may be used with ourStr objects.
//

#ifndef OUR_STR_H
#define OUR_STR_H

#include <iostream>

class ourStr
{
public:
   static const int DEF_CAP = 1;
   ourStr(int init_cap = DEF_CAP);
   ~ourStr();
   ourStr(const ourStr& src);
   ourStr& operator=(const ourStr& rhs);
   void showStr(std::ostream& out) const;
   int getLen() const;
   char charAt(int pos) const;
   void setChar(int pos, char newChar);
   void setStr(const char cStr[]);

   bool equal_m(const ourStr& rhs) const;
   // bool operator==(const ourStr& rhs) const;
   friend bool equal_nmf(const ourStr& lhs, const ourStr& rhs);
   friend bool operator==(const ourStr& lhs, const ourStr& rhs);

private:
   char* data;
   int capacity;
   int len;
   void resize(int newSize);
};

bool equal_nmnf(const ourStr& lhs, const ourStr& rhs);
// bool operator==(const ourStr& lhs, const ourStr& rhs);

#endif
