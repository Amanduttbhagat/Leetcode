class MyQueue {
    stack<int> inp;
    stack<int> out;

public:
    MyQueue() {}

    void push(int x) {
        inp.push(x);
    }

    int pop() {
        if (out.empty()) {
            while (!inp.empty()) {  // Added brackets here
                out.push(inp.top());
                inp.pop();
            }
            int res = out.top();
            out.pop();
            return res;
        } else {
            int res = out.top();
            out.pop();
            return res;
        }
    }

    int peek() {
        if (out.empty()) {
            while (!inp.empty()) {  // Added brackets here
                out.push(inp.top());
                inp.pop();
            }
            int res = out.top();
            return res;
        } else {
            return out.top();
        }
    }

    bool empty() {
        return inp.empty() && out.empty();
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