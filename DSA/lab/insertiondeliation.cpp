#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
   set<int> st;
   set<int>::iterator it;
   int c, i;
   while (1) {
      cout<<"1.Size of the Set"<<endl;
      cout<<"2.Insert Element into the Set"<<endl;
      cout<<"3.Display the set: "<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your Choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Size of the Set: ";
            cout<<st.size()<<endl;
         break;
         case 2:
            cout<<"Enter value to be inserted: ";
            cin>>i;
            st.insert(i);
         break;
         case 3:
            cout<<"Displaying Set by Iterator: ";
            for (it = st.begin(); it != st.end(); it++) {
               cout << (*it)<<" ";
            }
            cout<<endl;
         break;
         case 4:
            exit(1);
         break;
         default:
            cout<<"Wrong Choice"<<endl;
      }
   }
   return 0;
}