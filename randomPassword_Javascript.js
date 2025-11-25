function generatePassword(length, includeUpper, includeLower, includeNum, includeSymbol){
    const lowerchar = "abcdefghiklmnopqrstuvwxyz";
    const upperchar = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const numChar = "0123456789";
    const symbolChar = "@!#$%^&*-_+=";

    let chars = "" ;
    let password = "" ;

    chars += includeLower ? lowerchar : "" ;
    chars += includeUpper ? upperchar : "" ;
    chars += includeNum ? numChar : "" ;
    chars += includeSymbol ? symbolChar : "" ;

    if(length <= 0){
        return '(password length invalid)';
    }

    if(chars.length === 0){
        return '(Kindly select one of the character types)';
    }

    for(let i = 0; i < length ; i++){
        const randomIndex = Math.floor(Math.random() * chars.length);
        password += chars[randomIndex];
    }
    return password;

}

const length = 12;
const includeUpper = true;
const includeLower = true;
const includeNum = true;
const includeSymbol = true;

const password = generatePassword(length, includeUpper, includeLower, includeNum, includeSymbol);

console.log(`Generated Password : ${password}`);