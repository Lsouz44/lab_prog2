#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[100];
    int matricula;
    float nota;
};

struct Aluno maiorNota(struct Aluno alunos[], int tam) {
    struct Aluno aluno_maiorNota = alunos[0];
    for (int i = 1; i < tam; i++) {
        if(alunos[i].nota > aluno_maiorNota.nota) {
            aluno_maiorNota = alunos[i];
        }
    }
    return aluno_maiorNota;
}

struct Aluno menorNota(struct Aluno alunos[], int tam) {
    struct Aluno aluno_menorNota = alunos[0];
    for (int i = 1; i < tam; i++) {
        if(alunos[i].nota < aluno_menorNota.nota) {
            aluno_menorNota = alunos[i];
        }
    }
    return aluno_menorNota;
}

int main(){
    int numAlunos;
    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    struct Aluno alunos[numAlunos];
    
    for (int i=0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    struct Aluno alunoMaior = maiorNota(alunos, numAlunos);
    printf("\nAluno com maior nota:\n");
    printf("Nome: %s\n", alunoMaior.nome);
    printf("Matricula: %d\n", alunoMaior.matricula);
    printf("Nota: %.2f\n", alunoMaior.nota);

    struct Aluno alunoMenor = menorNota(alunos, numAlunos);
    printf("\nAluno com menor nota:\n");
    printf("Nome: %s\n", alunoMenor.nome);
    printf("Matricula: %d\n", alunoMenor.matricula);
    printf("Nota: %.2f\n", alunoMenor.nota);

    return 0;   
}
