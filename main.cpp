#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;
    vector<string> w;
  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
    
   w.push_back("home");
   w.push_back("car");
   w.push_back("cat");
   w.push_back("paper");
   w.push_back("amazing");

   wordGrid.push_back(w);

   w.clear();

   w.push_back("run");
   w.push_back("swim");
   w.push_back("football");
   w.push_back("waterball");

   wordGrid.push_back(w);

   for(int i=0; i < wordGrid.size();i++)
        {
          for(int r=0; r < w.size();r++)
         {
            cout<<"Row "<<i<<"Column "<<r<<"is  "<<wordGrid[i][r]<<endl;
           }
        cout<<endl;
        }


  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

  



 return 0;
}




