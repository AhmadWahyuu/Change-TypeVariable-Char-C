#include <stdio.h>


typedef char kata[50];
struct data{
	kata nama;
	kata npm;
	kata jurusan;
	kata fakultas;
};
void input(){
	struct data A;
	printf("nama:");gets(A.nama);
	fflush(stdin);
	printf("npm:");scanf("%s",&A.npm);
	fflush(stdin);
	printf("jurusan:");gets(A.jurusan);
	fflush(stdin);
	printf("fakultas:");gets(A.fakultas);
}
void output(){
	struct data A;
	printf("nama:%s\n",A.nama);
	printf("npm:%s\n",A.npm);
	printf("jurusan:%s\n",A.jurusan);
	printf("fakultas:%s\n",A.fakultas);
}
int main(){
	input();
	output();
}
