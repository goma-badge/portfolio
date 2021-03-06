#include <stdio.h>
#include <ctype.h>

void dump(FILE *src, FILE *dst) {
	int n;
	unsigned long count = 0; //unsigned int count = 0;
	unsigned char buf[16];

	while ((n = fread(buf, 1, 16, src)) > 0) {
		int i;
		fprintf(dst, "%08lX ", count);

		for (i = 0; i < n; i++) 
			fprintf(dst, "%02X ", (unsigned) buf[i]);

		if (n < 16)
			for (i = n; i < 16; i++) fputs("   ", dst); // three ' '

		for (i = 0; i < n; i++)
			fputc(isprint(buf[i]) ? buf[i] : '.',dst);
		fputc('\n', dst);

		count += 16;
	}
	fputc('\n', dst);
}

int main(int argc, char *argv[]){

	FILE *fp;

	if (argc < 2) 
		fputs("usage: command filename\n", stderr);
	else {
		while (--argc > 0) {
		 	if ((fp = fopen(*++argv, "rb")) == NULL) {
				fprintf(stderr, "Cannot file open:%s\n", *argv);
				return 1;
			} else {
				dump(fp, stdout);
				fclose(fp);
			}
		}
	}

	return 0;
}
