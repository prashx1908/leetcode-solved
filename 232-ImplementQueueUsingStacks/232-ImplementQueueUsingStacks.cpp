// Last updated: 25/05/2025, 00:09:44
class MyQueue {
private:
stack<int>instack, outstack;
void transfer(){
    while(! instack.empty()){
        outstack.push(instack.top());
        instack.pop();
    }
}
public:
    MyQueue() {
        
    }
    
    void push(int x) {

        instack.push(x);

        
    }
    
    int pop() {
        if(outstack.empty()){
            transfer();
        }
        int fr= outstack.top();
        outstack.pop();
        return fr;
        
    }
    
    int peek() {
        if(outstack.empty()){
            transfer();
        }
        return outstack.top();

        
    }
    
    bool empty() {
        return instack.empty() && outstack.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */