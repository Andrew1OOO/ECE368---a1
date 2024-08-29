#include <stdio.h>
#include <stdlib.h>

void find_max_com(int cent_val, int * q, int * d, int * n, int * p);
void reduceCoin(int * q, int * d, int * n, int * p);
void print_all_comb(int cent_val, int * q, int * d, int * n, int * p);
void print_all_combination(int cent_val);

int main (){

    int input_cent;
    
    
    scanf("%d", &input_cent);
    

    print_all_combination(input_cent);
    //find_max_com(input_cent, &q, &d, &n, &p);
    //print_all_comb(input_cent, &q, &d, &n, &p);

  return EXIT_SUCCESS;
}

void print_all_combination(int cent_val){
    
    
    
    
    
    for(int q = cent_val / 25; q >= 0; q--){
        //printf("%d %d %d %d\n", q, d, n, p);
        for(int d = (cent_val - (q * 25)) / 10; d >= 0; d--){

            for(int n = n = (cent_val - (q * 25) - (d * 10)) / 5; n >= 0; n--){

                for(int p = p = (cent_val - (q * 25) - (d * 10) - (n*5)); p >= 0; p--){

                    if(((q * 25) + (d * 10) + (n*5) + p) == cent_val){
                        printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", q, d, n, p);
                    }
                }
            }
        }
    }
    
}
