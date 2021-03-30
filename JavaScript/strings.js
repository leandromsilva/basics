const nome = 'Cod3r'

console.log(nome.charAt(4)) // imprime o caractere na posição escolhida
console.log(nome.charAt(6)) // no javascript não gera erro, mas sim um valor vazio

console.log(nome.charCodeAt(3)) // valor da letra na tabela unicode

console.log(nome.indexOf('o')) // encontra a posição da letra dentro da string

console.log(nome.substring(1)) // mostra o valor da string na posição 1 até o final
console.log(nome.substring(0, 3)) // mostra o valor do indice 0  ao 3 da string

console.log('Escola '.concat(nome).concat('.')) // contatenando strings usando valor literal
console.log('Escola ' + nome + '.') // mesmo resultado 

console.log(nome.replace(/\d/, 'e')) // substitui todos os números pelo escolhido
console.log(nome.replace(/\w/g, 'e')) // subistitui todas a letras pela escolhida
console.log(nome.replace(3, 'e')) // substitui a letra na posição escolhida

console.log('Ana,Maria,Caio'.split(',')) // converte a string em um array de strings
console.log('Ana,Maria,Caio'.split(/,/)) // converte a string em um array de strings
