student_list = []

for _ in range(int(input())):
    name = input()
    score = float(input())
    student_list.append([name, score])

student_list.sort(key = lambda s: s[1])
lowest_score = student_list[0][1]
second_lowest_score = None
second_lowest_student = []
for i in range(1, len(student_list)):
    if second_lowest_score is None:
        if lowest_score < student_list[i][1]:
            second_lowest_student.append(student_list[i][0])
            second_lowest_score = student_list[i][1]
    else:
        if student_list[i][1] == second_lowest_score:
            second_lowest_student.append(student_list[i][0])
        else:
            break

second_lowest_student.sort()
for student in second_lowest_student:
    print(student)