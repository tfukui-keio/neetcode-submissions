class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack_list_.push(val);
        if (stack_min_list_.empty()) {
            stack_min_list_.push(val);
        } else {
            stack_min_list_.push(min(stack_min_list_.top(), val));
        }
    }
    
    void pop() {
        stack_list_.pop();
        stack_min_list_.pop();
    }
    
    int top() {
        return stack_list_.top();
    }
    
    int getMin() {
        return stack_min_list_.top();
    }
    std::stack<int> stack_min_list_;
    std::stack<int> stack_list_;
};
