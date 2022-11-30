import math

//not solved yet
countries = [input() for i in range(16)]
probability = [(list((map(lambda num: float(num)/100, input().split())))) for i in range(16)]

print(countries)
print(probability)
