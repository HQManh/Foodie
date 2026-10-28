// rea decompile_all
// name: FUN_03fe2fdc
// address: 0x3fe2fdc
// body: available
// range: 0x3fe2fdc-0x3fe308f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe308c to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fe2fdc(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  if (param_3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (param_3 + 0x11 < 0x27) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(param_1);
    }
    uVar1 = param_3;
    if (param_3 < 0x2d) {
      uVar1 = 0x2c;
    }
    __dest = operator_new((uVar1 | 0xf) + 1);
    memcpy(__dest,param_2,param_3);
    param_1[1] = param_3;
    param_1[2] = (long)__dest;
    *param_1 = (uVar1 | 0xf) + 2;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}

