#include <iostream>
#include <vector>

using std::cout;
using std::endl;

typedef class node* treePointer;

class node {
public:
	int data;
	treePointer leftChild;
	treePointer rightChild;
};

void preorder(treePointer nodePtr);
void inorder(treePointer nodePtr);
void postorder(treePointer nodePtr);

int main() {
	std::vector<node> tree = std::vector<node>(7);
	for (int i = 0; i < tree.size(); ++i) {
		tree[i].data = i + 1;
		tree[i].leftChild = nullptr;
		tree[i].rightChild = nullptr;
	}

	for (int i = 1; i < tree.size(); ++i) {
		if (i % 2 == 0) tree[i / 2 - 1].rightChild = &tree[i];
		else tree[i / 2].leftChild = &tree[i];
	}

	preorder(&tree[0]);
	cout << endl;
	inorder(&tree[0]);
	cout << endl;
	postorder(&tree[0]);

	return 0;
}

void preorder(treePointer nodePtr) {
	if (nodePtr) {
		cout << nodePtr->data << " ";
		preorder(nodePtr->leftChild);
		preorder(nodePtr->rightChild);
	}
}

void inorder(treePointer nodePtr) {
	if (nodePtr) {
		inorder(nodePtr->leftChild);
		cout << nodePtr->data << " ";
		inorder(nodePtr->rightChild);
	}
}

void postorder(treePointer nodePtr) {
	if (nodePtr) {
		postorder(nodePtr->leftChild);
		postorder(nodePtr->rightChild);
		cout << nodePtr->data << " ";
	}
}



