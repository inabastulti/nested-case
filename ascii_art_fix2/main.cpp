//
//  main.cpp
//  ascii_art2
//
//  Created by 稲葉創一 on 2020/05/05.
//  Copyright © 2020 稲葉創一. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace::std;

class A{
public:
    explicit A(string str){name = str;};
    bool Initalize(bool a){cout << "Initialize A = " << name << endl;return a;}
    bool Finalize(bool a){cout << "Finalize A = " << name << endl;return a;}
private:
    string name;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<A> list = {A("A"), A("B"), A("C"), A("D"), A("E"), A("F"), A("G"), A("H")};
    
    auto i = list.begin();
    for (;i != list.end(); ++i) {
        bool result = i->Initalize(true);
        if (result != true) {
            break;
        }
    }
    // iteratorが一つ動いているので、-1を開始時に指定. begin()の位置まで実施する為begin()-1を終了条件 //
    for (--i; i != list.begin() - 1; --i) {
        i->Finalize(true);
    }
    return 0;
}
