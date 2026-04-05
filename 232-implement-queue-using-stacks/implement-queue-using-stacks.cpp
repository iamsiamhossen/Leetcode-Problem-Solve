class MyQueue {
stack<int> st,st2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
       if (st2.empty())
    {
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
    }
    int x = st2.top();
    st2.pop();
    return x;}
    
    int peek() {
          if (st2.empty())
    {
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
    }
    return st2.top();
    }
    
    bool empty() {
        return st.empty() && st2.empty();
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