#include<iostream>
#include<vector>



using namespace std;



class MinStack {
public:
    /** initialize your data structure here. */
    int* arr;
    int cap;
    int curr;
    MinStack() {
        arr = new int[1];
        cap = 1;
        curr = 0;
    }

    void push(int val) {
        if (curr == cap)
        {
            int* tmp = arr;
            int* arr = new int[cap * 2];
            cap = cap * 2;
            for (int i = 0; i < curr; i++) { arr[i] = tmp[i]; }
        }
        arr[curr] = val;
        curr++;
    }

    void pop() {
        curr--;
    }

    int top() {
        return arr[curr - 1];
    }

    int getMin() {
        int min = INT_MAX;
        for (int i = 0; i < curr; i++)
        {
            if (min > arr[i]) { min = arr[i]; }
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{

    MinStack* obj = new MinStack();
    int val = 5;
    obj->push(-2);
    obj->push(0);
    //obj->push(9);
    obj->push(3);
    int param_4 = obj->getMin();
    obj->pop();
    int param_3 = obj->top();
    int param_5 = obj->getMin();

,,,,,,,,    return 0;
}
