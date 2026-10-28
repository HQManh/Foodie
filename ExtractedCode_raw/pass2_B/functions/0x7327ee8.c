// rea decompile_all
// name: IapAdsSystem.UserAdsClassifyTracking$$RecordWatchReward
// address: 0x7327ee8
// body: available
// range: 0x7327ee8-0x73286e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73286a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73286c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73286e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73286e4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_UserAdsClassifyTracking__RecordWatchReward
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78;
  
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_095205e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092256c8);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_092256d0);
    FUN_03f5c2a4(&DAT_092026d0);
    FUN_03f5c2a4(&DAT_09217108);
    FUN_03f5c2a4(&DAT_09221ac8);
    FUN_03f5c2a4(&DAT_092026d8);
    FUN_03f5c2a4(&DAT_09219f40);
    FUN_03f5c2a4(&DAT_09221ad0);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_095205e9 = 1;
  }
  local_88._8_8_ = 0;
  local_90 = 0;
  local_88._0_8_ = 0;
  local_98 = 0;
  iVar5 = UnityEngine_PlayerPrefs__GetInt(DAT_092256d0,0,0);
  iVar5 = iVar5 + 1;
  UnityEngine_PlayerPrefs__SetInt(DAT_092256d0,iVar5,0);
  uVar7 = UnityEngine_PlayerPrefs__GetString(DAT_09221ad0,DAT_091f95f0,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ff8);
  }
  uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091837d8);
  }
  uVar9 = System_Decimal__TryParse(uVar7,0x1ff,uVar8,local_88,0);
  if ((uVar9 & 1) == 0) {
    uVar7 = System_String__Concat(DAT_092026d8,uVar7,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar7,0);
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
  }
  uVar8 = local_88._8_8_;
  uVar7 = local_88._0_8_;
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_88 = System_Decimal__op_Addition(uVar7,uVar8,param_2,param_3,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar7 = System_Decimal__ToString(local_88,uVar7,0);
  UnityEngine_PlayerPrefs__SetString(DAT_09221ad0,uVar7,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    if ((lVar14 != 0) && (0 < (int)*(ulong *)(lVar14 + 0x18))) {
      uVar9 = 0;
      uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar9) goto LAB_07328694;
        iVar6 = *(int *)(lVar14 + 0x20 + uVar9 * 4);
        if (iVar6 <= iVar5) {
          auVar15 = local_88;
          if (iVar5 != iVar6) {
            auVar15 = auVar2;
          }
          plVar10 = (long *)FUN_03f5c394(DAT_09180358,3);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091837d8);
          }
          uVar7 = System_Decimal__op_Explicit(auVar15._0_8_,auVar15._8_8_,0);
          lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(uVar7,lVar11,DAT_09225370,0);
          if (plVar10 == (long *)0x0) goto LAB_073286ac;
          if (lVar11 != 0) {
            lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) goto LAB_073286c4;
          }
          if ((int)plVar10[3] == 0) goto LAB_07328694;
          plVar10[4] = lVar11;
          thunk_FUN_03f5d7b8(plVar10 + 4,lVar11);
          lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar11,DAT_09219f40,param_4,0);
          if (lVar11 != 0) {
            lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) goto LAB_073286c4;
          }
          if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_07328694;
          plVar10[5] = lVar11;
          thunk_FUN_03f5d7b8(plVar10 + 5,lVar11);
          lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(lVar11,DAT_09217108,(long)iVar5,0);
          if (lVar11 != 0) {
            lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
            if (lVar12 == 0) goto LAB_073286c4;
          }
          if (*(uint *)(plVar10 + 3) < 3) goto LAB_07328694;
          plVar10[6] = lVar11;
          thunk_FUN_03f5d7b8(plVar10 + 6,lVar11);
          uVar7 = IapAdsSystem_UserAdsClassifyTracking__GetKeyTrackingRevenueReward(iVar6);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_073286ac;
          IapAdsSystem_DataTrackingManager__LogEvent(*(long *)(param_1 + 0x28),uVar7,plVar10,0);
          uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)uVar13);
    }
    iVar6 = UnityEngine_PlayerPrefs__GetInt(DAT_092256c8,0,0);
    uVar7 = UnityEngine_PlayerPrefs__GetString(DAT_09221ac8,DAT_091f95f0,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091837d8);
    }
    uVar9 = System_Decimal__TryParse(uVar7,0x1ff,uVar8,&local_98,0);
    if ((uVar9 & 1) == 0) {
      uVar7 = System_String__Concat(DAT_092026d0,uVar7,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar7,0);
      local_98 = 0;
      local_90 = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
      if ((lVar14 != 0) && (0 < (int)*(ulong *)(lVar14 + 0x18))) {
        iVar6 = iVar6 + iVar5;
        uVar9 = 0;
        uVar13 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          uVar8 = local_90;
          uVar7 = local_98;
          uVar4 = local_88._8_8_;
          uVar3 = local_88._0_8_;
          if (uVar13 <= uVar9) goto LAB_07328694;
          iVar5 = *(int *)(lVar14 + 0x20 + uVar9 * 4);
          if (iVar5 <= iVar6) {
            auVar15 = auVar2;
            if (iVar6 == iVar5) {
              if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              auVar15 = System_Decimal__op_Addition(uVar3,uVar4,uVar7,uVar8,0);
            }
            plVar10 = (long *)FUN_03f5c394(DAT_09180358,3);
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091837d8);
            }
            uVar7 = System_Decimal__op_Explicit(auVar15._0_8_,auVar15._8_8_,0);
            lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(uVar7,lVar11,DAT_09225370,0);
            if (plVar10 == (long *)0x0) goto LAB_073286ac;
            if (lVar11 != 0) {
              lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar12 == 0) goto LAB_073286c4;
            }
            if ((int)plVar10[3] == 0) goto LAB_07328694;
            plVar10[4] = lVar11;
            thunk_FUN_03f5d7b8(plVar10 + 4,lVar11);
            lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(lVar11,DAT_09219f40,param_4,0);
            if (lVar11 != 0) {
              lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar12 == 0) goto LAB_073286c4;
            }
            if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_07328694;
            plVar10[5] = lVar11;
            thunk_FUN_03f5d7b8(plVar10 + 5,lVar11);
            lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(lVar11,DAT_09217108,(long)iVar6,0);
            if (lVar11 != 0) {
              lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar12 == 0) goto LAB_073286c4;
            }
            if (*(uint *)(plVar10 + 3) < 3) goto LAB_07328694;
            plVar10[6] = lVar11;
            thunk_FUN_03f5d7b8(plVar10 + 6,lVar11);
            uVar7 = IapAdsSystem_UserAdsClassifyTracking__GetKeyTrackingRevenueAds(iVar5);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_073286ac;
            IapAdsSystem_DataTrackingManager__LogEvent(*(long *)(param_1 + 0x28),uVar7,plVar10,0);
            uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar13);
      }
      UnityEngine_PlayerPrefs__Save(0);
      if (*(long *)(lVar1 + 0x28) == local_78) {
        return;
      }
      goto LAB_073286e4;
    }
  }
LAB_073286ac:
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_073286e4;
LAB_073286c4:
  uVar7 = thunk_FUN_03fa6ef4();
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,0);
  }
  goto LAB_073286e4;
LAB_07328694:
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_073286e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

