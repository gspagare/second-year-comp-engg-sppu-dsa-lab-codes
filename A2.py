marks = []
global mark


def student_get():
    N = int(input("Enter Number of Students in SE Class : "))
    global marks
    for i in range(N):
        M = int(input("Enter the Marks ( Enter -1 if the student is absent ) : "))
        marks.append(M)
    print("Marks obtained by all students are", marks)


student_get()


def avg_marks():
    total = 0
    count = 0
    for i in range(len(marks)):
        if marks[i] != -1:
            total = total + marks[i]
            count += 1
    avg = total/count
    print("The Total Marks of All Students :", total)
    print("The Average Marks of All Students :", avg)


def maximum():
    Max = 0
    for i in range(0, len(marks)):
        if marks[i] == -1:
            continue
        if marks[i] > Max:
            Max = marks[i]
    print("The Maximum marks obtained is :", Max)


def minimum():
    Min = 100
    for i in range(0, len(marks)):
        if marks[i] == -1:
            continue
        if marks[i] < Min:
            Min = marks[i]
    print("The Minimum marks obtained is :", Min)


def students_absent():
    count = 0
    for i in range(len(marks)):
        if marks[i] == -1:
            count += 1
    print("The Number of Students Absent for Test is :", count)


def high_frequency():
    global mark
    i = 0
    Max = 0
    print("Marks  |  Frequency")
    for j in marks:
        if marks.index(j) == i:
            print(j, "    |  ", marks.count(j))
            if marks.count(j) > Max:
                Max = marks.count(j)
                mark = j
        i = i + 1
    print("The Marks,", mark, "has highest frequency", Max)


y = int(input("1 for Average Marks\n2 for Maximum Marks\n3 for Minimum Marks\n4 for Number of Students absent\n5 for Frequency of Marks\nEnter your Choice : "))
if y == 1:
    avg_marks()
elif y == 2:
    maximum()
elif y == 3:
    minimum()
elif y == 4:
    students_absent()
elif y == 5:
    high_frequency()
else:
    print("Please Enter Appropriate Choice")
