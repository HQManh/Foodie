// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerProfileDataAccess$$SetProfile
// address: 0x42850e8
// body: available
// range: 0x42850e8-0x428556b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4285558 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428555c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4285568 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_SaveProfile_PlayerProfileDataAccess__SetProfile(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  
  if ((DAT_09517135 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b9dd8);
    FUN_03f5c2a4(&DAT_0920b890);
    FUN_03f5c2a4(&DAT_091fc568);
    FUN_03f5c2a4(&DAT_091fc578);
    FUN_03f5c2a4(&DAT_0921fa48);
    FUN_03f5c2a4(&DAT_0921fa28);
    FUN_03f5c2a4(&DAT_0920af00);
    FUN_03f5c2a4(&DAT_09217c88);
    DAT_09517135 = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920af00,param_1,0);
    return 0;
  }
  iVar1 = CakeOrder_SaveProfile_PlayerNameRules__Validate(param_2,&local_28);
  if (iVar1 != 0) {
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar2 == (long *)0x0) goto LAB_0428555c;
    if ((param_2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_04285560;
    if ((int)plVar2[3] != 0) {
      plVar2[4] = param_2;
      thunk_FUN_03f5d7b8(plVar2 + 4,param_2);
      lVar3 = CakeOrder_SaveProfile_PlayerNameRules__GetMessage(iVar1);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_04285560;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
        plVar2[5] = lVar3;
        thunk_FUN_03f5d7b8(plVar2 + 5,lVar3);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarningFormat(param_1,DAT_0920b890,plVar2,0);
        return 0;
      }
    }
    goto LAB_04285558;
  }
  uVar5 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar5 & 1) == 0) goto LAB_0428530c;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0428555c;
    uVar5 = CakeOrder_DataSO_PlayerAvatarCatalogSO__Contains(*(long *)(param_1 + 0x28),param_3,0);
    if ((uVar5 & 1) != 0) goto LAB_0428530c;
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar2 == (long *)0x0) goto LAB_0428555c;
    if ((param_3 != 0) &&
       (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_04285560;
    if ((int)plVar2[3] == 0) goto LAB_04285558;
    plVar2[4] = param_3;
    thunk_FUN_03f5d7b8(plVar2 + 4,param_3);
    iVar1 = *(int *)(DAT_091835d0 + 0xe4);
    puVar9 = &DAT_091fc568;
joined_r0x042853ac:
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarningFormat(param_1,*puVar9,plVar2,0);
    param_3 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_AvatarId(param_1);
  }
  else {
LAB_0428530c:
    uVar5 = System_String__IsNullOrEmpty(param_3,0);
    if ((uVar5 & 1) == 0) {
      uVar8 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_AvatarId(param_1);
      uVar5 = System_String__op_Inequality(param_3,uVar8,0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = CakeOrder_SaveProfile_PlayerProfileDataAccess__IsAvatarUnlocked(param_1,param_3),
         (uVar5 & 1) == 0)) {
        plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar2 == (long *)0x0) goto LAB_0428555c;
        if ((param_3 != 0) &&
           (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_04285560:
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if ((int)plVar2[3] == 0) {
LAB_04285558:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2[4] = param_3;
        thunk_FUN_03f5d7b8(plVar2 + 4,param_3);
        iVar1 = *(int *)(DAT_091835d0 + 0xe4);
        puVar9 = &DAT_091fc578;
        goto joined_r0x042853ac;
      }
    }
  }
  uVar8 = local_28;
  uVar6 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_PlayerName(param_1);
  uVar5 = System_String__op_Inequality(uVar8,uVar6,0);
  uVar7 = System_String__IsNullOrEmpty(param_3,0);
  if ((uVar7 & 1) == 0) {
    uVar8 = CakeOrder_SaveProfile_PlayerProfileDataAccess__get_AvatarId(param_1);
    uVar7 = System_String__op_Inequality(param_3,uVar8,0);
    if ((uVar7 & 1) == 0) goto LAB_042854dc;
    if ((uVar5 & 1) != 0) {
      CakeOrder_SaveProfile_PlayerProfileDataAccess__SetString(param_1,DAT_0921fa28,local_28);
      CakeOrder_SaveProfile_PlayerProfileDataAccess__SetInt(param_1,DAT_0921fa48,1);
    }
    CakeOrder_SaveProfile_PlayerProfileDataAccess__SetString(param_1,DAT_09217c88,param_3);
  }
  else {
LAB_042854dc:
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    CakeOrder_SaveProfile_PlayerProfileDataAccess__SetString(param_1,DAT_0921fa28,local_28);
    CakeOrder_SaveProfile_PlayerProfileDataAccess__SetInt(param_1,DAT_0921fa48,1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_060773cc(*(long *)(param_1 + 0x20),0,DAT_091b9dd8);
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    return 1;
  }
LAB_0428555c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

