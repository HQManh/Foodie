// rea decompile_all
// name: System.Collections.Stack.StackEnumerator$$MoveNext
// address: 0x75585f8
// body: available
// range: 0x75585f8-0x75586db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755868c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75586d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75586d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Collections_Stack_StackEnumerator__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x1c) != *(int *)(lVar4 + 0x1c)) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_091feb80);
      System_InvalidOperationException___ctor(uVar2,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091f04e8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 == -2) {
      uVar5 = *(int *)(lVar4 + 0x18) - 1;
      *(uint *)(param_1 + 0x18) = uVar5;
      if ((int)uVar5 < 0) {
        return 0;
      }
    }
    else {
      uVar5 = iVar1 - 1;
      *(uint *)(param_1 + 0x18) = uVar5;
      if ((int)uVar5 < 0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),0);
        return 0;
      }
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar4 + (ulong)uVar5 * 8 + 0x20);
      thunk_FUN_03f5d7b8();
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

