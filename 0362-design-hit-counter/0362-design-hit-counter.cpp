class HitCounter {
private:
    queue<int>q;
public:
    HitCounter() {
        
    }
    
    void hit(int timestamp) {
        this->q.push(timestamp);
    }
    
    int getHits(int timestamp) {
        while(!this->q.empty()){
            int dif=timestamp-(this->q.front());
            if(dif>=300){
                this->q.pop();
            }
            else break; 
        }
        return this->q.size();
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */