// rea decompile_all
// name: System.UnitySerializationHolder$$.ctor
// address: 0x75fae1c
// body: available
// range: 0x75fae1c-0x75fb2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fb274 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fb2bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_UnitySerializationHolder___ctor(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if ((DAT_09521f7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170c00);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09172448);
    FUN_03f5c2a4(&DAT_091881d0);
    FUN_03f5c2a4(&DAT_09170c50);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09203450);
    FUN_03f5c2a4(&DAT_09201248);
    FUN_03f5c2a4(&DAT_09200498);
    FUN_03f5c2a4(&DAT_091fc060);
    FUN_03f5c2a4(&DAT_092004a0);
    FUN_03f5c2a4(&DAT_09212198);
    FUN_03f5c2a4(&DAT_09203448);
    FUN_03f5c2a4(&DAT_091fff08);
    DAT_09521f7f = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d490);
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091ddd40);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  iVar3 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_09212198,0);
  *(int *)(param_1 + 0x48) = iVar3;
  uVar7 = DAT_09172448;
  uVar5 = DAT_09170c50;
  if (iVar3 == 3) {
    return;
  }
  if (iVar3 == 8) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    uVar7 = System_Runtime_Serialization_SerializationInfo__GetValue(param_2,DAT_09203448,uVar5,0);
    uVar8 = thunk_FUN_03f99350(uVar7,DAT_09180748);
    uVar5 = DAT_09180748;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    uVar5 = thunk_FUN_03f99350(uVar7,uVar5);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar5);
    uVar5 = System_Type__GetTypeFromHandle(DAT_09170c00,0);
    uVar7 = System_Runtime_Serialization_SerializationInfo__GetValue(param_2,DAT_09201248,uVar5,0);
    uVar8 = thunk_FUN_03f99350(uVar7,DAT_091801b8);
    uVar5 = DAT_091801b8;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar5 = thunk_FUN_03f99350(uVar7,uVar5);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
  }
  else if (iVar3 == 7) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar7,0);
    plVar6 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_09200498,uVar5,0);
    lVar2 = DAT_091881d0;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_091881d0 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091881d0) {
          plVar9 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x30) = plVar9;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x30,plVar6);
    uVar5 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
    plVar6 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                               (param_2,DAT_092004a0,uVar5,0);
    lVar2 = DAT_095354b8;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      bVar1 = *(byte *)(DAT_095354b8 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != DAT_095354b8) {
          plVar9 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0x28) = plVar9;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(param_1 + 0x28,plVar6);
    uVar4 = System_Runtime_Serialization_SerializationInfo__GetInt32(param_2,DAT_09203450,0);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    uVar5 = System_Type__GetTypeFromHandle(DAT_09170c00,0);
    uVar7 = System_Runtime_Serialization_SerializationInfo__GetValue(param_2,DAT_09201248,uVar5,0);
    uVar8 = thunk_FUN_03f99350(uVar7,DAT_091801b8);
    uVar5 = DAT_091801b8;
    puVar10 = (undefined8 *)(param_1 + 0x18);
    *puVar10 = uVar8;
    uVar5 = thunk_FUN_03f99350(uVar7,uVar5);
    goto LAB_075fb264;
  }
  uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_091fff08,0);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_03f5d7b8();
  uVar5 = System_Runtime_Serialization_SerializationInfo__GetString(param_2,DAT_091fc060,0);
  puVar10 = (undefined8 *)(param_1 + 0x40);
  *puVar10 = uVar5;
LAB_075fb264:
  thunk_FUN_03f5d7b8(puVar10,uVar5);
  return;
}

