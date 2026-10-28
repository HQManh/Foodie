// rea decompile_all
// name: System.Collections.Hashtable$$Clear
// address: 0x755df70
// body: available
// range: 0x755df70-0x755e043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755e00c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e040 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable__Clear(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  thunk_FUN_03f6a5cc();
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if (lVar3 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar4) {
        iVar1 = *(int *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f6a5cc();
        thunk_FUN_03f6a5cc();
        *(int *)(param_1 + 0x28) = iVar1 + 1;
        thunk_FUN_03f6a5cc();
        *(undefined1 *)(param_1 + 0x2c) = 0;
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_0755e040:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      puVar2 = (undefined8 *)(lVar3 + lVar5 + 0x20);
      *puVar2 = 0;
      *(undefined4 *)(lVar3 + lVar5 + 0x30) = 0;
      thunk_FUN_03f5d7b8(puVar2,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0755e040;
      lVar3 = lVar3 + lVar5;
      lVar5 = lVar5 + 0x18;
      uVar4 = uVar4 + 1;
      puVar2 = (undefined8 *)(lVar3 + 0x28);
      *puVar2 = 0;
      thunk_FUN_03f5d7b8(puVar2,0);
      lVar3 = *(long *)(param_1 + 0x10);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

