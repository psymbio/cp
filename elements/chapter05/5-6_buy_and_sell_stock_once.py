def buy_sell(A):
    left, right = 0, len(A) - 1
    buy_price, sell_price = A[0], 0
    max_profit = float('-inf')
    while left < right:
        buy_price = min(A[left], buy_price)
        sell_price = A[left]
        max_profit = max(max_profit, sell_price - buy_price)
        left += 1
    print(max_profit)
        
A = [310, 315, 275, 295, 260, 270, 290, 230, 255, 250]
buy_sell(A)
