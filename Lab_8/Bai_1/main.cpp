#include <iostream>

using namespace std;

//void thay_doi1(int& x); //Cau a
//void thay_doi1(int x);  //Cau b
//void thay_doi2(int* x); //Cau a
void thay_doi(int& x);  //Cau d
void thay_doi(int* x);  //Cau d
void thay_doi(int x);   //Cau e

int main()
{
    int a = 9;
    //int* a = new int(9);    //Cau c
    cout << "before:" << "a =" << a << endl;
    //cout << "before:" << "a =" << *a << endl;   //Cau c
    //thay_doi1(a);
    thay_doi(a);
    //thay_doi1(*a);  //Cau c
    //thay_doi2(&a);
    thay_doi(&a);
    //thay_doi2(a);   //Cau c
    cout << "after:" << "a =" << a << endl;
    //cout << "after:" << "a =" << *a << endl;  //Cau c
    //delete a;   //Cau c
    return 0;
}

//void thay_doi1(int& x){   //Cau a
void thay_doi(int& x){   //Cau d
//void thay_doi1(int x){  //Cau b
    x = 100;
}

//void thay_doi2(int* x){
void thay_doi(int* x){   //Cau d
    *x = 100;
}

void thay_doi(int x){   //Cau e
    x = 100;    //Cau e
}   //Cau e
/*
Câu a: thêm 2 dòng khai báo
void thay_doi1(int x);
và
void thay_doi2(int* x);
trước hàm main().

Câu b: kết quả biến a không thay đổi do hàm không lưu lại giá trị sau khi chạy.

Câu c: thay đổi lời gọi hàm lại thành thay_doi1(*a); và thay_doi2(a);
và thay đổi trong lệnh xuất hàm từ a thành *a

câu d: không có lỗi

câu e: có lỗi
*/
