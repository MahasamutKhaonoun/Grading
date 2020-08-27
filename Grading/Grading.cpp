#include<stdio.h>

int main() {
	float col_score, mid_score, final_score,allscore;
	printf("Input Collect Score = ");
	scanf_s("%f", &col_score);
	
	if ((col_score>=0)&&(col_score<=30)) {
		printf("Input Midterm Score = ");
		scanf_s("\n%f", &mid_score);

		if ((mid_score >= 0) && (mid_score <= 30)) {
			printf("Input Final Score = ");
			scanf_s("\n%f", &final_score);

			if ((final_score >= 0) && (final_score <= 40)) {
				allscore = col_score + mid_score + final_score;
				if (allscore > 100) {
					printf("Error");
				}
				else if (allscore < 0) {
					printf("Error");
				}
				else if (allscore <= 49) {
					printf("F");
				}
				else if (allscore <= 54) {
					printf("D");
				}
				else if (allscore <= 59) {
					printf("D+");
				}
				else if (allscore <= 64) {
					printf("C");
				}
				else if (allscore <= 69) {
					printf("C+");
				}
				else if (allscore <= 74) {
					printf("B");
				}
				else if (allscore <= 79) {
					printf("B+");
				}
				else if (allscore <= 100) {
					printf("A");
				}
				else printf("Error");

			}else printf("Error");

		}else printf("Error");

	}else printf("Error");
	return 0;
}