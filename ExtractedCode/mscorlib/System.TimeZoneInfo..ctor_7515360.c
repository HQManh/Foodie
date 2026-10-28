// rea decompile_all
// name: System.TimeZoneInfo$$.ctor
// address: 0x7515360
// body: available
// range: 0x7515360-0x751579f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75155d8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751573c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7515740 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7515784 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7515790 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751579c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo___ctor(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  if ((DAT_09521705 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170cc0);
    FUN_03f5c2a4(&DAT_09180c20);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09200258);
    FUN_03f5c2a4(&DAT_091fc9b0);
    FUN_03f5c2a4(&DAT_0920d8d8);
    FUN_03f5c2a4(&DAT_091fb5f0);
    FUN_03f5c2a4(&DAT_09204620);
    FUN_03f5c2a4(&DAT_0920de30);
    FUN_03f5c2a4(&DAT_09200ad0);
    DAT_09521705 = 1;
  }
  System_Object___ctor(param_1,0);
  lVar4 = DAT_09535468;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar1,uVar7);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091db718);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar1,uVar7);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09204620,uVar1,0);
  lVar4 = DAT_09535468;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else if ((*plVar2 != DAT_09535468) || (*(long **)(param_1 + 0x10) = plVar2, *plVar2 != lVar4))
  goto LAB_075155d4;
  thunk_FUN_03f5d7b8(param_1 + 0x10,plVar2);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09200ad0,uVar1,0);
  lVar4 = DAT_09535468;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if ((*plVar2 != DAT_09535468) || (*(long **)(param_1 + 0x18) = plVar2, *plVar2 != lVar4))
  goto LAB_075155d4;
  thunk_FUN_03f5d7b8(param_1 + 0x18,plVar2);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0920d8d8,uVar1,0);
  lVar4 = DAT_09535468;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else if ((*plVar2 != DAT_09535468) || (*(long **)(param_1 + 0x20) = plVar2, *plVar2 != lVar4))
  goto LAB_075155d4;
  thunk_FUN_03f5d7b8(param_1 + 0x20,plVar2);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09200258,uVar1,0);
  lVar4 = DAT_09535468;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else if ((*plVar2 != DAT_09535468) || (*(long **)(param_1 + 0x28) = plVar2, *plVar2 != lVar4)) {
LAB_075155d4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  thunk_FUN_03f5d7b8(param_1 + 0x28,plVar2);
  uVar1 = System_Type__GetTypeFromHandle(DAT_09173188,0);
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_091fc9b0,uVar1,0);
  if (plVar2 == (long *)0x0) {
LAB_0751573c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(*plVar2 + 0x40) == *(long *)(DAT_0918bd60 + 0x40)) {
    puVar3 = (undefined8 *)thunk_FUN_03f99594();
    uVar1 = DAT_09170cc0;
    *(undefined8 *)(param_1 + 0x30) = *puVar3;
    uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
    lVar4 = System_Runtime_Serialization_SerializationInfo__GetValue(param_2,DAT_091fb5f0,uVar1,0);
    uVar1 = DAT_09180c20;
    if (lVar4 == 0) {
      lVar5 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar5 = thunk_FUN_03f99350(lVar4,DAT_09180c20);
      uVar7 = DAT_09180c20;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar4,uVar1);
      }
      *(long *)(param_1 + 0x40) = lVar5;
      lVar5 = thunk_FUN_03f99350(lVar4,uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar4,uVar7);
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x40,lVar5);
    uVar1 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_0920de30,uVar1,0);
    if (plVar2 == (long *)0x0) goto LAB_0751573c;
    if (*(long *)(*plVar2 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
      puVar6 = (undefined1 *)thunk_FUN_03f99594();
      *(undefined1 *)(param_1 + 0x38) = *puVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0();
}

