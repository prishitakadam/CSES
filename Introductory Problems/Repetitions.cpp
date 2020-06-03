/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    long int i=0, j, temp_count=0, count=0;
    
    getline(cin, str);
    
    j = i + 1;
    
    while(i<str.length()){
        
        if(str[i] == str[j]){
            temp_count += 1;
        }
        else{
            if(temp_count >= count){
                count = temp_count;
            }
            temp_count = 0;
        }
        i += 1;
        j += 1;
    }
    count += 1;
    cout << count;

    return 0;
}
