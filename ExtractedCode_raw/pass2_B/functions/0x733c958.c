// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$RemoveUncollapsedLogEntry
// address: 0x733c958
// body: available
// range: 0x733c958-0x733ca8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ca8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__RemoveUncollapsedLogEntry(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0952065c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1ba0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0952065c = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x30) + -1;
    *(int *)(param_2 + 0x30) = iVar1;
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0x2d0) = 1;
    }
    if (*(char *)(param_1 + 500) == '\0') {
      if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733ca8c;
      lVar2 = FUN_070dd0c0(*(long *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x2d4),DAT_091a1ba0)
      ;
      if (lVar2 == param_2) {
        *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + 1;
      }
    }
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
      }
      else {
        *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + -1;
      }
    }
    else {
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + -1;
    }
    return;
  }
LAB_0733ca8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

