#include <iostream>

using namespace std;
class Node{
public:
    char data;
    Node *secand;
    Node *therd;
    Node *forth;
};
int main()
{
    Node *first = new Node();
    first-> data = 'M';
    first -> secand = new Node();
    first -> secand -> data = 'i';
    first -> secand -> therd = new Node();
    first -> secand -> therd -> data = 'N';
    first -> secand -> therd -> forth = new Node();
    first -> secand -> therd -> forth -> data = 'a';
    cout << first-> data << first -> secand -> data << first -> secand -> therd -> data << first -> secand -> therd -> forth -> data << endl;
    return 0;
}
