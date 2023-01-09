board = input()
result = []

index = 0
Aboard = board.replace('XXXX', 'AAAA')
Bboard = Aboard.replace('XX', 'BB')

if Bboard.count('X') > 0:
    print('-1')
else:
    print(Bboard)


