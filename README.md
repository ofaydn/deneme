# deneme
first tryings in repository
i want to know
#include <iostream>
using namespace std;
enum example{
    Kalar,Gecer
    
};
class gecme{
    public:
    void test(int a){
        if(a<50){
            cout<<Kalar;
        }else{
            cout<<Gecer;
        }
    }
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
    
    gecme gecisFonk;
    gecisFonk.test(10);

    return 0;
}
