template<typename T>
class vector{
    private : 
    int cs, ts, *arr;

    public : 
    vector(){
        cs = 0;
        ts =  1;
        arr = new T[ts];
    }

    void push_back(int d){
        if(cs == ts){
            T * oldarr = arr;
            arr = new int[2*ts];
            ts = 2*ts;

            for(int i = 0; i < cs; i++){
                arr[i] = oldarr[i];
            }

            // clearing the old array.
            delete [] oldarr;
        }

        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        cs--;
    }

    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs-1];
    }

    bool empty() const{
        return (cs==0);
    }

    int capacity() const{
        return ts;
    }
};
