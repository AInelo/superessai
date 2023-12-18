def fibonacci(n):
    if n <= 0:
        return "Entrez un entier positif pour calculer la suite de Fibonacci."
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib_sequence = [0, 1]
        while len(fib_sequence) < n:
            fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
        return fib_sequence
# 
# Exemple d'utilisation
n = 10
resultat = fibonacci(n)
print(f"Les {n} premiers termes de la suite de Fibonacci sont : {resultat}")
