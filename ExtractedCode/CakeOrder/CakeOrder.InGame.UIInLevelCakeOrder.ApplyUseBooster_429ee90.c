// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$ApplyUseBooster
// address: 0x429ee90
// body: available
// range: 0x429ee90-0x429f32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429f318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429f31c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429f328 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__ApplyUseBooster
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined2 local_5c [2];
  long *local_58;
  
  if ((DAT_09517224 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174b98);
    FUN_03f5c2a4(&DAT_091c0490);
    FUN_03f5c2a4(&DAT_09192358);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cdc48);
    FUN_03f5c2a4(&DAT_09186248);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e218);
    FUN_03f5c2a4(&DAT_091f16d0);
    FUN_03f5c2a4(&DAT_091f16d8);
    FUN_03f5c2a4(&DAT_091956c8);
    FUN_03f5c2a4(&DAT_091fcdf0);
    DAT_09517224 = 1;
  }
  local_58 = (long *)0x0;
  lVar1 = thunk_FUN_03f9944c(DAT_091956c8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_0429f318;
  plVar9 = (long *)(lVar1 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_03f5d7b8(plVar9,param_2);
  *(long *)(lVar1 + 0x20) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_3);
  uVar2 = DAT_0917e218;
  uVar10 = *(undefined8 *)(param_1 + 0x160);
  *(undefined1 *)(lVar1 + 0x18) = 0;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  FUN_05d78cfc(uVar2,lVar1,DAT_091f16d0,0);
  lVar3 = FUN_04ee3a54(uVar10,uVar2,DAT_091c0490);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar3 + 0x30) == 0) goto LAB_0429f318;
      uVar4 = FUN_04b7d49c(*(long *)(lVar3 + 0x30),&local_58,DAT_091cdc48);
      plVar6 = local_58;
      if ((uVar4 & 1) != 0) {
        if (local_58 == (long *)0x0) goto LAB_0429f318;
        lVar7 = *local_58;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09186248) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0429f0d4;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_58,DAT_09186248,1);
LAB_0429f0d4:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
    }
    lVar3 = *(long *)(lVar3 + 0x38);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar4 & 1) == 0) {
        uVar2 = *(undefined8 *)(lVar3 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar4 & 1) == 0) goto LAB_0429f188;
      }
      lVar7 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0429f318;
      CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic(**(long **)(lVar7 + 0xb8),lVar3,3,0);
    }
  }
LAB_0429f188:
  uVar2 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_1 + 200) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 200) + 0x68), lVar3 == 0)) goto LAB_0429f318;
    lVar3 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__CreateBoosterData(lVar3,*plVar9,0);
    if (lVar3 != 0) {
      CakeOrder_InGame_UIInLevelCakeOrder__SetBlockAllBooster(param_1,0x4f,1);
      lVar7 = *(long *)(param_1 + 0xc0);
      uVar2 = thunk_FUN_03f9944c(DAT_09174b98);
      FUN_070a8c30(uVar2,lVar1,DAT_091f16d8,0);
      if (lVar7 != 0) {
        CakeOrder_InGame_LevelBaseCakeOrderAbstract__ActivateBooster(lVar7,lVar3,uVar2,0);
        return;
      }
      goto LAB_0429f318;
    }
  }
  plVar6 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar9;
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar6[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar6 + 4,lVar3);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarningFormat(DAT_091fcdf0,plVar6,0);
    lVar3 = thunk_FUN_03f9944c(DAT_09192358);
    CakeOrder_InGame_LevelBaseCakeOrderAbstract_BoosterData___ctor(lVar3,0);
    local_5c[0] = 0;
    FUN_05c290f8(local_5c,0,DAT_091b6a48);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 0x10) = local_5c[0];
      CakeOrder_InGame_UIInLevelCakeOrder_<>c__DisplayClass89_0__<ApplyUseBooster>g__OnEndUseBooster_1
                (lVar1,lVar3);
      return;
    }
  }
LAB_0429f318:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

