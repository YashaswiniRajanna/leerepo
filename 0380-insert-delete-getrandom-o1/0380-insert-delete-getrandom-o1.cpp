class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>hash;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(hash.find(val)==hash.end()){
            v.push_back(val);
                hash[val]=v.size()-1;
                return true;
        }
        return false;
    }
    
    bool remove(int val) {
      if(hash.find(val)!=hash.end()){
          int i=hash[val];
          v[i]=v[v.size()-1];
          v.pop_back();
          hash[v[i]]=i;
          hash.erase(val);
          return true;
      }
        return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */