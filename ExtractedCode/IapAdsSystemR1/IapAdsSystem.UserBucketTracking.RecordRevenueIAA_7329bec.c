// rea decompile_all
// name: IapAdsSystem.UserBucketTracking$$RecordRevenueIAA
// address: 0x7329bec
// body: available
// range: 0x7329bec-0x732a113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732a048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732a10c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732a110 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_UserBucketTracking__RecordRevenueIAA
               (long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  long local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((DAT_095205f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09225630);
    FUN_03f5c2a4(&DAT_09221ac0);
    FUN_03f5c2a4(&DAT_092026d8);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_095205f1 = 1;
  }
  uStack_98 = 0;
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_a0 = param_1;
  thunk_FUN_03f5d7b8(&local_a0,param_1);
  uStack_98 = param_5;
  thunk_FUN_03f5d7b8((ulong)&local_a0 | 8,param_5);
  uVar5 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowAdsTracking(0);
  if ((uVar5 & 1) == 0) {
LAB_0732a0c4:
    if (*(long *)(lVar2 + 0x28) == local_78) {
      return;
    }
  }
  else {
    uVar6 = UnityEngine_PlayerPrefs__GetString(DAT_09221ac0,DAT_091f95f0,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Decimal__TryParse(uVar6,0x1ff,uVar7,local_90,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = System_String__Concat(DAT_092026d8,uVar6,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar6,0);
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
    }
    uVar7 = local_90._8_8_;
    uVar6 = local_90._0_8_;
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_90 = System_Decimal__op_Addition(uVar6,uVar7,param_3,param_4,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar6 = System_Decimal__ToString(local_90,uVar6,0);
    UnityEngine_PlayerPrefs__SetString(DAT_09221ac0,uVar6,0);
    if (param_2 == 2) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 != 0) goto LAB_07329e4c;
    }
    else {
      if ((((param_2 != 3) || (lVar8 = *(long *)(param_1 + 0x20), lVar8 == 0)) ||
          (*(long *)(lVar8 + 0x10) == 0)) || (*(long *)(lVar8 + 0x18) == 0)) {
LAB_0732a0b8:
        UnityEngine_PlayerPrefs__Save(0);
        goto LAB_0732a0c4;
      }
LAB_07329e4c:
      uVar5 = 0;
      bVar3 = false;
      do {
        uVar7 = local_90._8_8_;
        uVar6 = local_90._0_8_;
        lVar9 = *(long *)(lVar8 + 0x10);
        if (lVar9 == 0) break;
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar5) {
LAB_0732a04c:
          if (bVar3) {
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Decimal__ToString(local_90,0);
            uVar6 = System_String__Concat(DAT_09225630,uVar6,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__Log(uVar6,0);
          }
          goto LAB_0732a0b8;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar5) {
LAB_0732a0f8:
          if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_0732a110;
        }
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_0732a0f8;
        uVar10 = *(undefined8 *)(lVar9 + uVar5 * 8 + 0x20);
        fVar12 = *(float *)(lVar8 + uVar5 * 4 + 0x20);
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar11 = (float)System_Decimal__op_Explicit(uVar6,uVar7,0);
        if (fVar11 < fVar12) goto LAB_0732a04c;
        lVar8 = *(long *)(param_1 + 0x20);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) break;
        if (uVar5 == *(int *)(*(long *)(lVar8 + 0x10) + 0x18) - 1) {
          IapAdsSystem_UserBucketTracking__<RecordRevenueIAA>g__LogMilestone_15_0
                    (param_1,uVar5 & 0xffffffff,&local_a0);
LAB_0732a024:
          bVar3 = true;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) break;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar5 + 1) goto LAB_0732a0f8;
          fVar11 = *(float *)(lVar8 + (long)(int)(uVar5 + 1) * 4 + 0x20);
          if (DAT_09516626 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09516626 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = local_90._8_8_;
          uVar6 = local_90._0_8_;
          fVar11 = fVar11 / fVar12;
          iVar1 = -0x80000000;
          if ((float)(int)fVar11 != INFINITY) {
            iVar1 = (int)fVar11;
          }
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar11 = (float)System_Decimal__op_Explicit(uVar6,uVar7,0);
          if (DAT_09516626 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09516626 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar4 = -0x80000000;
          if ((float)(int)(fVar11 / fVar12) != INFINITY) {
            iVar4 = (int)(fVar11 / fVar12);
          }
          if (iVar4 <= iVar1) {
            iVar1 = iVar4;
          }
          uVar6 = IapAdsSystem_UserBucketTracking__GetPrefKeyMultiplierTrackedBucketIAA(uVar10);
          iVar4 = UnityEngine_PlayerPrefs__GetInt(uVar6,0,0);
          if (iVar4 < iVar1) {
            IapAdsSystem_UserBucketTracking__<RecordRevenueIAA>g__LogMilestone_15_0
                      (param_1,uVar5 & 0xffffffff,&local_a0);
            UnityEngine_PlayerPrefs__SetInt(uVar6,iVar1,0);
            goto LAB_0732a024;
          }
        }
        uVar5 = uVar5 + 1;
        lVar8 = *(long *)(param_1 + 0x20);
      } while (lVar8 != 0);
    }
    if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0732a110:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

