// rea decompile_all
// name: System.Collections.ListDictionaryInternal$$Add
// address: 0x7551874
// body: available
// range: 0x7551874-0x7551a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7551974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75519d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7551a34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ListDictionaryInternal__Add(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09521942 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192490);
    DAT_09521942 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921df98);
    uVar4 = thunk_FUN_03fc39d4(&DAT_092065e8);
    System_ArgumentNullException___ctor(uVar3,uVar6,uVar4,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d25f0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = lVar5;
      plVar1 = *(long **)(lVar7 + 0x10);
      if (plVar1 == (long *)0x0) goto LAB_07551974;
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) {
        FUN_039b1d98(lVar7);
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
        uVar3 = thunk_FUN_03fc39d4(&DAT_09206220);
        uVar3 = SR__Format(uVar3,uVar6,param_2,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar6 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar6,uVar3,0);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091d25f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar3);
      }
      lVar5 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09192490);
  System_Object___ctor(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_2);
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),param_3);
    plVar1 = (long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x20);
    }
    *plVar1 = lVar5;
    thunk_FUN_03f5d7b8(plVar1,lVar5);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
LAB_07551974:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

