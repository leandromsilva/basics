{
    {
        {
            var sera = 'Será?'
            console.log(sera)
        }
    }
}

console.log(sera) // a variável var pode ser utilizada de fora do escopo desde que naõa sejá de uma função

function teste() {
    var local = 123
    console.log(local)
}

teste()
// console.log(local) // erro local is not defined

var numero = 1 
{
    var numero = 2
    console.log("dentro", numero) 
}
console.log("fora", numero)