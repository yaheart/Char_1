#include <iostream>

using namespace std;

int main()
{
   char char_arr[5]={'a','b','c','d','e'};
   cout << "char_arr: ";
   for ( int i=0; i<5; ++i )
       { cout << char_arr[i] << " ";
       }
   cout << endl;

   int a=sizeof char_arr;
   cout << "sizeof: " << a << endl;

   cout << "number: " ;
   for ( int i=0; i<5; ++i )
       { int b=char_arr[i]+0;
         cout << b << " ";
       }
   cout << endl;

   int c=0;
   for ( int i=0; i<5; ++i )
       { c=c+char_arr[i];
       }
   cout << "edd: " << c << endl;

   //別名,指標
   int name=1;
   cout << "name=" << name << endl;
   int &new_name=name;
   int *y;
   y=&name;
   *y=2;
   cout << "new name=" << *y;

   return 0;
}
