class Trie {
    
public:
    
   class TrieNode{
    public:
       
       bool isWord;
       vector<TrieNode*>children;
       
       TrieNode(){
           isWord=false;
           children.resize(26,NULL);
       }
   };
        TrieNode* root;

    
    
    Trie() {
        
        root = new TrieNode();
    }
    
    void insert(string word) {
        
        TrieNode* cur = root;
        
        for(int i=0;i<word.size();i++)
        {
            if(cur->children[word[i]-'a']==NULL)
            {
                cur->children[word[i]-'a']= new TrieNode();
            }
            cur=cur->children[word[i]-'a'];
        }
        
        cur->isWord=true;   
        
        
        
    }
    
    bool search(string word) {
        
        TrieNode* cur = root;
        
        for(int i=0;i<word.size();i++)
        {
            if(cur->children[word[i]-'a']==NULL)
            {
                // cur->children[word[i]-'a']= new TrieNode();
                return false;
            }
            cur=cur->children[word[i]-'a'];
        }
        
        if(cur->isWord)return true; 
        else return false;
        
        
    }
    
    bool startsWith(string word) {
        TrieNode* cur = root;
        
        for(int i=0;i<word.size();i++)
        {
            if(cur->children[word[i]-'a']==NULL)
            {
                return false;
            }
            cur=cur->children[word[i]-'a'];
        }
        
       return true; 
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */