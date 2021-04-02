let ativo = true
console.log(ativo)

ativo = false 
console.log(ativo)

ativo = 1 // se for para o console.log sem negação ou negação dupla ele é entendedido como number
console.log(!ativo) // ao utilizar uma negação a lógia é invertida
console.log(!!ativo) // ao utilizar duas negações sai o resultado original em booleano

console.log('Verdadeiros:') 
console.log(!!3) // dupla negação verifica se o valor inicial é true ou false
console.log(!!-1)
console.log(!!' ')
console.log(!!'teste')
console.log(!![])
console.log(!!{})
console.log(!!Infinity)
console.log(!!(ativo = true)) // ele pega o valor que foi atribuido a variável, não se a operação deu certo

console.log('Falsos:') 
console.log(!!0)
console.log(!!'')
console.log(!!null)
console.log(!!NaN)
console.log(!!undefined)
console.log(!!(ativo = false))

console.log('Buscando o primeiro valor verdadeiro:') 
console.log('' || null || 0 || 1 || 2 || 3)
console.log(!!('' || null || 0 || 1 || 2 || 3))

let nome = ''
console.log(nome || 'Desconhecido') // imprime desconhecido caso a variável nome seja vazia