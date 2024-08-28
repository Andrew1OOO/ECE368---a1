#include <stdio.h>
#include <stdlib.h>

void find_max_com(int cent_val, int * q, int * d, int * n, int * p);
void reduceCoin(int * q, int * d, int * n, int * p);
void print_all_comb(int cent_val, int * q, int * d, int * n, int * p);

int main (int argc, char* argv[]){


    if (argc != 1){
      return EXIT_FAILURE;
    }


    //int input_cent;
    
    //printf("Input: ");
    //scanf("%d", &input_cent);
    
    int q = 0;
    int d = 0;
    int n = 0; 
    int p = 0;

    find_max_com(8, &q, &d, &n, &p);
    print_all_comb(8, &q, &d, &n, &p);
    //printf("%d - %d - %d - %d\n", q, d, n, p);
  return EXIT_SUCCESS;
}

void find_max_com(int cent_val, int * q, int * d, int * n, int * p){

    if(cent_val == 0){
        printf("");
    }
    if(cent_val >= 25){
        *q += (cent_val / 25);
        find_max_com(cent_val % 25, q, d, n, p);
    }
    else if(cent_val >= 10){
        *d += (cent_val / 10);
        find_max_com(cent_val % 10, q, d, n, p);
    }
    else if(cent_val >= 5){
        *n += (cent_val / 5);
        find_max_com(cent_val % 5, q, d, n, p);
    }
    else if(cent_val >= 1){
        *p += (cent_val / 1);
        find_max_com(cent_val % 1, q, d, n, p);
    }
}

void print_all_comb(int cent_val, int * q, int * d, int * n, int * p){

    while(cent_val > *p){
        printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", *q, *d, *n, *p);
        reduceCoin(q, d, n, p);
    }
    printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", *q, *d, *n, *p);
}

void reduceCoin(int * q, int * d, int * n, int * p){

    if(*n >= 1){
        *p += 5;
        *n -= 1;
    }
    else if(*d >= 1){
        *n += 2;
        *d -= 1;
    }
    else if(*q >= 1){
        *d += 2;
        *n += 1;
        *q -= 1;
    }

}
