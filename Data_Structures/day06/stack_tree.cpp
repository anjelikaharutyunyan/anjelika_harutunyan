#include <iostream>
#include <stack>
using namespace std;

class Tree {
public:
    int _value;
    Tree* _left;
    Tree* _right;

    Tree(int value)
    {
        _value = value;
        _left = NULL;
        _right = NULL;
    }
    Tree()
    {
        _value = 0;
        _left = NULL;
        _right = NULL;
    }
};

int minimum(Tree* root)
{
    int min = root->_value;
    if (root == NULL) {
        return 0;
    }
    stack<Tree*> s;

    s.push(root);

    while (!s.empty()) {

        Tree* tree = s.top();

        if (min >= tree->_value) {
            min = tree->_value;
        }
        s.pop();

        if (tree->_left != NULL)
            s.push(tree->_left);

        if (tree->_right != NULL)
            s.push(tree->_right);
    }
    return min;
}

int maximum(Tree* root)
{
    int _max = root->_value;
    if (root == NULL) {
        return 0;
    }
    stack<Tree*> s;

    s.push(root);

    while (!s.empty()) {

        Tree* tree = s.top();

        if (_max <= tree->_value) {
            _max = tree->_value;
        }
        s.pop();

        if (tree->_left != NULL)
            s.push(tree->_left);

        if (tree->_right != NULL)
            s.push(tree->_right);
    }
    return _max;
}

int sum(Tree* root)
{
    int _sum = 0;
    if (root == NULL) {
        return 0;
    }
    stack<Tree*> s;

    s.push(root);

    while (!s.empty()) {

        Tree* tree = s.top();

        _sum += tree->_value;
        s.pop();

        if (tree->_left != NULL)
            s.push(tree->_left);

        if (tree->_right != NULL)
            s.push(tree->_right);
    }
    return _sum;
}
void display(Tree* root)
{
    if (root == NULL)
        return;

    stack<Tree*> s;

    s.push(root);

    while (!s.empty()) {

        Tree* tree = s.top();
        cout << tree->_value << " ";
        s.pop();

        if (tree->_left != NULL)
            s.push(tree->_left);

        if (tree->_right != NULL)
            s.push(tree->_right);
    }
}

Tree* insert(Tree* root, int value)
{
    if (root == NULL)
        return new Tree(value);
    else {
        if (value <= root->_value) {
            root->_left = insert(root->_left, value);
        }
        else {
            root->_right = insert(root->_right, value);
        }
        return root;
    }
}

int main()
{
    Tree* root = new Tree(1);
    root->_left = new Tree(2);
    root->_right = new Tree(3);
    root->_left->_left = new Tree(4);
    root->_left->_right = new Tree(5);
    root->_right->_left = new Tree(6);
    root->_right->_right = new Tree(7);
    insert(root, 100);
    display(root);
    cout << "\nMinimum element = "<< minimum(root) << endl;
    cout <<"Maximum element = "<< maximum(root) << endl;
    cout <<"Sum = " <<sum(root);

    return 0;
}