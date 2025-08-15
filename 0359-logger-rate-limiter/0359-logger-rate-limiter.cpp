class Logger {
public:
    map<string,int>m;
    Logger() {
        
    }
    bool shouldPrintMessage(int timestamp, string message) {
        if(this->m.find(message)==this->m.end()){
            this->m[message]=timestamp;
            return true;
        }
        else if((timestamp-(this->m[message]))>=10){
            this->m[message]=timestamp;
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */