
#include "product.h"


int selectMenu(){
    int menu;
    printf("\n*** 과자 관리 프로그램 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);

    return menu;
}
int readProduct(Product p){
    // printf("이름    중량 가격 표준가격 별점\n");
    
    printf("%6s %6d %6d %6d %6d\n",p.name,p.gram,p.price,p.sprice,p.star);
    return 0;
}
   

int createProduct(Product *p){
    printf("제품의 이름은?");
    getchar();
    scanf("%[^\n]s",p->name);
    printf("제품의 중량은?");
    scanf("%d",&p->gram);
    printf("제품의 가격?");
    scanf("%d",&p->price); 
    printf("제품의 표준가격은?");
    scanf("%d",&p->sprice);
    printf("제품의 별점수는?(1~5)");
    scanf("%d",&p->star);
return 1;
} // 제품을 추가하는 함수
void deleteProduct(Product *p){
   p->gram=-1;
   p->price=-1;
   p->sprice=-1;
   p->star=-1;

}
    //하나의 제품을 삭제하는 함수
void updateProduct(Product *p){

    printf("제품의 이름은?");
    getchar();
    scanf("%[^\n]s",p->name);
    printf("제품의 중량은?");
    scanf("%d",&p->gram);
    printf("제품의 가격?");
    scanf("%d",&p->price); 
    printf("제품의 표준가격은?");
    scanf("%d",&p->sprice);
    printf("제품의 별점수는?(1~5)");
    scanf("%d",&p->star);
}   //하나의 제품을 수정하는 함수


