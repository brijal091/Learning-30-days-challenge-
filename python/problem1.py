li = []
no_ele = int(input("How many elemets you want? "))
for i in range(no_ele):
    ele = input(f"enter element {i}: ")
    li.append(ele)

print(min(li))
print(max(li))