// `example` is what you pass to `-sEXPORT_NAME=...`.
import example from './output/module.mjs'

let m = await example()

m.SayHello();
console.log("value = ", m.Square(5));
