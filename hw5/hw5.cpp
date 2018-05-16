#include <iostream>
#include <vector>

using namespace std;

class node{
	public:
	int title;
	bool printed = false;
	node* left;
	node* right;
	node* prev;
};

void traverse(node* nodes);

int main() {
	vector <node> nodes(9);

	int title[9] = {2,7,5,2,6,9,5,11,4};
	cout << " Name of Elements ::" << endl;

	for (int i = 0; i < nodes.size(); i++) {  // assigne the titles too all nodes
		nodes[i].title = title[i];
		cout << nodes[i].title << endl;
	}
	cout << "End of Naming Elements" << endl;

	nodes[0].left  = &nodes[1]; // node 1 has title 2 points left to node title 7
	nodes[0].right = &nodes[2]; // node 1 has title 2 points tight to node title 5

	nodes[1].left  = &nodes[3]; // node 2 title 7 left points to node 4 title 2
	nodes[1].right = &nodes[4]; // node 2 title 7 right points to node 5 title 6
	nodes[1].prev  = &nodes[0];

	nodes[2].right = &nodes[5]; // node 3 title 5 right points to node 6 title 9
	nodes[2].prev  = &nodes[0];

	nodes[3].prev = &nodes[1];

	nodes[4].left = &nodes[6];
	nodes[4].right= &nodes[7];
	nodes[4].prev = &nodes[1];


	nodes[5].left = &nodes[8];
	nodes[5].prev = &nodes[2];
	nodes[6].prev = &nodes[4];
	nodes[7].prev = &nodes[4];
	nodes[8].prev = &nodes[5];

	cout << "BINARY TREE" << endl;

	traverse(&nodes[0]);

	int jhkhk;
	cin >> jhkhk;

	return 0;
}

void traverse( node* nodes) {
	if (nodes->printed == false ) { // if the title has not been printed
		cout << nodes->title << endl;
		nodes->printed = true;	//set the title to have been printed
    
		if (nodes->left != nullptr) { // if there is a child on left
			traverse(nodes->left);
		}
		else if (nodes->right != nullptr) { // if there is a child on the right
			traverse(nodes->right);
		}
		else if (nodes->left == nullptr && nodes->right == nullptr) { // if there are no childrent to right or left
			if (nodes->prev != nullptr) {
				cout << " DEADEND" << endl;
				cout << "STEPPING BACK!" << endl;
				traverse(nodes->prev); // take one step back
			}
		}
	}
	else if (nodes->printed == true && nodes->right != nullptr && nodes->right->printed == false) {
		//if program stepped back once and there is a child not printer to right
			traverse(nodes->right);
	}
	else if (nodes->prev != nullptr) { // if traversed back and all children have been printed then go back again
		traverse(nodes->prev);
	}
	else if (nodes->prev == nullptr) { // if you get here then all chidren have been printed and you are done
		cout << complete << endl;
	}

}
