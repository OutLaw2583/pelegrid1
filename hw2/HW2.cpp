#include <iostream>

// input output stream

#include <string>

#include <string.h>

// for string copy

#include <vector>

 

int main()

{

  using namespace std;

  string bn1;

  string bn2;

 

 

  cout << "Please enter your number:"<< endl;

  cin >> bn1;

 

  cout << "Please enter your number:"<< endl;

  cin >> bn2;

 

 

//need to convert string to char array because we can't use integer to solve it

int n = bn1.length();

//declare character array

//.size (memory space) s.length tells the number of space or digits you have

// char always needs one more digit/space than string

// need to initialize the array space for char*****

char char1_array[n+1];

//string to char array

 

strcpy (char1_array, bn1.c_str());

//treat string as char

// for (int i = 0; i < n; i++)

// {

//    cout << char1_array[i] <<endl;

//

// }

//i = 0 and we have 4 places so i would be 1,2,3,4 in position 0,1,2,3

// WHAT WE OUTPUT IS 1234 because cin and it cout and

// 1

// 2

// 3

// 4

//use for loop to go through each character

 

int m = bn2.length();

char char2_array[m+1];

vector <int> v;

//needs to be outside for loop because the scope of for loop will know

strcpy (char2_array, bn2.c_str());

int carry = 0;

for (int i = n- 1; i >= 0; i--) {

  //n - 3 meaning spaces 0,1,2 (2)

//i++ going backward add --> so i-- adds the right way

//scope is the area between curly bracket if you declared variable in a scope

//cant use it outside of the scope

  // cout << (int)char1_array[i]<<endl;

  // cout << (int)char2_array[i]<<endl;

//n amd m are equal so both number have to have the same number of digit

//convert char to integer

// 0 as an integer is 48 in character

// OUTPUT RESULT IS

//expecting  1,5,2,6,3,7,4,8 (when you put 1234(number im typing)

// and 5678 (numbers im typing) on top of each other) but instead

//adding the numbers that I expect to 48 because 48 is equal to 0 char is 48 making char into numeric number

// 49

// 53

// 50

// 54

// 51

// 55

// 52

// 56

 

// cout << (int)char1_array[i] - 48 <<endl;

// cout << (int)char2_array[i] - 48 <<endl;

//subtract 48 to get 1,5,2,6,3,7,4,8

//integer only holds 9 digits

int c = (int)char1_array[i] + (int)char2_array[i] - 96 + carry;

int e = c%10;

int d = c /10; // one digit numbers added cant be more than 10

 

carry = d;

// cout << c <<endl;

// cout << d <<endl;

cout << e <<endl;

 

v.push_back (e);

//push back to store data back to string

//this adds 1+5,2+6,3+7,4+8

//6,8,10,12

//we dont want that we want

//it to carry so for 12 we want  2 to stay and the 1 to carry over

// so get the remainder by dividing by 10 to get 1 and the remainder is 2 want the remainder to stay

}

if (carry == 1) {

 

v.push_back (carry);

 

 

}

//char array + char array adds only the position codes

for (int i= v.size() - 1; i >= 0; i--)

// the numbe is backwards with i > v.size and i++

{


cout << v[i];

 

}

cout<<  endl;

//know what 48 means

 

return 0;

}