

/*You are required to complete this function */

string encode(string src)
{   
    char ch = src[0];
    string ans;
    int count = 1;
    
    for(int i = 1 ; i < src.length() ; i++){
        if(ch != src[i]){
            ans.push_back(ch);
            ans += to_string(count) ;
            ch = src[i];
            count = 1;
        }
        else
            count++;
    }
    ans.push_back(ch);
    ans += to_string(count) ;
    
    return ans;
}     
 
