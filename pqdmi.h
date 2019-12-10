#include<cstdio>                // printf

void _display_bar(int current, int total) {
    int perc_done = (100.0 * (float)((float)current / (float)total));
    int dashes_to_display = ((float)perc_done / 100.0) * 80;
    printf("\r");
    for (int iter_dashes = 0; iter_dashes < 80; iter_dashes++) {
      printf(" ");
    }
    printf("\r[");
    for (int iter_dashes = 0; iter_dashes < dashes_to_display; iter_dashes++) {
      printf("=");
    }
    printf(">");
    for (int iter_dashes = 0; iter_dashes < (80 - dashes_to_display); iter_dashes++) {
      printf(" ");
    }
    printf("]%3.d%%", perc_done);
    fflush(stdout);

    if (current == total) {
        printf("\nfinished: %d/%d\n", current, total);
    }
}
