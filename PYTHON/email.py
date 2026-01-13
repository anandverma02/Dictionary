email='anandvermaa02@gmail.com'
username,domain=email.split('@')
if username.islower()==1 and username.isalnum()==1:
    print('email is valid')
else:
    print('email is invalid')
