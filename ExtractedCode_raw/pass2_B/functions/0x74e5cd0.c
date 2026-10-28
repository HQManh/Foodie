// rea decompile_all
// name: System.Reflection.TypeInfo.<GetDeclaredMethods>d__10$$MoveNext
// address: 0x74e5cd0
// body: available
// range: 0x74e5cd0-0x74e5dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e5dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e5dcc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_TypeInfo_<GetDeclaredMethods>d__10__MoveNext(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_074e5d6c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x7d8))(plVar1,0x3e,*(undefined8 *)(*plVar1 + 0x7e0));
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar2);
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    while( true ) {
      plVar1 = (long *)(param_1 + 0x40);
      lVar5 = *plVar1;
      if (lVar5 == 0) break;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) {
        *plVar1 = 0;
        thunk_FUN_03f5d7b8(plVar1,0);
        return 0;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar1 = *(long **)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      if (plVar1 == (long *)0x0) break;
      uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar3 = System_String__op_Equality(uVar2,*(undefined8 *)(param_1 + 0x30),0);
      if ((uVar3 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = plVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),plVar1);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
LAB_074e5d6c:
      uVar4 = *(int *)(param_1 + 0x48) + 1;
      *(uint *)(param_1 + 0x48) = uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

