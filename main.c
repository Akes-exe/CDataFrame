#include <stdio.h>
#include <stdlib.h>
#include <cdataframe.h>
#include <double-linked-list.h>
#include <menu.h>


int main(){

    list* cdfs = lst_create_list();
    CDATAFRAME* cdf = get_first_node(cdfs);
    int nb_cdf = -1;
    MenuSection(cdf, cdfs, nb_cdf);

    /*
    COLUMN *mycol = create_column("Column 0");
    insert_value(mycol, 52);
    insert_value(mycol, 44);
    insert_value(mycol, 15);
    insert_value(mycol, 12);
    COLUMN *mycol2 = create_column("Column 1");
    insert_value(mycol2, 1);
    insert_value(mycol2, 2);
    insert_value(mycol2, 3);
    insert_value(mycol2, 15);
    COLUMN *mycol3 = create_column("Column 2");
    insert_value(mycol3, 0);
    insert_value(mycol3, 0);
    insert_value(mycol3, 1);
    insert_value(mycol3, 15);
    COLUMN *mycol4 = create_column("Column 3");
    insert_value(mycol4, 6);
    insert_value(mycol4, 6);
    insert_value(mycol4, 6);
    insert_value(mycol4, 15);
    COLUMN *mycol5 = create_column("Column 4");
    insert_value(mycol5, 7);
    insert_value(mycol5, 5);
    insert_value(mycol5, 42);
    insert_value(mycol5, 15);




    printf("Occurrences of 44: %d\n", count_occ(mycol, 44));
    printf("Value at position 1: %d\n", positionval(mycol, 1));
    printf("Values greater than 20: %d\n", valuegreater(mycol, 20));
    printf("Values less than 30: %d\n", valueless(mycol, 30));
    printf("Values equal to 44: %d\n", valuequal(mycol, 44));


    CDATAFRAME *cdf = create_cdataframe(5);
    printf("%d", add_column_cdf(cdf, mycol));
    printf("%d", add_column_cdf(cdf, mycol2));
    printf("%d", add_column_cdf(cdf, mycol3));
    printf("%d", add_column_cdf(cdf, mycol4));
    printf("%d", add_column_cdf(cdf, mycol5));
    printf("\n");


    print_rows_cdf(cdf, 2, 2);
    print_cols_cdf(cdf, 1, 2);
    print_cdf(cdf);
    print_columns_title(cdf);
    rename_column_cdf(cdf, 2, "Testtt");
    print_columns_title(cdf);


    print_cdf(cdf);
    int tab[5] = {1,2,3,4,5};
    add_row_cdf(cdf, tab, 2);
    print_cdf(cdf);
    delete_row_cdf(cdf, 2);
    print_cdf(cdf);


    print_cdf(cdf);
    search_value_cdf(cdf, 1000);


    print_cdf(cdf);
    access_and_replace_value_by_pos(cdf, 20, 1, 3);
    print_cdf(cdf);


    CDATAFRAME *cdff = load_from_csv("C:\\Users\\alban\\CLionProjects\\CDataFrame\\test_file_csv.csv",6);
    print_cdf(cdff);


    print_cdf(cdf);
    save_into_csv(cdf, "Test.csv");


    print_col(mycol);
    sort(mycol, 0);
    print_col_by_index(mycol);

    sort(mycol, 0);
    search_value_in_column(mycol, 44);
    */
    return 0;
}