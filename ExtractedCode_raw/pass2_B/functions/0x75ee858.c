// rea decompile_all
// name: System.Exception$$.ctor
// address: 0x75ee858
// body: available
// range: 0x75ee858-0x75eed9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75eeb04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eecd0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75eed3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eed84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eed90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75eed9c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Exception___ctor(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if ((DAT_09521f1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091716f0);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09172b78);
    FUN_03f5c2a4(&DAT_0918a530);
    FUN_03f5c2a4(&DAT_0920ba20);
    FUN_03f5c2a4(&DAT_0920c678);
    FUN_03f5c2a4(&DAT_0920ba18);
    FUN_03f5c2a4(&DAT_09203e48);
    FUN_03f5c2a4(&DAT_09204c00);
    FUN_03f5c2a4(&DAT_091fe9b8);
    FUN_03f5c2a4(&DAT_0920d4c0);
    FUN_03f5c2a4(&DAT_09203c68);
    FUN_03f5c2a4(&DAT_09207c40);
    FUN_03f5c2a4(&DAT_091fff08);
    FUN_03f5c2a4(&DAT_0920d888);
    DAT_09521f1e = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091cb930);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  lVar4 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_091fe9b8,0);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = lVar4;
  thunk_FUN_03f5d7b8(plVar9,lVar4);
  uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_09207c40,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_03f5d7b8();
  uVar5 = DAT_09171b90;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
  lVar4 = System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                    (param_2,DAT_091fff08,uVar5,0);
  uVar5 = DAT_09185a20;
  if (lVar4 == 0) {
    lVar6 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar6 = thunk_FUN_03f99350(lVar4,DAT_09185a20);
    uVar8 = DAT_09185a20;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar4,uVar5);
    }
    *(long *)(param_1 + 0x20) = lVar6;
    lVar6 = thunk_FUN_03f99350(lVar4,uVar8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar4,uVar8);
    }
  }
  thunk_FUN_03f5d7b8(param_1 + 0x20,lVar6);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091716f0,0);
  plVar7 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09204c00,uVar5,0);
  lVar4 = DAT_091842a0;
  if (plVar7 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_075eeb14:
    thunk_FUN_03f5d7b8(param_1 + 0x28,plVar7);
    uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_09203e48,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920d888,0);
    puVar10 = (undefined8 *)(param_1 + 0x40);
    *puVar10 = uVar5;
    thunk_FUN_03f5d7b8(puVar10,uVar5);
    uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_0920ba20,0);
    puVar11 = (undefined8 *)(param_1 + 0x48);
    *puVar11 = uVar5;
    thunk_FUN_03f5d7b8(puVar11,uVar5);
    uVar3 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_0920ba18,0);
    uVar5 = DAT_09203c68;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar3 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,uVar5,0);
    uVar5 = DAT_0920d4c0;
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,uVar5,0);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar5 = System_Type__GetTypeFromHandle(DAT_09172b78,0);
    plVar7 = (long *)System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                               (param_2,DAT_0920c678,uVar5,0);
    lVar4 = DAT_0918a530;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    else {
      plVar1 = plVar7;
      if (*plVar7 != DAT_0918a530) {
        plVar1 = (long *)0x0;
      }
      *(long **)(param_1 + 0x70) = plVar1;
      if (*plVar7 != lVar4) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x70,plVar7);
    if ((*plVar9 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
      if (param_4 != 0x80) {
        return;
      }
      uVar5 = System_String__Concat(*puVar11,*puVar10,0);
      *puVar11 = uVar5;
      thunk_FUN_03f5d7b8(puVar11,uVar5);
      *puVar10 = 0;
      thunk_FUN_03f5d7b8(puVar10,0);
      return;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09204ee0);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar8 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar8,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091cb930);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar5);
  }
  bVar2 = *(byte *)(DAT_091842a0 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
     (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) == DAT_091842a0)) {
    *(long **)(param_1 + 0x28) = plVar7;
    if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) == lVar4)) goto LAB_075eeb14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar7);
}

