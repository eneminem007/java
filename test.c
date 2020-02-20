#include <stdio.h>
int main (){
    char name[30]="john";
    short age =15;
    float score=77;
    char gender='M';//男生
    char hobby[20]="篮球,足球";
    printf("姓名\t年龄\t成绩\t性别\t爱好\n%s\t%d\t%.2f\t%c\t%s",name,age,score,gender,hobby);
   
}
