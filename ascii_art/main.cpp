//
//  main.cpp
//  ascii_art
//
//  Created by 稲葉創一 on 2020/05/05.
//  Copyright © 2020 稲葉創一. All rights reserved.
//

#include <iostream>

class A{
public:
    explicit A(std::string str){name = str;};
    bool Initalize(bool a){std::cout << "Initialize A = " << name << std::endl;return a;}
    bool Finalize(bool a){std::cout << "Finalize A = " << name << std::endl;return a;}
private:
    std::string name;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    A a("A");
    bool result = a.Initalize(true);
    if (result != false) {
        A b("B");
        result = b.Initalize(true);
        if (result != false) {
            A c("C");
            result = c.Initalize(true);
            if (result != false) {
                A d("D");
                result = d.Initalize(true);
                if (result != false) {
                    A e("E");
                    result = e.Initalize(true);
                    if (result != false) {
                        A f("F");
                        result = f.Initalize(true);
                        if (result != false) {
                            A g("G");
                            result = g.Initalize(false);
                            if (result != false) {
                                A h("H");
                                result = h.Initalize(true);
                                
                            } else {
                                f.Finalize(true);
                                e.Finalize(true);
                                d.Finalize(true);
                                c.Finalize(true);
                                b.Finalize(true);
                                a.Finalize(true);
                            }
                        } else {
                            e.Finalize(true);
                            d.Finalize(true);
                            c.Finalize(true);
                            b.Finalize(true);
                            a.Finalize(true);
                        }
                    } else {
                        d.Finalize(true);
                        c.Finalize(true);
                        b.Finalize(true);
                        a.Finalize(true);
                    }
                } else {
                    c.Finalize(true);
                    b.Finalize(true);
                    a.Finalize(true);
                }
            } else {
                b.Finalize(true);
                a.Finalize(true);
            }
        } else {
            a.Finalize(true);
        }
    }
    
    return 0;
}
