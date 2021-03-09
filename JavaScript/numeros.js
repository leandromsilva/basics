const peso = 2.0 
const peso2 = Number('3.0')

console.log(peso, peso2)
console.log(Number.isInteger(peso)) // verifica se o valor da variável é inteiro 
console.log(Number.isInteger(peso2))

const avaliacao = 8.5
const avaliacao2 = 9.0

const total = (avaliacao * peso) + (avaliacao2 * peso2) // algoritmo que tira media ponderada de duas avaliações
const media = total / (peso + peso2)

console.log(media.toFixed(2)) // valor da media com duas casas decimais
console.log(media.toString()) // valor da media em string
console.log(media.toString(2)) // valor da media em binário

console.log(typeof media)