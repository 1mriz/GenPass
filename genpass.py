import random
up = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
low = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
sym = ['~','@','#','$','%','^','&',']','*','(',')',':',';','{','[','|','?','/','>']
num = ['0','1','2','3','4','5','6','7','8','9']
password = (
    [random.choice(sym) for _ in range(4)] +
    [random.choice(low) for _ in range(4)] +
    [random.choice(up) for _ in range(4)] +
    [random.choice(num) for _ in range(4)]
)
random.shuffle(password)
print(f"Generated password: {''.join(password)}")
