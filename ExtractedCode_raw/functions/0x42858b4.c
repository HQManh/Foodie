// rea decompile_all
// name: CakeOrder.SaveProfile.PlayerProfileDataAccess$$UnlockAvatar
// address: 0x42858b4
// body: available
// range: 0x42858b4-0x4285b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4285b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4285b60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4285b6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_SaveProfile_PlayerProfileDataAccess__UnlockAvatar(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 local_24 [2];
  
  if ((DAT_09517137 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b9dd8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0920aef8);
    FUN_03f5c2a4(&DAT_09224f58);
    FUN_03f5c2a4(&DAT_091fc570);
    DAT_09517137 = 1;
  }
  local_24[0] = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920aef8,param_1,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_04285b5c;
      uVar1 = CakeOrder_DataSO_PlayerAvatarCatalogSO__Contains(*(long *)(param_1 + 0x28),param_2,0);
      if ((uVar1 & 1) != 0) {
        uVar1 = CakeOrder_SaveProfile_PlayerProfileDataAccess__IsAvatarUnlocked(param_1,param_2);
        if ((uVar1 & 1) != 0) {
          return 0;
        }
        lVar2 = CakeOrder_SaveProfile_PlayerProfileDataAccess__GetUnlockedAvatarIds(param_1);
        if (lVar2 == 0) goto LAB_04285b5c;
        lVar3 = FUN_03f5c394(DAT_091805f8,*(int *)(lVar2 + 0x18) + 1);
        System_Array__CopyTo(lVar2,lVar3,0,0);
        if (lVar3 == 0) goto LAB_04285b5c;
        uVar5 = (uint)*(undefined8 *)(lVar2 + 0x18);
        if (uVar5 < *(uint *)(lVar3 + 0x18)) {
          plVar4 = (long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
          *plVar4 = param_2;
          thunk_FUN_03f5d7b8(plVar4,param_2);
          local_24[0] = 0x2c;
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Char__ToString(local_24,0);
          uVar6 = System_String__Join(uVar6,lVar3,0);
          CakeOrder_SaveProfile_PlayerProfileDataAccess__SetString(param_1,DAT_09224f58,uVar6);
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_060773cc(*(long *)(param_1 + 0x20),0,DAT_091b9dd8);
            lVar2 = *(long *)(param_1 + 0x40);
            if (lVar2 != 0) {
              (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28));
            }
            return 1;
          }
          goto LAB_04285b5c;
        }
        goto LAB_04285b60;
      }
    }
    plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar4 == (long *)0x0) {
LAB_04285b5c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((param_2 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_04285b60:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[4] = param_2;
    thunk_FUN_03f5d7b8(plVar4 + 4,param_2);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarningFormat(param_1,DAT_091fc570,plVar4,0);
  }
  return 0;
}

