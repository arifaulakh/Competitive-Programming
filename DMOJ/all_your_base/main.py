D, N = input().split(" ")
D = int(D)
N = int(N)
nums = input().split(" ")
nums.reverse()

def compute(base, num):
	result = 0
	str_num = str(num)
	len_num = len(str_num)
	str_copy = str_num[::-1]
	for i in range(0, len_num):
		S = int(str_copy[i])*(int(base)**i)
		result+=S
	return result
for i in range(1, N):
	if (len(nums)==1):
		break
	b = compute(nums[i-1], nums[i])
	nums[i] = b

B = nums[N-1]
print(compute(B,D))