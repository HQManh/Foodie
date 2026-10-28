// rea decompile_all
// name: System.Text.Encoding.EncodingCharBuffer$$Fallback
// address: 0x7450d88
// body: available
// range: 0x7450d88-0x7450e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7450e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Text_Encoding_EncodingCharBuffer__Fallback(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x58);
  if (lVar5 == 0) {
    if (plVar3 != (long *)0x0) {
      iVar1 = *(int *)(param_1 + 0x28);
      iVar2 = (**(code **)(*plVar3 + 0x1c8))
                        (plVar3,param_2,*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(*plVar3 + 0x1d0));
      iVar2 = iVar2 + iVar1;
LAB_07450e10:
      *(int *)(param_1 + 0x28) = iVar2;
      return 1;
    }
  }
  else if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,param_2,*(undefined8 *)(param_1 + 0x50),(long *)(param_1 + 0x10),
                       *(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar4 & 1) != 0) {
      uVar4 = *(long *)(param_1 + 0x10) - lVar5;
      if ((long)uVar4 < 0) {
        uVar4 = uVar4 + 1;
      }
      iVar2 = *(int *)(param_1 + 0x28) + (int)(uVar4 >> 1);
      goto LAB_07450e10;
    }
    if (param_2 != 0) {
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) - (long)*(int *)(param_2 + 0x18);
      if (*(long *)(param_1 + 0x58) != 0) {
        System_Text_DecoderFallbackBuffer__InternalReset(*(long *)(param_1 + 0x58),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          System_Text_Encoding__ThrowCharsOverflow
                    (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18));
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

