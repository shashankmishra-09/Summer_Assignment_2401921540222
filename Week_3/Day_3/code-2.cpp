// MIN STACK

class MinStack {
public:
stack<long long> st;
long long min;
    MinStack() {
    }
    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(val);
        }
        else if(val>=min){
            st.push(val);
        }
        else{
            st.push(2LL*val-min);
            min = val;
        }
    }
    void pop() {
        if(st.empty()){
            return;
        }
        long long x = st.top();
        st.pop();
        if(x<min){
            min = (2*min) - x ;
        }
    }
    int top() {
        if(st.empty()){
            return -1;
        }
        long long x = st.top();
        if(x<min) return min;
        else return x;
    }
    int getMin() {
        return min;
    }
};
