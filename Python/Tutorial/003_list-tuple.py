# 有序可變動列表 List (列表意思類似 C語言的陣列)
grades=[12,60,15,70,90]
print(grades[0])

# 變更列表裡的值, 把 55 放到列表中第一個位置

grades[0]=55
print(grades[0])

grades[1:4]=[] 

""" 列表名稱[?:!]=[] 意思是把 列表中第?個位子
    到第!個位子刪除 """
print(grades)

# 有序不可動列表 Tuple (列表意思類似 C語言的陣列)
data=(3,4,5)
print(data)
print('\n') # 換行
print(data[0:2])

"""
data[0]=5 錯誤: 資料不可變動
print(data)
"""

" Tuple 小括號，不可動動；List 中括號，可變動 "
