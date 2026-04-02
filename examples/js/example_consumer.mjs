// `example` is what you pass to `-sEXPORT_NAME=...`.
import example from './output/module.mjs'

let m = await example()

m.SayHello();
console.log("value = ", m.Square(5));

let a = new m.A;

console.log("m.A.z", m.A.z);
console.log("m.A.w", m.A.w);

m.A.z = 100;
// m.A.w = 100;
console.log("m.A.z", m.A.z);
console.log("m.A.w", m.A.w);

console.log("a.x", a.x);
console.log("a.y", a.y);
a.x = 100;
// a.y = 100;
console.log("a.x", a.x);
console.log("a.y", a.y);

a.delete();
