#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Stack
{

    vector<T> v1;

public:
    void push(T val)
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
    T top()
    {
        // if (isEmpty())
        // {
        //     cout << "stack is Empty" << endl;
        //     return -1;
        // }
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
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}