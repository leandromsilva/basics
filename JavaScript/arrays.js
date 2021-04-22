const valores = [6.7, 7.5, 8.6, 9.6]
console.log(valores[0], valores[3])
console.log(valores[5]) // por ser uma linguagem bem permissiva não ocorre erro

console.log(valores)

valores[4] = 9.8
console.log(valores)

console.log(valores.length)

valores[10] = 10 
console.log(valores) // o vetor é impresso e informa a quantidade de itens vazios

console.log(valores.length)

valores.push({id: 3}, false, null, 'teste') // javascript permite inserir valores de vários tipos no array
console.log(valores)

console.log(valores.pop())
delete valores[0]
console.log(valores)

console.log(typeof valores)