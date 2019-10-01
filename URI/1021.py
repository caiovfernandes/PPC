x = float(input())
x = x*1000
x = int(x)
cem = 0
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
dois = 0
um = 0
cinquenta_cent = 0
vintecinco_cent = 0
dez_cent = 0
cinco_cent = 0
um_cent = 0

while x >= 100000:
    x -= 100000
    cem += 1
while x >= 50000:
    x -= 50000
    cinquenta += 1
while x >= 20000:
    x -= 20000
    vinte += 1
while x >= 5000:
    x -= 5000
    cinco += 1
while x >= 10000:
    x -= 10000
    dez += 1
while x >= 2000:
    x -= 2000
    dois += 1
while x >= 1000:
    x -= 1000
    um += 1
while x >= 500:
    x -= 500
    cinquenta_cent += 1
while x >= 250:
    x -= 250
    vintecinco_cent += 1

while x >= 100:
    x -= 100
    dez_cent += 1


while x >= 50:
    x -= 50
    cinco_cent += 1


while (x >= 10 or x > 0):
    x -= 10
    um_cent += 1


print("NOTAS:")
print(cem, "nota(s) de R$ 100.00")
print(cinquenta, "nota(s) de R$ 50.00")
print(vinte, "nota(s) de R$ 20.00")
print(dez, "nota(s) de R$ 10.00")
print(cinco, "nota(s) de R$ 5.00")
print(dois, "nota(s) de R$ 2.00")
print("MOEDAS:")
print(um, "moeda(s) de R$ 1.00")
print(cinquenta_cent, "moeda(s) de R$ 0.50")
print(vintecinco_cent, "moeda(s) de R$ 0.25")
print(dez_cent, "moeda(s) de R$ 0.10")
print(cinco_cent, "moeda(s) de R$ 0.05")
print(um_cent, "moeda(s) de R$ 0.01")
