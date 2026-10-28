// rea decompile_all
// name: CakeOrder.InGame.LevelSaveMeControl$$ShowSaveMe
// address: 0x428681c
// body: available
// range: 0x428681c-0x4286dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4286dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_LevelSaveMeControl__ShowSaveMe
          (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_44;
  int local_38;
  int local_34;
  
  if ((DAT_09517149 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174bc0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09195790);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a5c0);
    FUN_03f5c2a4(&DAT_091ecb18);
    FUN_03f5c2a4(&DAT_091ecb20);
    FUN_03f5c2a4(&DAT_091923f8);
    FUN_03f5c2a4(&DAT_0921eb18);
    FUN_03f5c2a4(&DAT_091fc7f8);
    FUN_03f5c2a4(&DAT_0921fe00);
    FUN_03f5c2a4(&DAT_091fcdf8);
    FUN_03f5c2a4(&DAT_091f8318);
    FUN_03f5c2a4(&DAT_0921fde0);
    DAT_09517149 = 1;
  }
  local_34 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_091923f8);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) goto LAB_04286dfc;
  *(long *)(lVar3 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
  *(undefined8 *)(lVar3 + 0x18) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),param_4);
  *(undefined4 *)(lVar3 + 0x20) = param_3;
  *(undefined4 *)(lVar3 + 0x24) = param_2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_04286dfc;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar5 & 1) == 0) {
      uVar2 = *(undefined4 *)(lVar3 + 0x24);
      uVar4 = DAT_091fcdf8;
    }
    else {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar6 == 0)) goto LAB_04286dfc;
      lVar6 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__GetSaveMeConfig
                        (lVar6,*(undefined4 *)(lVar3 + 0x24),0);
      if (lVar6 == 0) {
        uVar2 = *(undefined4 *)(lVar3 + 0x24);
        local_60 = CONCAT44(local_60._4_4_,uVar2);
        uVar4 = FUN_03f5c42c(DAT_09535420,&local_60);
        uVar7 = System_String__Format(DAT_0921fde0,uVar4,0);
        uVar4 = DAT_091f8318;
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68), lVar3 == 0)) goto LAB_04286dfc;
        lVar3 = *(long *)(lVar3 + 0x38);
        uVar9 = 0;
        if (lVar3 != 0) {
          uVar9 = *(undefined4 *)(lVar3 + 0x18);
        }
        local_60 = CONCAT44(local_60._4_4_,uVar9);
        uVar8 = FUN_03f5c42c(DAT_09535420,&local_60);
        uVar4 = System_String__Format(uVar4,uVar8,0);
        uVar4 = System_String__Concat(uVar7,uVar4,DAT_091fc7f8,0);
      }
      else {
        lVar10 = *(long *)(param_1 + 0x10);
        if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x30), lVar11 == 0)) goto LAB_04286dfc;
        if ((*(int *)(lVar11 + 0x30) < 1) && (*(int *)(lVar11 + 0x34) + 1 < *(int *)(lVar6 + 0x1c)))
        {
          uVar2 = *(undefined4 *)(lVar3 + 0x24);
          local_60 = CONCAT44(local_60._4_4_,*(int *)(lVar6 + 0x1c));
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_60);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar3 == 0)) goto LAB_04286dfc;
          local_38 = *(int *)(lVar3 + 0x34) + 1;
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_38);
          uVar4 = System_String__Format(DAT_0921eb18,uVar4,uVar7,0);
        }
        else {
          if (((0 < *(int *)(lVar6 + 0x20)) || (0 < *(int *)(lVar6 + 0x24))) ||
             (0 < *(int *)(lVar6 + 0x28))) {
            uVar2 = 0;
            if (*(long *)(lVar10 + 0x38) != 0) {
              uVar2 = *(undefined4 *)(*(long *)(lVar10 + 0x38) + 0x14);
            }
            *(undefined4 *)(lVar3 + 0x28) = uVar2;
            *(undefined1 *)(param_1 + 0x18) = 1;
            if ((*(long *)(lVar10 + 0x28) == 0) ||
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x28) + 0x58), lVar10 == 0)) {
LAB_04286dfc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Utilities_BoolModifierWithRegisteredSource__AddModifier
                      (lVar10,*(undefined4 *)(lVar3 + 0x20),0);
            lVar10 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            lVar10 = **(long **)(lVar10 + 0xb8);
            uVar4 = CakeOrder_InGame_LevelSaveMeControl__KeyNumFreeShown
                              (*(undefined4 *)(lVar3 + 0x24));
            if (lVar10 == 0) goto LAB_04286dfc;
            iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetInt(lVar10,uVar4,0,0);
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar10 == 0)) ||
               (lVar10 = *(long *)(lVar10 + 0x30), lVar10 == 0)) goto LAB_04286dfc;
            local_50 = *(undefined4 *)(lVar3 + 0x24);
            lVar10 = *(long *)(lVar10 + 0x18);
            local_60 = DAT_0918a5c0;
            uStack_58 = 0xffffffffffffffff;
            uVar4 = System_Enum__ToString(&local_60,0);
            if (lVar10 == 0) goto LAB_04286dfc;
            FUN_06fcbf70(lVar10,uVar4,&local_34,DAT_0919f9c8);
            lVar10 = thunk_FUN_03f9944c(DAT_09195790);
            CakeOrder_InGame_UIPopupBoosterSaveMeBase_ConfigData___ctor(lVar10,0);
            if (lVar10 == 0) goto LAB_04286dfc;
            *(bool *)(lVar10 + 0x1c) = iVar1 < *(int *)(lVar6 + 0x20);
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_04286dfc;
            lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
            uVar2 = CakeOrder_InGame_LevelSaveMeControl__CountHardCurrencySaveMeInLevel(param_1);
            if (lVar11 == 0) goto LAB_04286dfc;
            uVar2 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__GetSaveMePrice
                              (lVar11,uVar2,*(undefined4 *)(lVar6 + 0x24),0);
            *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar6 + 0x38);
            *(undefined4 *)(lVar10 + 0x20) = uVar2;
            *(bool *)(lVar10 + 0x24) = local_34 < *(int *)(lVar6 + 0x28);
            thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x58));
            lVar6 = CakeOrder_InGame_UIInLevelCakeOrder__get_InstanceUIInLevel(0);
            uVar2 = *(undefined4 *)(lVar3 + 0x24);
            uVar4 = thunk_FUN_03f9944c(DAT_09174bc0);
            FUN_070a8c30(uVar4,lVar3,DAT_091ecb20,0);
            uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar7,lVar3,DAT_091ecb18,0);
            if (lVar6 == 0) goto LAB_04286dfc;
            uVar4 = CakeOrder_InGame_UIInLevelCakeOrder__ShowPopUpSaveMe
                              (lVar6,uVar2,lVar10,uVar4,uVar7,0);
            Utilities_AsyncExtension__RunWithLogException(uVar4,0);
            goto LAB_04286968;
          }
          uVar2 = *(undefined4 *)(lVar3 + 0x24);
          local_60 = CONCAT44(local_60._4_4_,*(int *)(lVar6 + 0x20));
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_60);
          local_38 = *(int *)(lVar6 + 0x24);
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_38);
          local_44 = *(undefined4 *)(lVar6 + 0x28);
          uVar8 = FUN_03f5c42c(DAT_09535420,&local_44);
          uVar4 = System_String__Format(DAT_0921fe00,uVar4,uVar7,uVar8,0);
        }
      }
    }
    CakeOrder_InGame_LevelSaveMeControl__Refuse(uVar2,uVar4);
    uVar4 = 0;
  }
  else {
LAB_04286968:
    uVar4 = 1;
  }
  return uVar4;
}

