tuple=[()]
acc_no=int(input("enter account no:"))
acc_name=input("enter the name:")
pan_no=int(input("enter the pan number:"))
dob=input("enter the dob:")
email=input("enter the email:")
phone_no=int(input("enter the phone no:"))
address=input("enter the address:")
current_balance=float(input("current balance:"))

bank_account_data=[(acc_no,acc_name,pan_no,dob),email,phone_no,address,current_balance]

print(bank_account_data)