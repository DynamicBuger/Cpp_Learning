#include <iostream>
using namespace std;
void mice(void);
void run(void);

int main()
{
    mice();
    mice();
    run();
    run();    
    return 0;
}

void mice()
{
    cout << "Three blind mice" << endl;
}

void run()
{
    cout << "See how they run" << endl;
}
