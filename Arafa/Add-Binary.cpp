class Solution {
public:
    string addBinary(string a, string b) {
    int n;

    n = a.length() > b.length() ? a.length() : b.length() ; 
    int diff = a.length() - b.length();
    diff = diff < 0 ? -1*diff : diff;
    
    if(a.length() > b.length()) {
        for(int i =0; i < diff ;i++) {
            b = '0' + b;
        }
    }
    else if(a.length() < b.length()){
        for(int i =0; i < diff ;i++) {
            a = '0' + a;
        }
    }
   
    string result = "";
    char to_remeber = '0';
    for(int i=n-1; i >= 0; i--) {
        if(a[i] == '0' &&  b[i] == '0' && to_remeber == '0') {
            result = '0' + result;
            to_remeber = '0';
        }
        else if(a[i] == '0' &&  b[i] == '0' && to_remeber == '1') {
            result = '1' + result;
            to_remeber = '0';
        }
        else if(a[i] == '0' &&  b[i] == '1' && to_remeber == '0') {
            result = '1' + result;
        }
        else if(a[i] == '0' &&  b[i] == '1' && to_remeber == '1') {
            result = '0' + result;
            to_remeber = '1';
        }
        else if(a[i] == '1' &&  b[i] == '0' && to_remeber == '0') {
            result = '1' + result;
            to_remeber = '0';
        }
        else if(a[i] == '1' &&  b[i] == '0' && to_remeber == '1') {
            result = '0' + result;
            to_remeber = '1';
        }
        else if(a[i] == '1' &&  b[i] == '1' && to_remeber == '0') {
            result = '0' + result;
            to_remeber = '1';
        }
        else if(a[i] == '1' &&  b[i] == '1' && to_remeber == '1') {
            result = '1' + result;
            to_remeber = '1';
        }
    }
    if(to_remeber == '1') {
        result = '1' + result;
    }

    return result;
    }
};