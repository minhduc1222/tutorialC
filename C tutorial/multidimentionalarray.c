#include <stdio.h>

int main()
{
    int matrix[2][3]={{2,3,4},{5,6,7}};

    int i, j;
    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("so do la:%d\n", matrix[i][j]);
            // ko dung return 0 vi se ket thuc ngay cau lenh

        }
    }
}