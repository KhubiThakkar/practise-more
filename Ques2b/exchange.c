#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct info_t {
    char* name;
    char* email_id;
    char* git_link;
} info_t;

int main(){
    info_t *p1 = (info_t *)malloc(2*sizeof(info_t));
    p1->name = "abc";
    p1->email_id = "def";
    p1->git_link = "gh";
    (p1+1)->name = "mno";
    (p1+1)->email_id = "pqr";
    (p1+1)->git_link = "stu";

    printf("p1 = %s %s %s, p1+1 = %s %s %s\n",p1->name,p1->email_id,p1->git_link,(p1+1)->name,(p1+1)->email_id,(p1+1)->git_link);
    
    info_t temp;

    if(strcmp((p1+1)->name,p1->name)>0){
       
        temp = p1[0];

        p1[0] = p1[1];
        
        p1[1] = temp;
    }

    printf("p1 = %s %s %s, p1+1 = %s %s %s\n",p1->name,p1->email_id,p1->git_link,(p1+1)->name,(p1+1)->email_id,p1[1].git_link);

    free(p1);
    return 0;
}