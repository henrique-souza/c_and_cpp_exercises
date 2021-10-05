/*DECLARE pre, valor_adic, imposto NUMÉRICO (float)
pre_custo, desconto, novo_pre NUMÉRICO (float)
tipo, refrig LITERAL (char)
LEIA pre, tipo, refrig
SE refrig = “N”
ENTÃO INÍCIO
SE tipo = “A”
ENTÃO INÍCIO
SE pre < 15
ENTÃO valor_adic ← 2
SENÃO valor_adic ← 5
FIM
SE tipo = “L”
ENTÃO INÍCIO
SE pre < 10
ENTÃO valor_adic ← 1,50
SENÃO valor_adic ← 2,50
FIM
SE tipo = “V”
ENTÃO INÍCIO
SE pre < 30
ENTÃO valor_adic ← 3
SENÃO valor_adic ← 2,5
FIM
FIM
SENÃO INÍCIO
SE tipo = “A”
ENTÃO valor_adic ← 8
SE tipo = “L”
ENTÃO valor_adic ← 0
SE tipo = “V”
ENTÃO valor_adic ← 0
FIM
ESCREVA valor_adic
SE pre < 25
ENTÃO imposto ← 5/100 * pré
SENÃO imposto ← 8/100 * pre
ESCREVA imposto
pre_custo ← pre + imposto
ESCREVA pre_custo
SE tipo ≠ “A” E refrig ≠ “S”
ENTÃO desconto ← 3/100 * pre_custo
SENÃO desconto ← 0
ESCREVA desconto
novo_pre ← pre_custo + valor_adic – desconto
ESCREVA novo_pre
SE novo_pre <= 50
ENTÃO ESCREVA “Barato”
SENÃO SE novo_pre < 100
ENTÃO ESCREVA “Normal”
SENÃO ESCREVA “Caro”
FIM_ALGORITMO.*/