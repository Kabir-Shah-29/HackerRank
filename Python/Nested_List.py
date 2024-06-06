'''
Nested Lists

link : https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true
'''

if __name__ == '__main__':
    students=[]
    second_lowest_grade=[]
    grades=set()
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
        grades.add(score)
        
second_lowest=sorted(grades)[1]
  
for name, score in students:
    if score == second_lowest:
        second_lowest_grade.append(name)

for name in sorted(second_lowest_grade):
    print(name, end='\n')
