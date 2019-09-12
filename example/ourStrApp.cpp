// FILE: ourStrApp.cpp
// A program to test the ourStr class

#include "ourStr.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void ShowStrSpaced(ostream& out, const ourStr& s);

int main()
{
   cout << "ourStr::DEF_CAP = " << ourStr::DEF_CAP << endl;

   ourStr s1;
   s1.showStr(cout);
   cout << endl;
   s1.setStr("San Marcos");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   s1.setChar(1, 's');
   s1.setChar(5, 'm');
   s1.setChar(11, ','); // shouldn't trigger assertion failure
   s1.setChar(12, ' '); // shouldn't trigger assertion failure
   s1.setChar(13, 'T'); // shouldn't trigger assertion failure
   s1.setChar(14, 'X'); // shouldn't trigger assertion failure
   s1.showStr(cout);
   cout << endl;
   s1.setStr("");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   s1.setStr("SM");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   cout << "length is " << s1.getLen() << endl;

   s1.setStr("San Marcos");
   ourStr s2 = s1, s3;
   s3 = s1;

   s1.showStr(cout);
   cout << endl;
   s2.showStr(cout);
   cout << endl;
   if ( s1.equal_m(s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmnf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if (s1 == s2)
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;

   s2.setChar(1, 's');
   s2.setChar(5, 'm');

   s1.showStr(cout);
   cout << endl;
   s2.showStr(cout);
   cout << endl;
   if ( s1.equal_m(s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmnf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if (s1 == s2)
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;

   s2.setStr("San");

   s1.showStr(cout);
   cout << endl;
   s2.showStr(cout);
   cout << endl;
   if ( s1.equal_m(s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmnf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if (s1 == s2)
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;

   s2.setStr("San_Marcos");

   s1.showStr(cout);
   cout << endl;
   s2.showStr(cout);
   cout << endl;
   if ( s1.equal_m(s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmnf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if ( equal_nmf(s1, s2) )
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;
   if (s1 == s2)
      cout << "s1 == s2" << endl;
   else
      cout << "s1 != s2" << endl;

   return EXIT_SUCCESS;
}

void ShowStrSpaced(ostream& out, const ourStr& s)
{
   int sLen = s.getLen();
   for (int p = 1; p <= sLen; ++p)
      out << s.charAt(p) << "  ";
}
