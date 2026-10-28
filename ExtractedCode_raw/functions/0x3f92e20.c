// rea decompile_all
// name: FUN_03f92e20
// address: 0x3f92e20
// body: available
// range: 0x3f92e20-0x3f92f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f92f70 to 0x3f65120 FUN_03f65120 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f92e20(ulong *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,long param_6
                 ,ulong param_7,void *param_8)

{
  byte *__src;
  void *__dest;
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (0x7fffffffffffffee - param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_03f65120(param_1);
  }
  __src = (byte *)((long)param_1 + 2);
  if ((*param_1 & 1) != 0) {
    __src = (byte *)param_1[2];
  }
  if (param_2 < 0x3fffffffffffffe7) {
    uVar2 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar2 = param_2 << 1;
    }
    lVar1 = 0xb;
    if (10 < uVar2) {
      lVar1 = (uVar2 | 7) + 1;
    }
  }
  else {
    lVar1 = 0x7fffffffffffffef;
  }
  auVar3 = FUN_03f65130(param_1,lVar1);
  __dest = auVar3._0_8_;
  if ((param_5 | 0x8000000000000000) != 0x8000000000000000) {
    memmove(__dest,__src,param_5 << 1);
  }
  if ((param_7 | 0x8000000000000000) != 0x8000000000000000) {
    memmove((void *)((long)__dest + param_5 * 2),param_8,param_7 << 1);
  }
  uVar2 = param_4 - (param_6 + param_5);
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    memmove((void *)((long)__dest + param_7 * 2 + param_5 * 2),__src + param_6 * 2 + param_5 * 2,
            uVar2 * 2);
  }
  if (param_2 != 10) {
    operator_delete(__src);
  }
  uVar2 = param_7 + param_5 + uVar2;
  *param_1 = auVar3._8_8_ | 1;
  param_1[1] = uVar2;
  param_1[2] = (ulong)__dest;
  *(undefined2 *)((long)__dest + uVar2 * 2) = 0;
  return;
}

