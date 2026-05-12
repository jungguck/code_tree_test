def get_grade(n):
    
    if n>= 90:
        print("A", end = " ")
    elif n>=80:
        print("B", end = " ")
    elif n>=70:
        print("C", end = " ")
    elif n>=60:
        print("D", end = " ")
    else:
        print("F", end = " ")


n = int(input())


for score in range(n,101):

    get_grade(score)
    

