// rea decompile_all
// name: FUN_04023708
// address: 0x4023708
// body: available
// range: 0x4023708-0x40237c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40237c4 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04023708(ulong *param_1,wchar_t *param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined4 *__dest;
  
  sVar2 = wcslen(param_2);
  if (sVar2 < 0x3ffffffffffffff0) {
    if (sVar2 < 5) {
      __dest = (undefined4 *)((long)param_1 + 4);
      *(char *)param_1 = (char)((int)sVar2 << 1);
      if (sVar2 == 0) {
        *__dest = 0;
        return;
      }
    }
    else {
      if (0x3ffffffffffffffe < (sVar2 | 3)) goto LAB_040237c4;
      uVar1 = (sVar2 | 3) + 1;
      __dest = operator_new(uVar1 * 4);
      param_1[1] = sVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
    }
    memmove(__dest,param_2,sVar2 << 2);
    __dest[sVar2] = 0;
    return;
  }
  FUN_03fe3950(param_1);
LAB_040237c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f650f4();
}

