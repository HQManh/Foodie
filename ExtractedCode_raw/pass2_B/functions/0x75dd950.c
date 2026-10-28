// rea decompile_all
// name: System.Array.ArrayEnumerator$$get_Current
// address: 0x75dd950
// body: available
// range: 0x75dd950-0x75dda5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dd9b8 to 0x75dcce4 System.Array$$GetValueImpl (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75dd9bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dda24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_ArrayEnumerator__get_Current(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar6 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092016c8;
  }
  else {
    if (iVar1 < *(int *)(param_1 + 0x1c)) {
      if (iVar1 == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (plVar2 = (long *)System_Object__GetType(*(long *)(param_1 + 0x10),0),
           plVar2 == (long *)0x0)) goto LAB_075dd9bc;
        lVar3 = (**(code **)(*plVar2 + 0x448))(plVar2,*(undefined8 *)(*plVar2 + 0x450));
        if (lVar3 == 0) goto LAB_075dd9bc;
        uVar4 = System_Type__get_IsPointer(lVar3,0);
        if ((uVar4 & 1) != 0) {
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar6 = thunk_FUN_03f9944c();
          uVar7 = thunk_FUN_03fc39d4(&DAT_09211220);
          System_NotSupportedException___ctor(uVar6,uVar7,0);
          goto LAB_075dda10;
        }
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        System_Array__GetValueImpl(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
        return;
      }
LAB_075dd9bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar6 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09201698;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar5);
  System_InvalidOperationException___ctor(uVar6,uVar7,0);
LAB_075dda10:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091e59f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

