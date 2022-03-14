//
// Created by LEE YUN JIN on 2022-03-10.
//

# include <iostream>



using namespace std;

int main(void) {
    int h, m, s, total, q, t, c;
    scanf("%d %d %d %d",&h,&m,&s,&q);
    total = 3600 * h + 60 * m + s;

    for (int i = 0; i < q; i++) {
        scanf("%d",&t);
        if (t == 3)
            printf("%d %d %d\n",total / 3600 ,(total / 60) % 60, total % 60);
        else if (t == 1) {
            scanf("%d",&c);
            total = (total + c) % 86400;
        } else {
            scanf("%d",&c);
            total = (total - c) % 86400;
            while (total < 0) {
                total += 86400;
            }
        }


    }

}