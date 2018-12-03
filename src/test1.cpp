//
// Created by xuyz on 2018/11/29.
//
#include <iostream>

template <int i>
class D{
public:
    D(void*){

    };
};

template <int N>
class Even{
public:
    Even<N-1> e;
    enum {Yes = (N%2) ? 0 : 1} ;
    void f(){
        D<N> d = Yes ? 1 : 0;
        e.f();
    }
};

template<>
class Even<1>{
public:
    enum {Yes = 0} ;
    void f(){

    }
};
int main(){

//    std::cout << "learn cpp" << std::endl;
    Even<100> e;
//    e.f();
    return 0;
}