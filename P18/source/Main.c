#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out;
	char str[100];
	int cnt;
	in = fopen("D://程式設計//檔案//welcome.txt", "r");
	out = fopen("D://程式設計//檔案//ouput.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}