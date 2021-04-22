const prod1 = {} // objeto um grupo de pares (chave : valor)
prod1.nome = 'Smartphone' // chave (nome) valor (Smartphone)
prod1.preco = 799.99
prod1['desconto mensal'] = 0.10 // evitar usar espaço em atributos

console.log(prod1)

const prod2 = {
    nome: 'Fone de ouvido',
    preco: 19.99,
    objeto: {
        ex: 'exemplo'
    }
}