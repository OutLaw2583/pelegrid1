#include <iostream>

// #include <utility>



int main()

{

  using namespace std;

int a[] = {4,9,2,1,3,4,7,8,5,0,6}; //array



for (int j = 0; j < 11; j++) {



    for (int i = 0; i < 10; i++)

{

  // cout <<"i: " << i<<endl;

//   cout<< a[i] << endl;



  if (a[i+1] <  a[i])

  //index inside of a

   {

int x= a[i];

a[i] = a[i+1];

a[i+1] = x;

//passing variable not value

  // cout <<"i: " << i<<endl;

  // cout <<"i+1: " << i+1 <<endl;

  }

}

}

for (int k = 0; k < 11; k++)

{

cout<< a[k] << endl;

}



return 0;



}
