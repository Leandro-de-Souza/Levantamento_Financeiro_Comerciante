
N = int(input("Serao digitados dados de quantos produtos? "))

nomes = [0 for x in range(N)]
pcompra = [0 for x in range(N)]
pvenda = [0 for x in range(N)]

for i in range(0, N):
    print(f"Produto {i + 1}:")
    nomes[i] = input("Nome: ")
    pcompra[i] = float(input("Preco de compra: "))
    pvenda[i] = float(input("Preco de venda: "))

abaixo = 0
entre = 0
acima = 0

for i in range(0, N):
    lucro = pvenda[i] - pcompra[i]
    perlucro = lucro * 100 / pcompra[i]

    if perlucro < 10:
        abaixo = abaixo + 1
    elif perlucro <= 20:
        entre = entre + 1
    else:
        acima = acima + 1

totcompra = 0
totvenda = 0

for i in range(0, N):
    totcompra = totcompra + pcompra[i]
    totvenda = totvenda + pvenda[i]

totlucro = totvenda - totcompra

print()
print("RELATORIO:")
print(f"Lucro abaixo de 10%: {abaixo}")
print(f"Lucro entre 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {acima}")
print(f"Valor total de compra: {totcompra:.2f}")
print(f"Valor total de venda: {totvenda:.2f}")
print(f"Lucro total: {totlucro:.2f}")


