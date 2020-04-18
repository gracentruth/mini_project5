#include "manager.h"



void listProduct(Product *p[],int count){
  
    for(int i=0;i<count;i++){
        if(p[i]->gram!=0){
            printf("%10s %6d %6d %6d %6d\n",p[i]->name,p[i]->gram,p[i]->price,p[i]->sprice,p[i]->star);
        }
    }
}
int selectDataNo(Product *p[],int count){
    int no;
    listProduct(p,count);
    printf("번호는?(취소:0)");
    scanf("%d",&no);
    return no-1;
}
void searchName(Product *p[], int count){
    int pcount=0;
    char search[50];

    printf("검색할 메뉴?");
    getchar();
    scanf("%[^\n]s",search);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(strstr(p[i]->name,search)){
       if(pcount==0) printf("과자정보\n======================================\n");
    readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
void searchPrice(Product *p[], int count){
    int pcount=0;
    int searchprice;

    printf("검색할 메뉴?");
    getchar();
    scanf("%d",&searchprice);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(p[i]->price==searchprice){
        if(pcount==0) printf("과자정보\n======================================\n");
   readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
void searchSprice(Product *p[], int count){
    int pcount=0;
    int searchsprice;

    printf("검색할 메뉴?");
    getchar();
    scanf("%d",&searchsprice);

    for(int i=0; i<count;i++){
        if(p[i]->gram!=-1){
            if(p[i]->sprice==searchsprice){
                if(pcount==0) printf("과자정보\n======================================\n");
    readProduct(*p[i]);
    pcount++;
            }
        }
    }
    if(pcount==0)printf("=>검색된 데이터 없음!");
    printf("\n");
}
