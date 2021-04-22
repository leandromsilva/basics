let valor 
console.log(valor) // não inicializada
// console.log(valor2) // não foi declarada
valor = null //ausência de valor
console.log(valor)
// console.log(valor.toString()) // erro

const produto = {}
console.log(produto.preco)
console.log(produto)

produto.preco = 3.00 
console.log(produto)

produto.preco = undefined // evitar de usar essa forma para limpar o valor (usar null ou 0 em caso de numeros)
console.log(!!produto.preco)
delete produto.preco // forma correta para remover o atributo 
console.log(produto)

produto.preco = null // sem preço
console.log(!!produto.preco)
console.log(produto)