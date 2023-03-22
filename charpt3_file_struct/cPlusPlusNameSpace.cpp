//#include <iostream>
extern "C" int func(int)
{
    int a;
    return 0;
}
#ifdef __cplusplus
extern "C"{
#endif
float func1(double){};
#ifdef __cplusplus
}
#endif

int global_init_var = 10;

class C{
public:
    int func(int);
    class C2{
        int func(int);
    };
};
int C::func(int){
    int a;
    return 0;
}

namespace N {
    int func(int);
    class C{
        int func(int);
    };
};

int main()
{
    static double local_init_var = 3;
    func(1);
    func(1.0);
    C B;
    B.func(1);
    global_init_var = 20;
    return 0;
}
