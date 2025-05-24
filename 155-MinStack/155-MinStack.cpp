// Last updated: 25/05/2025, 00:09:52
class MinStack {
private:
    stack<int>s;
    stack<int>MinS;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(MinS.empty()){
           MinS.push(val);
        }
        else{
        MinS.push(min(val, MinS.top()));
        }
        
    }
    
    void pop() {
        if(!s.empty()){

            s.pop();
            MinS.pop();
        }
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return MinS.top();
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