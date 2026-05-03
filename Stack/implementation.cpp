#include <iostream>
#include <vector>
using namespace std;
class Stack
{

    vector<int> v1;

public:
    void push(int val)
    {
        v1.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        v1.pop_back();
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "stack is Empty" << endl;
            return -1;
        }
        int lastindx = v1.size() - 1;
        return v1[lastindx];
    }
    bool isEmpty()
    {
        return v1.size() == 0;
    }
};
int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}