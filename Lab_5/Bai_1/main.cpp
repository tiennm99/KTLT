#include <iostream>

#define MAX 100

using namespace std;

typedef struct
{
    string ten;
    int do_phan_giai[2];
    int mau_sac;
    int toc_do;
    int bo_nho;
} may_in;
typedef struct
{
    string ten;
    float kt_mieng[2];
    float kt_15_phut[4];
    float kt_45_phut[2];
    float kt_hoc_ky;
} mon_hoc;
typedef struct
{
    string ten;
    string nguoi_quan_ly;
    string loai_doanh_nghiep;
    float doanh_thu;
} doanh_nghiep;
typedef struct
{
    string ten;
    string ho;
    string noi_phan_bo;
    string thuc_an;
} con_chim;

int main()
{
    may_in mayin[MAX];
    mon_hoc monhoc[MAX];
    doanh_nghiep doanhnghiep[MAX];
    con_chim conchim[MAX];
    mayin[0] =
    {
        .ten = "HP",
        .do_phan_giai = {600, 600},
        .mau_sac = 4,
        .toc_do = 16,
        .bo_nho = 64
    };
    monhoc[0] =
    {
        .ten = "Toan",
        .kt_mieng = {9, 10},
        .kt_15_phut = {9.5, 10, 8.5, 10},
        .kt_45_phut = {9.25, 9.75},
        .kt_hoc_ky = 9
    };
    doanhnghiep[0] =
    {
        .ten = "VinGroup",
        .nguoi_quan_ly = "Pham Nhat Vuong",
        .loai_doanh_nghiep = "Co Phan",
        .doanh_thu = 65100
    };
    conchim[0] =
    {
        .ten = "Dieu hau dai bang",
        .ho = "Accipitridae",
        .noi_phan_bo = "Chau Phi",
        .thuc_an = "thit"
    };
    cout << "May in 0:\tTen: " << mayin[0].ten << "\tDo phan giai: " << mayin[0].do_phan_giai[0] << " x " << mayin[0].do_phan_giai[1] << " dpi\tMau sac: " << mayin[0].mau_sac << "\tToc do: " << mayin[0].toc_do << " trang/phut\tBo nho: " << mayin[0].bo_nho << "MB" << endl;
    cout << "Mon hoc 0:\tTen: " << monhoc[0].ten << "\tMieng: " << monhoc[0].kt_mieng[0] << " " << monhoc[0].kt_mieng[1] << "\t15phut: " << monhoc[0].kt_15_phut[0] << " " << monhoc[0].kt_15_phut[1] << " " << monhoc[0].kt_15_phut[2] << " " << monhoc[0].kt_15_phut[3] << "\t45 phut: " << monhoc[0].kt_45_phut[0] << " " << monhoc[0].kt_45_phut[1] << "\tThi: " << monhoc[0].kt_hoc_ky << endl;
    cout << "Doanh nghiep 0:\tTen: " << doanhnghiep[0].ten << "\tNguoi quan ly: " << doanhnghiep[0].nguoi_quan_ly << "\tLoai doanh nghiep: " << doanhnghiep[0].loai_doanh_nghiep << "\tDoanh thu: " << doanhnghiep[0].doanh_thu << " ty dong" << endl;
    cout << "Con chim 0:\tTen: " << conchim[0].ten << "\tHo: " << conchim[0].ho << "\tNoi phan bo: " << conchim[0].noi_phan_bo << "\tThuc an: " << conchim[0].thuc_an << endl;
    may_in mayin1;
    mon_hoc monhoc1;
    doanh_nghiep doanhnghiep1;
    con_chim conchim1;
    mayin1 =
    {
        .ten = "Canon",
        .do_phan_giai = {4800, 600},
        .mau_sac = 6,
        .toc_do = 8,
        .bo_nho = 32
    };
    monhoc1 =
    {
        .ten = "Van",
        .kt_mieng = {7, 8},
        .kt_15_phut = {8.5, 9, 7.5, 8},
        .kt_45_phut = {7.5, 7},
        .kt_hoc_ky = 7
    };
    doanhnghiep1 =
    {
        .ten = "Hoang Anh Gia Lai",
        .nguoi_quan_ly = "Doan Nguyen Duc",
        .loai_doanh_nghiep = "Co Phan",
        .doanh_thu = 4521.9
    };
    conchim1 =
    {
        .ten = "Chim canh cut",
        .ho = "Sphenisciformes",
        .noi_phan_bo = "Chau Nam Cuc",
        .thuc_an = "ca"
    };
    mayin[1] = mayin1;
    monhoc[1] = monhoc1;
    doanhnghiep[1] = doanhnghiep1;
    conchim[1] = conchim1;
}
