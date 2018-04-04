//look for text file

//sort integers

//look for number

//CREATE A TEXT FILE ON ANYTHING AND SAVE IT AS ---.txt

#include <iostream>

#include <fstream>

#include <algorithm>

#include <vector>

int binarySearch (std::vector <int> V, int & value, int & left, int & right);

int main ()

{

  using namespace std;

  vector <int> myvector;

  //initializing vector

  ifstream a;

  int x;

  int t;

  int y;

  int z;

  //object of input stream

  a.open ("hw4.txt");

  //opens stream

  while (a>>x)

  {

    myvector.push_back(x);

  }

  //similar to std::cin >> (string direction)

 //x can fetsh

  a.close();

  //now it has the file


  sort (myvector.begin(), myvector.end());

  //already sorted

  for (int i=0 ; i< myvector.size(); i++)

  {

  cout<< myvector[i] << endl;

  //need for loop to print each integer

  }


  cin>> t;

  y = 0;

  z = myvector.size() - 1; //20


  int n = binarySearch(myvector, t, y, z);


  //call function need four arguments

  //(L+R)/2

  //use either while loop or recursive way


  if  (n < 0)

  cout << "NOT FOUND" <<endl;


  if (n > 0)

  cout << n << endl;

  return 0;

}

int binarySearch (std::vector <int> V, int & value, int & left, int & right){

using namespace std;

  while (left<= right){

    int middle = (left+right)/2;

    if (V[middle] == value)

    return middle;

    else if (V[middle] > value)

    right = middle - 1;

      else left = middle + 1;

      //http://www.algolist.net/Algorithms/Binary_search

cout << "Left =" << left << endl;

cout << "Right =" << right << endl;

cout << "Middle = " << middle << endl;
  }
  return -1;
}
