//58A. Chat room
//string operate

#include <iostream>
#include <string>
using namespace std;
//find the position of each number where they first appeare
bool isHello(string n){
    int tmp;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == 'h'){
            tmp = i + 1;
        }
        if(i == )
    }
    for(int i = tmp; i < n.length();i ++){
        if(n[i] == 'e'){
            tmp = i + 1;
        }
    }
    for(int i = tmp; i < n.length();i ++){
        if(n[i] == 'l'){
            tmp = i + 1;
        }
    }
}

int main(void)
{
    string input;
    cin >> input;
    if(isHello(input)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
