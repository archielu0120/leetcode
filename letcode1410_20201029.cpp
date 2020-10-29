//
//  letcode1410_20201029.cpp
//  
//
//  Created by archielu on 2020/10/29.
//

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
public:
    int det(string s) {
        if(s == "&quot") {
            return 0;
        }
        else if(s == "&apos") {
            return 1;
        }
        else if(s == "&amp") {
            return 2;
        }
        else if(s == "&gt") {
            return 3;
        }
        else if(s == "&lt") {
            return 4;
        }
        else if(s == "frasl") {
            return 5;
        }
        else {
            return -1;
        }
    }
    string entityParser(string text) {
        char e = 34;
        string p = "";
        p += e;
        vector<string> r = {p, "'", "&", ">", "<" , "/"};
        int len = text.size();
        int cur = 0;
        string ans = "";
        while(cur < len) {
            if(text[cur] == '&'){
                string s = "";
                while(text[cur] != ';' && cur < len){
                    s += text[cur];
                    cur++;
                }
                if(det(s) == -1){
                    if(cur < len){
                        s += ';';
                    }
                    ans += s;
                }
                else{
                    ans += r[det(s)];
                }
            }
            else{
                ans += text[cur];
            }
        }
        
        return ans;
            
    }
};




