class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        size = -1;
        minValIdx = 0;
        secondMinValIdx = 0;
    }
    
    void push(int x) {
        size++;
        val[size] = x;
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return val[size];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(int i = 0; i <= size; i++)
        {
            if(val[i] < min) {
                min = val[i];
            }
        }
        return min;
    }

    int size;
    int minValIdx;
    int secondMinValIdx;
    int val[61656];
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */