#include <iostream>
using namespace std;

enum danhsachU23
{
    BUI_TIEN_DUNG = 1,
    BUI_TIEN_DUNG_2 = 4,
    DOAN_VAN_HAU = 5,
    TRAN_DINH_TRONG = 21,
    VU_VAN_THANH = 17,
    DO_DUY_MANH = 11,
    PHAM_DUC_HUY = 8,
    NGUYEN_QUANG_HAI = 19,
    LUONG_XUAN_TRUONG = 6,
    PHAN_VAN_DUC = 14,
    PHAM_XUAN_MANH = 2,
    NGUYEN_CONG_PHUONG = 10,
    HA_DUC_CHINH = 13,
    NGUYEN_VAN_TOAN = 9,
    BUI_TIEN_DUNG_3 = 20,
    NGUYEN_THANH_CHUNG = 16,
    NGUYEN_PHONG_HONG_DUY = 7
};

int main()
{
    int so_ao;
    cout << "Nhap vao so ao cua cau thu ban can lay thong tin: ";
    cin >> so_ao;
    switch (so_ao)
    {
    case BUI_TIEN_DUNG:
        cout << "Ho va ten: Bui Tien Dung, Sinh nhat: 28/02/1997, Vi tri: Thu mon, Que quan: Thanh Hoa" << endl;
        break;
    case BUI_TIEN_DUNG_2:
        cout << "Ho va ten: Bui Tien Dung, Sinh nhat: 02/10/1995, Vi tri: Trung ve, Que quan: Ha Tinh" << endl;
        break;
    case DOAN_VAN_HAU:
        cout << "Ho va ten: Doan Van Hau, Sinh nhat: 19/04/1999, Vi tri: Hau ve trai, Que quan: Thai Binh" << endl;
        break;
    case TRAN_DINH_TRONG:
        cout << "Ho va ten: Tran Dinh Trong, Sinh nhat: 25/04/1997, Vi tri: Trung ve, Que quan: Ha Noi" << endl;
        break;
    case VU_VAN_THANH:
        cout << "Ho va ten: Vu Van Thanh, Sinh nhat: 14/04/1996, Vi tri: Hau ve phai, Que quan: Hai Duong" << endl;
        break;
    case DO_DUY_MANH:
        cout << "Ho va ten: Do Duy Manh, Sinh nhat: 29/09/1996, Vi tri: Tien ve TT, Que quan: Ha Noi" << endl;
        break;
    case PHAM_DUC_HUY:
        cout << "Ho va ten: Pham Duc Huy, Sinh nhat: 20/01/1995, Vi tri: Tien ve TT, Que quan: Hai Duong" << endl;
        break;
    case NGUYEN_QUANG_HAI:
        cout << "Ho va ten: Nguyen Quang Hai, Sinh nhat: 12/04/1997, Vi tri: Tien ve phai, Que quan: Ha Noi" << endl;
        break;
    case LUONG_XUAN_TRUONG:
        cout << "Ho va ten: Luong Xuan Truong, Sinh nhat: 28/04/1995, Vi tri: Tien ve TT, Que quan: Tuyen Quang" << endl;
        break;
    case PHAN_VAN_DUC:
        cout << "Ho va ten: Phan Van Duc, Sinh nhat: 11/04/1996, Vi tri: Tien ve canh, Que quan: Nghe An" << endl;
        break;
    case PHAM_XUAN_MANH:
        cout << "Ho va ten: Pham Xuan Manh, Sinh nhat: 09/02/1996, Vi tri: Hau ve trai, Que quan: Nghe An" << endl;
        break;
    case NGUYEN_CONG_PHUONG:
        cout << "Ho va ten: Nguyen Cong Phuong, Sinh nhat: 21/02/1995, Vi tri: Tien dao, Que quan: Nghe An" << endl;
        break;
    case HA_DUC_CHINH:
        cout << "Ho va ten: Ha Duc Chinh, Sinh nhat: 22/09/1997, Vi tri: Tien dao, Que quan: Phu Tho" << endl;
        break;
    case NGUYEN_VAN_TOAN:
        cout << "Ho va ten: Nguyen Van Toan, Sinh nhat: 12/04/1996, Vi tri: Tien dao, Que quan: Hai Duong" << endl;
        break;
    case BUI_TIEN_DUNG_3:
        cout << "Ho va ten: Bui Tien Dung, Sinh nhat: 23/11/1998, Vi tri: Tien ve, Que quan: Thanh Hoa" << endl;
        break;
    case NGUYEN_THANH_CHUNG:
        cout << "Ho va ten: Nguyen Thanh Chung, Sinh nhat: 08/09/1997, Vi tri: Tien ve, Que quan: Tuyen Quang" << endl;
        break;
    case NGUYEN_PHONG_HONG_DUY:
        cout << "Ho va ten: Nguyen Duy Hong Phong, Sinh nhat: 13/06/1996, Vi tri: Tien ve, Que quan: Binh Phuoc" << endl;
        break;
    default:
        cout << "Khong co cau thu nay" << endl;
    }
    return 0;
}
