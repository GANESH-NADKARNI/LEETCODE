class MinStack {
private:
    stack<long long> stack;
    long long Minvalue;
public:

    MinStack() {
        Minvalue = -1;
    }
    
    void push(int val) {
        if (stack.empty()) {
            Minvalue = val;
            stack.push(val);
        }

        else if (val < Minvalue) {
            stack.push(2ll * val - Minvalue);
            Minvalue = val;
        }

        else {
            stack.push(val);
        }
    }
    
    void pop() {
        if(stack.empty())
            return;

        long long ans = stack.top();
        stack.pop();
        
        if (ans < Minvalue) 
            Minvalue = 2ll * Minvalue - ans;
    }
    
    int top() {
        if(stack.empty())
            return -1;
        
        else if (Minvalue > stack.top() )
            return Minvalue;
        else
            return stack.top();


    }
    
    int getMin() {
        if (stack.empty())
            return -1;

        return Minvalue;
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