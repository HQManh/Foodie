// rea decompile_all
// name: std::__ndk1::to_string
// address: 0x3fe71d0
// body: available
// range: 0x3fe71d0-0x3fe73f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe73f0 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::to_string(long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long *in_x8;
  undefined1 *__dest;
  ulong __n;
  undefined1 local_44 [20];
  
  puVar5 = (undefined2 *)local_44;
  puVar4 = (undefined2 *)&stack0xffffffffffffffd0;
  if ((long)this < 0) {
    puVar5 = (undefined2 *)((ulong)puVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
  }
  if ((0x13 < (long)puVar4 - (long)puVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (this < *(__ndk1 **)(&UNK_023af6c0 + (ulong)uVar1 * 8))) + 1) <=
     (long)puVar4 - (long)puVar5)) {
    if ((ulong)this >> 0x20 == 0) {
      puVar4 = (undefined2 *)FUN_03fe9808(puVar5,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        puVar5 = (undefined2 *)FUN_03fe9808(puVar5,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      puVar4 = puVar5 + 5;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *puVar5 = *(undefined2 *)(&UNK_023af5f8 + ((ulong)this / 100000000) * 2);
      puVar5[1] = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar1 / 1000000) * 2);
      puVar5[2] = *(undefined2 *)(&UNK_023af5f8 + ((ulong)uVar2 / 10000) * 2);
      puVar5[3] = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar3 / 100) * 2);
      puVar5[4] = *(undefined2 *)(&UNK_023af5f8 + (ulong)(uVar3 % 100) * 2);
    }
  }
  __n = (long)puVar4 - (long)local_44;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      __dest = operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)__dest;
      *in_x8 = (__n | 0xf) + 2;
    }
    if ((undefined2 *)local_44 != puVar4) {
      memcpy(__dest,local_44,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118();
}

