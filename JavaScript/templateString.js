const nome = 'Pedro'
const concatenacao = 'Olá ' + nome + '!' 
const template = `Olá ${nome}!` // template é uma forma mais simples de concaternar strings
console.log(concatenacao, template)

// expressão
console.log(`1 + 1 = ${1 + 1}`)

const up = text => text.toUpperCase() // criação de uma função que deixa todas as letras maiúsculas
console.log(`Ei... ${up(`cuidado`)}!`)