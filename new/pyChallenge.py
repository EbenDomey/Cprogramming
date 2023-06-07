items_dict = {'a': 239.99, 'b': 129.75, 'c': 99.95, 'd': 350.89}

# quantityCost = 0
# #alternative 1

# # proceed = 'n'
# # while proceed == 'n':
# #     proceed = input('Do you want to add items?(Y/N) ').lower()
# #     match proceed:
# #         case 'y':
# #             userInput = input('Item sold: ')
# #             quantityInput = int(input('Number of item sold: '))
# #             quantityCost += (items_dict[userInput] * quantityInput)
# #         case 'n':
# #             break
# #     proceed = 'n'

# print('\t\t\tInput your particulars to estimate your pay\n\t\t\tSeparate items by comma\n')
# #alternative 2

# print('-'*100)
# userInput = input('Kind of items sold: ').replace(" ", "")
# userInput.split(',')
# quantityInput = input('Number of item sold: ').replace(" ", "")
# quantityValues = [int(a) for a in quantityInput.split(',')]
# i= 0
# for item in userInput:
#     if item != ',':
#         quantityCost += (items_dict[item] * quantityValues[i])
#         i += 1

# payPerWeek = 200 + (9/100*quantityCost)
# print(f"Your pay for this week is: ${payPerWeek}")
# print('-'*100)



