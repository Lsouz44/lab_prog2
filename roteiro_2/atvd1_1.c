#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numeroConta;
    double saldo;
    char titular[50];
} ContaBancaria;

void criarConta(ContaBancaria *c, int numero, char *titular) {
    c->numeroConta = numero;
    c->saldo = 0.0;
    strncpy(c->titular, titular, sizeof(c->titular));
    printf("Conta criada com sucesso.\n");
}

void depositar(ContaBancaria *c, double valor) {
    if (valor > 0) {
        c->saldo += valor;
        printf("Deposito de R$%.2lf realizado com sucesso.\n", valor);
    } else {
        printf("Valor de deposito invalido.\n");
    }
}

void sacar(ContaBancaria *c, double valor) {
    if (valor > 0 && valor <= c->saldo) {
        c->saldo -= valor;
        printf("Saque de R$%.2lf realizado com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente para saque ou valor invalido.\n");
    }
}

double consultarSaldo(ContaBancaria *c) {
    return c->saldo;
}

void imprimirInfo(ContaBancaria *c) {
    printf("\n*** Informacoes da conta ***\n");
    printf("Numero da conta: %d\n", c->numeroConta);
    printf("Titular: %s\n", c->titular);
    printf("Saldo: R$%.2lf\n", c->saldo);
}

int main() {
    ContaBancaria minhaConta;
    criarConta(&minhaConta, 202302, "Leandro Souza");

    depositar(&minhaConta, 5000.0);
    sacar(&minhaConta, 480.0);

    double saldoAtual = consultarSaldo(&minhaConta);
    printf("Saldo atual da conta: R$%.2lf\n", saldoAtual);
    imprimirInfo(&minhaConta);

    return 0;
}
