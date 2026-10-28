// rea decompile_all
// name: FUN_03fe3d70
// address: 0x3fe3d70
// body: available
// range: 0x3fe3d70-0x3fe3e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe3e9c to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fe3d70(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  byte *__src;
  ulong uVar1;
  long lVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  
  uVar3 = 0x3fffffffffffffef;
  if (param_3 <= 0x3fffffffffffffef - param_2) {
    __src = (byte *)((long)param_1 + 4);
    if ((*param_1 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x1fffffffffffffe7) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      uVar3 = 5;
      if (4 < uVar1) {
        uVar3 = (uVar1 | 3) + 1;
      }
      if (uVar3 >> 0x3e != 0) goto LAB_03fe3e9c;
    }
    __dest = operator_new(uVar3 << 2);
    __n = param_5 * 4;
    if (param_5 != 0) {
      memmove(__dest,__src,__n);
    }
    lVar2 = param_4 - (param_6 + param_5);
    if (lVar2 != 0) {
      memmove((void *)((long)__dest + param_7 * 4 + __n),__src + param_6 * 4 + __n,lVar2 * 4);
    }
    if (param_2 != 4) {
      operator_delete(__src);
    }
    *param_1 = uVar3 | 1;
    param_1[1] = (param_4 - param_6) + param_7;
    param_1[2] = (ulong)__dest;
    return;
  }
  FUN_03fe3950(param_1);
LAB_03fe3e9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f650f4();
}

