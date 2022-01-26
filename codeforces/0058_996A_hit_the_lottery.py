def hit_the_lottery(coin_denoms, money):
    copy_money = money
    answer = 0
    while copy_money > 0:
        for i, bill in enumerate(coin_denoms):
            if i < len(coin_denoms) - 1:
                if bill <= copy_money and coin_denoms[i + 1] > copy_money:
                    # print(bill)
                    answer += 1
                    copy_money -= bill
            else:
                if bill <= copy_money:
                    # print(bill)
                    answer += 1
                    copy_money -= bill
    return answer

coin_denoms = [1, 5, 10, 20, 100]
money = int(input())
print(hit_the_lottery(coin_denoms, money))
