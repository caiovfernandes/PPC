x = float(input())


if(x > 0 and x <= 2000.00):
    print("Isento")

elif(x > 2000.00 and x <= 3000.00):
    x = x - 2000.00
    total_taxes = x * 0.080
    print("R$ %.2f" % total_taxes)

elif x > 3000.00 and x <= 4500.00:
    aux1 = x - 3000.00
    aux1 = aux1 * 0.18

    aux2 = x - 2000.00 - (x-3000.00)
    aux2 = aux2 * 0.08

    print("R$ %.2f" % (aux1 + aux2))

else:
    aux3 = x - 4500.00
    aux3 = aux3 * 0.28
    aux1 = x - 3000.00 - (x-4500)
    aux1 = aux1 * 0.18
    aux2 = x - 2000.00 - (x-3000.00)
    aux2 = aux2 * 0.08
    print("R$ %.2f" % (aux1 + aux2 + aux3))
