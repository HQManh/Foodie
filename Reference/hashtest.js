const names=[["Coffee.UIParticle.UIParticle",324551289],["UIParticleProjectSettings",-1440320657],["Coffee.UIParticle.UIParticleProjectSettings",-1440320657]];
const i32=x=>x|0;
function javaHash(s){let h=0;for(const c of s)h=(31*h+c.charCodeAt(0))|0;return h;}
function fnv1a(s){let h=0x811c9dc5;for(const c of s){h^=c.charCodeAt(0);h=Math.imul(h,0x01000193)>>>0;}return h|0;}
function fnv1(s){let h=0x811c9dc5;for(const c of s){h=Math.imul(h,0x01000193)>>>0;h^=c.charCodeAt(0);}return h|0;}
for(const [n,want] of names){console.log(n,"want",want,"java",javaHash(n),"fnv1a",fnv1a(n),"fnv1",fnv1(n));}
