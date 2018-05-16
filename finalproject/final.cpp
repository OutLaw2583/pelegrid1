#include "tinyxml2.h"
#include <iostream>

using namespace std;
using namespace tinyxml2;
int main(int argc, const char** argv)

{
	XMLDocument*doc= new XMLDocument();
	doc-> LoadFile(argv[1]);
	XMLElement*root=doc->FirstChildElement();
	cout<<root->FirstChildElement()->Name()<<"\n";
	cout<<root->FirstChildElement()->GetText()<<"\n";


	return 0;

}
