import re,sys
f,typ=sys.argv[1],sys.argv[2]
lines=open(f,encoding='utf-8',errors='ignore').read().split('\n')
out=[];i=0
while i<len(lines):
    l=lines[i]
    if l.strip()=='declaring_type: '+typ:
        # entry spans until next '    - token:'
        j=i+1;blk=[]
        while j<len(lines) and not lines[j].lstrip().startswith('- token:'):
            blk.append(lines[j]);j+=1
        d={}
        for b in blk:
            m=re.match(r'\s+(name|flags|kind|return_type|field_type|parameter_count|parameter_types):\s*(.*)',b)
            if m and m.group(1) not in d: d[m.group(1)]=m.group(2).strip().strip('"')
        acc={0:'compiler',1:'private',2:'famandassem',3:'internal',4:'protected',5:'famorassem',6:'public'}
        fl=int(d.get('flags','0'));a=acc.get(fl&7,'?')
        sig=d.get('field_type') or ('->'+str(d.get('return_type'))+' ('+str(d.get('parameter_count'))+' params)')
        out.append((d.get('kind','?'),a,d.get('name'),sig))
        i=j
    else: i+=1
for k,a,n,s in out: print(f'{k:7} {a:9} {n}  {s}')
print(len(out),'members')
