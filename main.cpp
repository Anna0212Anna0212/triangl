#include <iostream>

using namespace std;

int main()
{
    int tran_onetwo;
    int tran_three;
    double answ_onetwo=0;
    cin>>tran_onetwo;
    answ_onetwo+=tran_onetwo*tran_onetwo;
    cin>>tran_onetwo;
    answ_onetwo+=tran_onetwo*tran_onetwo;
    cin>>tran_three;
    if(answ_onetwo>tran_three)
        cout<<"Acute";
    if(answ_onetwo<tran_three)
        cout<<"Obtuse";
    if(answ_onetwo==tran_three)
        cout<<"Right";
    if(answ_onetwo<=tran_three)
        cout<<"error";
}

