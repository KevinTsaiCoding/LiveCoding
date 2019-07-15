# 集合的運算
" 集合書寫，用 { } 將你要的資料放去 "
# { } 代表集合，裡面數字(值)代表元素
s1={1,2,3}
print(1 in s1)
print(10 in s1)
print(10 not in s1)
s2={2,3,4}

" 數值集合開始 "
s3=s1&s2 # 交集:取集合中，相同的資料
print(s3)
s3=s1|s2 # 聯集: 取兩個集合中的所有資料，但不重複
print(s3)
s3=s1-s2 # 差集: 從 s1 中，減去和 s2 重疊部分
print(s3)
s3=s1^s2 # 反交集: 取兩個集合中，不重疊部分
print(s3)

" 字串集合開始 "
s=set("Hello") # set(字串)，自動將字串拆解成集合
print(s)
print("H" in s)
print("n" in s)
print("n" not in s)

" 字典運算: key-value 配對 " # dict = {key1 : value1, key2 : value2 }
dict={"apple":"蘋果","bug":"蟲蟲"}
print(dict["apple"])
# 判斷 key 是否存在
print("apple" in dict)
print("bugs" in dict)
print("bugs" not in dict)
# 刪除字典中的鍵值對
print("刪除字典中的鍵值對\n")
print("刪除前:")
print(dict)
print("刪除後:")
del dict["apple"]
print(dict)
print()


dic={i:i*2 for i in [3,4,5]}# dic={i:i*2 for i in 列表}
print(dic)
