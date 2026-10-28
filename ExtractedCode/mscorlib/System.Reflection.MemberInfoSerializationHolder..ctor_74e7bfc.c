// rea decompile_all
// name: System.Reflection.MemberInfoSerializationHolder$$.ctor
// address: 0x74e7bfc
// body: available
// range: 0x74e7bfc-0x74e7f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e7e68 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7eb4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e7efc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7f4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e7f50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_MemberInfoSerializationHolder___ctor(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((DAT_095215cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0920d178);
    FUN_03f5c2a4(&DAT_09207ae0);
    FUN_03f5c2a4(&DAT_09208548);
    FUN_03f5c2a4(&DAT_091fc060);
    FUN_03f5c2a4(&DAT_091fe9b8);
    FUN_03f5c2a4(&DAT_0920d168);
    DAT_095215cc = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d2e30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  lVar3 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_091fc060,0);
  lVar4 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_091fe9b8,0);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar6 = thunk_FUN_03fc39d4(&DAT_09204ee0);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar7 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d2e30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  if (*(int *)(DAT_09184940 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar5 = (long *)System_Runtime_Serialization_FormatterServices__LoadAssemblyFromString(lVar3,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x2f8))(plVar5,lVar4,1,0,*(undefined8 *)(*plVar5 + 0x300))
  ;
  lVar3 = DAT_0918a400;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918a400 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = plVar5;
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400) {
        plVar8 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x18) = plVar8;
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar5 = (long *)0x0;
    }
  }
  thunk_FUN_03f5d7b8(param_1 + 0x18,plVar5);
  uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_09208548,0);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  thunk_FUN_03f5d7b8();
  uVar6 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920d168,0);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  thunk_FUN_03f5d7b8();
  lVar3 = DAT_09535468;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                             (param_2,DAT_0920d178,uVar6,0);
  lVar3 = DAT_09535468;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else if ((*plVar5 != DAT_09535468) || (*(long **)(param_1 + 0x28) = plVar5, *plVar5 != lVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar5);
  }
  thunk_FUN_03f5d7b8(param_1 + 0x28,plVar5);
  uVar2 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_09207ae0,0);
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_2);
  return;
}

