# Arquivo Makefile responsável pela compilação e execucação correta no run.codes
# NÃO modifique este arquivo
#
# Caso deseje testar localmente sua implementação, execute o seguinte comando:
# gcc -Wall main.c nutri.c -o exercicio2

all: main.o nutri.o
	@gcc main.o nutri.o -o exercicio2
main.o: main.c
	@gcc main.c -c
nutr.o:	nutri.c nutri.h
	@gcc nutri.c -c
run:
	-@./exercicio2
