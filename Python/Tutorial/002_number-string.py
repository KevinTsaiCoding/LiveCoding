" 數字運算 " # 註解

n=3+6 # 加法
print(n)
n1=3-6 # 減法
print(n1)
n2=3*6 # 乘法
print(n2)
n3=3**6 # 次方
print(n3)
n4=3/6 # 小數除法(取商)
print(n4)
n5=3//6 # 整數除法(取商)
print(n5)
n6=3%6 # 除法(取餘數)
print(n6)

" 字串運算 " # 註解

s="Hel\"lo" # 利用 \ 將字串加上你要的特殊功能，好比 \t,\n
print(s)
s2="Hi"+"Python" # 字串串接
print(s2)
s3="Hi" "Python" # 字串串接，Python"空白"也代表字串串接
print(s3)
print("Hello\nWorld") # \n 代表換行

" 字串會對內部字元編號(類似 C語言 陣列索引值)進行編號，"
" 第一個字元為編號 0 "

print(s3[2]) # 此時為陣列索引值 2
print(s3[2:4]) # 此時為陣列索引值 2~3，記住是 print(字串名稱[開頭索引值 : 結束索引值])
 # print(字串名稱[開頭索引值 : 結束索引值])'這個表示法包含開頭字元不包含結尾編號