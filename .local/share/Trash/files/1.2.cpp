    #include <iostream>  
    #include <string>  
    using namespace std;  
      
    int digit(string str) {  
        if (str == "zero")  
            return 0;  
        if (str == "one")  
            return 1;  
        if (str == "two")  
            return 2;  
        if (str == "three")  
            return 3;  
        if (str == "four")  
            return 4;  
        if (str == "five")  
            return 5;  
        if (str == "six")  
            return 6;  
        if (str == "seven")  
            return 7;  
        if (str == "eight")  
            return 8;  
        if (str == "nine")  
            return 9;  
        return -1;  
    }  
      
    int getval() {  
        string tmp;  
        int s = 0;  
        while (cin >> tmp && tmp != "+" && tmp != "=") {  
            s = s * 10 + digit(tmp);  
    //      cout << tmp << endl;  
        }  
        return s;  
    }  
      
    int main() {  
        int p1, p2;  
        while (1) {  
            p1 = getval();  
            p2 = getval();  
    //      cout << p1 << " + " << p2 << " = "<< endl;  
            if (p1 == 0 && p2 == 0)  
                break;  
            cout << p1 + p2 << endl;  
        }//while  
        return 0;   
    }  
