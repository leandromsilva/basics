console.log(7 / 0) // em javascript a divisão por zero da como resultado o infinito

console.log('10' / 2) // a linguagem permite a operação de uma string desde que seja um número
console.log('3' + 2) // neste caso (soma) a string possui preferência, então o valor é concatenado
console.log('3' - 2) // a linguagem permite a operação de uma string desde que seja um número
console.log('3' * 2) // a linguagem permite a operação de uma string desde que seja um número

console.log('Legal!' * 2) // o resultado sai como not a number 
console.log(0.1 + 0.7) // para melhorar o desempenho o resultado não é 100% preciso
//console.log(10.toString()) não funciona
console.log((10).toString) // o valor entre parenteses é entendido como number
console.log((10.425).toFixed(2)) // o valor entre parenteses é entendido como number