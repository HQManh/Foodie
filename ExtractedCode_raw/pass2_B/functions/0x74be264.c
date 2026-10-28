// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectMapInfo$$isCompatible
// address: 0x74be264
// body: available
// range: 0x74be264-0x74be383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74be37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74be380 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_Formatters_Binary_ObjectMapInfo__isCompatible
          (long param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x14) == param_2) {
    if (0 < param_2) {
      lVar6 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x18);
        if (lVar2 == 0) {
LAB_074be37c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = (uint)lVar6;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_074be380:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_3 == 0) goto LAB_074be37c;
        if (*(uint *)(param_3 + 0x18) <= uVar5) goto LAB_074be380;
        lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_074be37c;
        uVar1 = System_String__Equals(lVar2,*(undefined8 *)(param_3 + 0x20 + lVar6 * 8),0);
        if ((uVar1 & 1) == 0) goto LAB_074be35c;
        if (param_4 != 0) {
          lVar2 = *(long *)(param_1 + 0x20);
          if (lVar2 == 0) goto LAB_074be37c;
          if ((*(uint *)(lVar2 + 0x18) <= uVar5) || (*(uint *)(param_4 + 0x18) <= uVar5))
          goto LAB_074be380;
          uVar4 = *(undefined8 *)(param_4 + 0x20 + lVar6 * 8);
          uVar3 = *(undefined8 *)(lVar2 + lVar6 * 8 + 0x20);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Type__op_Inequality(uVar3,uVar4,0);
          if ((uVar1 & 1) != 0) goto LAB_074be35c;
        }
        lVar6 = lVar6 + 1;
      } while (param_2 != (int)lVar6);
    }
    uVar3 = 1;
  }
  else {
LAB_074be35c:
    uVar3 = 0;
  }
  return uVar3;
}

