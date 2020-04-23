import calendar
days = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
a, b = map(int, input().split())
k = calendar.weekday(2007, a, b)
print(days[k])

# x, y = map(int, input().split())

# week = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
# month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
# day = 0

# for a in range(x-1):
#     day += month[a]
# day = (day + y) % 7

# print(week[day])
