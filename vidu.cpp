#include<stdio.h>
#include<math.h>

void bt1(){
    int n;
    printf("Nhap so n: ");scanf("%d",&n);
    while (n <= 0 ){
        printf("Invalid input , vui long nhap lai :");
        scanf("%d",&n);
    }
    printf("Nhap n thanh cong ! ");
}
int bt2(){
    int n;
    printf("Nhap so n: ");scanf("%d",&n);
    while (n <= 0 ){
        printf("Invalid input , vui long nhap lai :");
        scanf("%d",&n);
    }
    int m ; 
    int tong=0;
    for(;n!=0;){
        m = n % 10;
        if ( m % 2 != 0 ){
            tong += m ;
        }
        n /= 10;
    }
    printf("%d ",tong);
}
void bt3(){
    int n;
    printf("Nhap so n: ");scanf("%d",&n);
    while (n <= 0 ){
        printf("Invalid input , vui long nhap lai :");
        scanf("%d",&n);
    }
    float tong1,tong2;
    for (int i = 1; i <=n ; i++){
        tong1 += sqrt(i - 1 + sqrt(i));
    }
    tong2 = sqrt(tong1);
    printf("%.5f ",tong2);
}
int main(){
    printf("Ho va ten: Nguyen Van A\nMa so sinh vien: 12345678\nLop: cntt_4\n");
        int key ; 
        int end_key;
        char check;
    do 
    {
        printf("Vui long chon chuong trinh ( 1, 2, 3):");
        scanf("%d", &key);
        switch(key){
            case 1 :{
                bt1();
                printf("\n");
                break;
            }
            case 2 :{
                bt2();
                printf("\n");
                break;
            }
            case 3 :{
                bt3();
                printf("\n");
                break;
            }
            case 4 :{
                default :
                break;
            }
        }
        fflush(stdin);
        printf("Ban co muon thuc hien chuong trinh tiep khong(y/n): ");
        scanf("%c", &check);
        while (check != 'y' && check != 'n') {
            printf("Input Valid. Vui long nhap lai: ");
            fflush(stdin);
            scanf("%c", &check);
        }

    } while (check == 'y');
    return 0;
}
