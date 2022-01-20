input_string = input()
input_string = input_string[1:-1]
# print(input_string)
splitted = input_string.split(", ")
splitted = set(splitted)
for i in splitted:
	if(i == ''):
		splitted.remove('')
print(len(splitted))
