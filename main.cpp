#include <stdio.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]){
	FILE *file1;
	FILE *file2;
	uint32_t hexnum1, hexnum2;
	
	file1 = fopen(argv[1], "rb");
	file2 = fopen(argv[2], "rb");
	fread(&hexnum1, sizeof(hexnum1), 1, file1);
	fread(&hexnum2, sizeof(hexnum2), 1, file2);
	hexnum1 = htonl(hexnum1);
	hexnum2 = htonl(hexnum2);
	
	//printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", hexnum1, hexnum1, hexnum2, hexnum2, hexnum1+hexnum2, hexnum1+hexnum2);
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", hexnum1, hexnum1, hexnum2, hexnum2, hexnum1+hexnum2, hexnum1+hexnum2);
	
	
	fclose(file1);
	fclose(file2);
}
