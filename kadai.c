#include <stdio.h>
#include <math.h>
#define SUB_NUM 2
#define PERSON_NUM 20

int main(void){

    int i,j;
    char subjects[SUB_NUM][10] = {"理科", "英語"};
    int score[SUB_NUM][PERSON_NUM]={
        {65,80, 67, 35, 58, 60, 72, 75, 68, 92, 36, 50, 25, 85, 46, 42, 78, 62, 84, 70},
        {44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84}
    };
    float ave[SUB_NUM], std[SUB_NUM];
    float total[SUB_NUM];
    
    float sum=0;
    for(i=0;i<SUB_NUM;i++){
        sum=0.0;
        for(j=0;j<PERSON_NUM;j++)
            sum += score[i][j];
        
        ave[i] =sum/PERSON_NUM;
        total[i]=sum;
        
    }
   
    for(i=0;i<SUB_NUM;i++){
        sum=0.0;
        for(j=0;j<PERSON_NUM;j++)
            sum += (score[i][j] - ave[i])*(score[i][j] - ave[i]);
        
        std[i]=sqrt(sum / PERSON_NUM);
        
    }
    for(i=0;i<SUB_NUM;i++){
        printf("%s 平均点：%f 合計点:%f 標準偏差：%f\n",subjects[i],ave[i],total[i],std[i]);
    }

    printf("\n偏差値\n");
    for(i=0;i<PERSON_NUM;i++)
    {
        printf("No.%d",i+1);

        for(j=0;j<SUB_NUM;j++)
        {
            printf("　%s：%f",subjects[j],10*(score[j][i]-ave[j])/std[j]+50.0);
        }
        printf("\n");

    }
    
    printf("\n");
    
    for(int h=0;h<SUB_NUM;h++)
    {
        int tmp;
        for(i=0;i<PERSON_NUM;i++)
        {
            for(j=i+1;j<PERSON_NUM;j++)
            {
                if(score[h][i]<score[h][j])
                {
                    tmp=score[h][i];
                    score[h][i]=score[h][j];
                    score[h][j]=tmp;
                }
            }
        }
        
        printf("%sの点数の高い順：",subjects[h]);
        for(i=0;i<PERSON_NUM;i++)
        {
            printf("%d ",score[h][i]);
        }
        printf("\n");

    }
    
    
}
