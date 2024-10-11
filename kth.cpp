class Solution {
public:

    string  helper(string s , int n ){
          if(n == 0 ){
            return s; 
        }
        for(int  i = 0 ; i < s.length() ; i++){
            if(s[i] == '0'){
                s = s.substr(0 , i)+"01"+s.substr(i+1);
            }
            if(s[i] == '1'){
                s = s.substr(0 , i)+"10"+s.substr(i+1);
            }          
        }
        return helper( s , n-1  ); 
    }

    

    int kthGrammar(int n, int k) {
        string s = "0";
        
        string x = helper( s , n  );
        int result = x[k-1] - '0';
                 
        cout<<result; 
    }
};