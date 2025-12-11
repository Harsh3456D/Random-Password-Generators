import random


def generatepassword(length,Includelowercase,Includeuppercase,Includedigits,Includesymbol):
    lowercase="abcdefghijklmnopqrstuvwxyz"
    uppercase="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    digits="0123456789"
    symbol="!@#$%^&*+=-_/"
    
    
    let_characters=""
    let_passwords=""


    if Includelowercase == True:
        let_characters += lowercase
        
    if Includeuppercase == True:
        let_characters += uppercase
        
    if Includedigits == True:
        let_characters += digits
        
    if Includesymbol == True:
        let_characters += symbol
        

    
    if length<=0:
        print('Kindly enter a valid value')
        
    if len(let_characters)==0:
        print( "kindly enter one of the character types")
           
    for i in range(length):
        randomIndex = random.randrange(len(let_characters))
        let_passwords += let_characters[randomIndex]
    
    print(let_passwords)
    
length = 9
Includelowercase = True
Includeuppercase = True
Includedigits = True
Includesymbol = True
generatepassword(length,Includelowercase,Includeuppercase,Includedigits,Includesymbol)