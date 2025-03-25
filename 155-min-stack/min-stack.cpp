#include <stack>
#include <limits.h>
class MinStack {
public:
vector<int> v;
    MinStack() {  //constructor
        
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
      return v[v.size()-1];
    }
   int getMin() {
    int mini = v[0];
    for(int i=1; i<v.size();i++){
        mini = min(mini,v[i]);
    }
    return mini;
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