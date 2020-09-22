import random

print(".......Starting the game......\n\n")

count=0
user_score=0
comp_score=0

while(count<10):
	n=int(input("1 for Snake, 2 for Water and 3 for Gun: "))
	count=count+1
	list=["Snake","Water","Gun"]
	choice=random.choice(list)
	if choice=="Snake":
		if n==1:
			print("It's a Tie.")
			user_score=user_score+0
			comp_score=comp_score+0
		elif n==2:
			print("You Lost.")
			user_score=user_score+0
			comp_score=comp_score+1
		elif n==3:
			print("You Won.")
			user_score=user_score+1
			comp_score=comp_score+0	
		else:
			print("Invalid input.. Try Again!\n")	

	elif choice=="Water":
		if n==1:
			print("You Won.")
			user_score=user_score+1
			comp_score=comp_score+0
		elif n==2:
			print("It's a Tie.")
			user_score=user_score+0
			comp_score=comp_score+0
		elif n==3:
			print("You Lost.")
			user_score=user_score+0
			comp_score=comp_score+1	
		else:
			print("Invalid input.. Try Again!\n")	

	else :
		if n==1:
			print("You Lost.")
			user_score=user_score+0
			comp_score=comp_score+1
		elif n==2:
			print("You Won.")
			user_score=user_score+1
			comp_score=comp_score+0
		elif n==3:
			print("It's a Tie.")
			user_score=user_score+0
			comp_score=comp_score+0	
		else:
			print("Invalid input.. Try Again!\n")

print(f"\n\nYour score is {user_score} and Computer's score is {comp_score}\n")

if user_score>comp_score:
	print("Congratulatios you won the seires...")
elif user_score<comp_score:
	print("You Lost.. Hard Luck.. Better Luck next time..")
else:
	print("This seires is a Tie. Both played well.")

print("\n\nThank you for playing.... Come Again...")								