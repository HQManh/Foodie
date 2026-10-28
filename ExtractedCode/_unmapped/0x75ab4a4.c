// rea decompile_all
// name: FUN_075ab4a4
// address: 0x75ab4a4
// body: available
// range: 0x75ab4a4-0x75ab5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ab5a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_075ab4a4(long param_1,long param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  if (DAT_09521c76 == '\0') {
    FUN_03f5c2a4(&DAT_09181358);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_09226fb8);
    DAT_09521c76 = '\x01';
  }
  if (*(char *)(*(long *)(DAT_09181358 + 0xb8) + 4) == '\0') {
    if ((param_2 == 0) || (plVar4 = *(long **)(param_2 + 0x78), plVar4 == (long *)0x0)) {
LAB_075ab5a0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (iVar3 == 3) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System___DTString__GetNext(param_1,0);
      if ((uVar5 & 1) != 0) {
        if (DAT_09226fb8 != 0) {
          sVar1 = *(short *)(param_1 + 0x14);
          sVar2 = System_String__get_Chars(DAT_09226fb8,0,0);
          if (sVar1 == sVar2) {
            return 1;
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          return 0;
        }
        goto LAB_075ab5a0;
      }
    }
  }
  return 0;
}

