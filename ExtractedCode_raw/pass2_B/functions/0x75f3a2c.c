// rea decompile_all
// name: System.RuntimeType$$GetMember
// address: 0x75f3a2c
// body: available
// range: 0x75f3a2c-0x75f3e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f3e9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_RuntimeType__GetMember(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  puVar1 = &local_c0;
  if ((DAT_09521f4a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa1e0);
    FUN_03f5c2a4(&DAT_091aa210);
    FUN_03f5c2a4(&DAT_091aa290);
    FUN_03f5c2a4(&DAT_091aa260);
    FUN_03f5c2a4(&DAT_091aa2c0);
    FUN_03f5c2a4(&DAT_091aa238);
    FUN_03f5c2a4(&DAT_091aa240);
    FUN_03f5c2a4(&DAT_091aa268);
    FUN_03f5c2a4(&DAT_091aa2c8);
    FUN_03f5c2a4(&DAT_091aa218);
    FUN_03f5c2a4(&DAT_091aa1e8);
    FUN_03f5c2a4(&DAT_091aa298);
    FUN_03f5c2a4(&DAT_091aa1f0);
    FUN_03f5c2a4(&DAT_091aa248);
    FUN_03f5c2a4(&DAT_091aa270);
    FUN_03f5c2a4(&DAT_091aa2a0);
    FUN_03f5c2a4(&DAT_091aa2d0);
    FUN_03f5c2a4(&DAT_091aa220);
    FUN_03f5c2a4(&DAT_091802a8);
    FUN_03f5c2a4(&DAT_091802d0);
    DAT_09521f4a = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar2,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091d8290);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  if ((param_3 >> 3 & 1) == 0) {
    iVar5 = 0;
joined_r0x075f3c08:
    if ((param_3 & 1) != 0) {
      System_RuntimeType__GetConstructorCandidates(&local_60,param_1,param_2,param_4);
      if (param_3 == 1) {
        puVar1 = &local_60;
        puVar4 = &DAT_091aa1e8;
        goto LAB_075f3d40;
      }
      iVar5 = (int)local_50 + iVar5;
    }
    if ((param_3 >> 4 & 1) != 0) {
      System_RuntimeType__GetPropertyCandidates(&local_78,param_1,param_2,param_4,0,1);
      if (param_3 == 0x10) {
        puVar1 = &local_78;
        puVar4 = &DAT_091aa298;
        goto LAB_075f3d40;
      }
      iVar5 = (int)local_68 + iVar5;
    }
    if ((param_3 >> 1 & 1) != 0) {
      System_RuntimeType__GetEventCandidates(&local_90,param_1,param_2,param_4,1);
      if (param_3 == 2) {
        puVar1 = &local_90;
        puVar4 = &DAT_091aa218;
        goto LAB_075f3d40;
      }
      iVar5 = (int)local_80 + iVar5;
    }
    if ((param_3 >> 2 & 1) != 0) {
      System_RuntimeType__GetFieldCandidates(&local_a8,param_1,param_2,param_4,1);
      if (param_3 == 4) {
        puVar1 = &local_a8;
        puVar4 = &DAT_091aa240;
        goto LAB_075f3d40;
      }
      iVar5 = (int)local_98 + iVar5;
    }
    if ((param_3 & 0xa0) == 0) {
      puVar1 = &DAT_091802d0;
      if (param_3 != 9) {
        puVar1 = &DAT_091802a8;
      }
    }
    else {
      System_RuntimeType__GetNestedTypeCandidates(&local_c0,param_1,param_2,param_4,1);
      if ((param_3 == 0x80) || (param_3 == 0x20)) {
        puVar4 = &DAT_091aa2c8;
        goto LAB_075f3d40;
      }
      iVar5 = (int)local_b0 + iVar5;
      puVar1 = &DAT_091802a8;
    }
    uVar2 = FUN_03f5c394(*puVar1,iVar5);
    FUN_05639ad8(&local_48,uVar2,0,DAT_091aa260);
    iVar5 = (int)local_38;
    FUN_05639ad8(&local_60,uVar2,local_38 & 0xffffffff,DAT_091aa1e0);
    iVar5 = (int)local_50 + iVar5;
    FUN_05639ad8(&local_78,uVar2,iVar5,DAT_091aa290);
    iVar5 = (int)local_68 + iVar5;
    FUN_05639ad8(&local_90,uVar2,iVar5,DAT_091aa210);
    iVar5 = (int)local_80 + iVar5;
    FUN_05639ad8(&local_a8,uVar2,iVar5,DAT_091aa238);
    FUN_05639ad8(&local_c0,uVar2,(int)local_98 + iVar5,DAT_091aa2c0);
  }
  else {
    System_RuntimeType__GetMethodCandidates(&local_48,param_1,param_2,param_4,3,0,0xffffffff,1);
    if (param_3 != 8) {
      iVar5 = (int)local_38;
      goto joined_r0x075f3c08;
    }
    puVar1 = &local_48;
    puVar4 = &DAT_091aa268;
LAB_075f3d40:
    uVar2 = FUN_056399bc(puVar1,*puVar4);
  }
  return uVar2;
}

