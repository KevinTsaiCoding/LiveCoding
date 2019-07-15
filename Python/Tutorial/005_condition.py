" 判斷式 if elif else。Python 3.6 不支援 switch "
score=int(input("輸入成績: "))
if score>60:
    print("You pass and got B")
elif score<100:
    print("You pass and got A")
else:
    print("You didn't pass and got C")

" 四則運算 "
n1=int(input("輸入第一個數字: "))
n2=int(input("輸入第二個數字: "))
op=input("輸入運算方式: +、-、*、/、%、//: ")
if op=="+":
    print(n1+n2)
elif op=="-":
    print(n1-n2)
elif op=="*":
    print(n1*n2)
elif op=="/":
    print(n1/n2)
elif op=="%":
    print(n1%n2)
else:
    print(n1//n2)
