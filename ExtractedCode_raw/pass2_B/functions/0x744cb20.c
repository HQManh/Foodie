// rea decompile_all
// name: System.Text.Encoding$$DeserializeEncoding
// address: 0x744cb20
// body: available
// range: 0x744cb20-0x744ce57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744cd2c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744cddc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ce44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ce48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ce4c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ce50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744ce54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding__DeserializeEncoding(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  if ((DAT_095210c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171540);
    FUN_03f5c2a4(&DAT_09183800);
    FUN_03f5c2a4(&DAT_09171678);
    FUN_03f5c2a4(&DAT_09183f90);
    FUN_03f5c2a4(&DAT_0921af58);
    FUN_03f5c2a4(&DAT_0921f000);
    FUN_03f5c2a4(&DAT_0921efe8);
    FUN_03f5c2a4(&DAT_0921a3c0);
    DAT_095210c5 = 1;
  }
  lVar3 = DAT_09535420;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar4,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c8c48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar8);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0921efe8,uVar4,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
  puVar6 = (undefined4 *)thunk_FUN_03f99594();
  uVar1 = *puVar6;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
  lVar3 = DAT_09535400;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0921f000,uVar4,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09535400 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
  puVar7 = (undefined1 *)thunk_FUN_03f99594();
  uVar4 = DAT_09171678;
  *(undefined1 *)(param_1 + 0x21) = *puVar7;
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0921af58,uVar4,0);
  lVar3 = DAT_09183f90;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    bVar2 = *(byte *)(DAT_09183f90 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09183f90)) {
LAB_0744cd28:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar5);
    }
    *(long **)(param_1 + 0x28) = plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != lVar3)) goto LAB_0744cd28;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x28,plVar5);
  uVar4 = System_Type__GetTypeFromHandle(DAT_09171540,0);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_0921a3c0,uVar4,0);
  lVar3 = DAT_09183800;
  if (plVar5 != (long *)0x0) {
    bVar2 = *(byte *)(DAT_09183800 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == DAT_09183800)) {
      *(long **)(param_1 + 0x30) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == lVar3)) goto LAB_0744cde8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar5);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_0744cde8:
  thunk_FUN_03f5d7b8(param_1 + 0x30,plVar5);
  return;
}

