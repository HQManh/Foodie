// rea decompile_all
// name: IapAdsSystem.UserBucketTracking$$RecordRevenueIAP
// address: 0x732a45c
// body: available
// range: 0x732a45c-0x732a973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732a934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732a94c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732a96c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732a970 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_UserBucketTracking__RecordRevenueIAP
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int local_a4;
  undefined1 local_a0 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  uStack_80 = param_3;
  if ((DAT_095205f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f69d8);
    FUN_03f5c2a4(&DAT_09221ce0);
    FUN_03f5c2a4(&DAT_091f6790);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09221ce8);
    FUN_03f5c2a4(&DAT_09219f40);
    DAT_095205f2 = 1;
  }
  local_a4 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  uVar8 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowIapTracking(0);
  auVar6._8_8_ = local_a0._8_8_;
  auVar6._0_8_ = local_a0._0_8_;
  auVar5._8_8_ = local_a0._8_8_;
  auVar5._0_8_ = local_a0._0_8_;
  auVar16._8_8_ = local_a0._8_8_;
  auVar16._0_8_ = local_a0._0_8_;
  if (((((uVar8 & 1) == 0) || (lVar11 = *(long *)(param_1 + 0x28), local_a0 = auVar16, lVar11 == 0))
      || (local_a0 = auVar5, *(long *)(lVar11 + 0x10) == 0)) ||
     (local_a0 = auVar6, *(long *)(lVar11 + 0x18) == 0)) {
LAB_0732a8e8:
    if (*(long *)(lVar2 + 0x28) == local_78) {
      return;
    }
    goto LAB_0732a970;
  }
  uVar13 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x18);
  local_a4 = 1;
  uVar8 = uVar13 & 0xffffffff;
  local_a0._8_8_ = uStack_80;
  local_a0._0_8_ = local_88;
  do {
    uVar8 = uVar8 - 1;
    uVar1 = (int)uVar13 - 1;
    uVar13 = (ulong)uVar1;
    if ((int)uVar1 < 0) goto LAB_0732a648;
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar15 = (float)System_Decimal__op_Explicit(param_2,param_3,0);
    auVar4._8_8_ = local_a0._8_8_;
    auVar4._0_8_ = local_a0._0_8_;
    auVar3._8_8_ = local_a0._8_8_;
    auVar3._0_8_ = local_a0._0_8_;
    lVar11 = *(long *)(param_1 + 0x28);
    if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x10), local_a0 = auVar3, lVar12 == 0))
    goto LAB_0732a920;
    local_a0 = auVar4;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0732a938;
  } while (fVar15 < *(float *)(lVar12 + (uVar8 & 0xffffffff) * 4 + 0x20));
  lVar11 = *(long *)(lVar11 + 0x18);
  if (lVar11 == 0) {
LAB_0732a920:
    if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      iVar14 = *(int *)(lVar11 + (uVar8 & 0xffffffff) * 4 + 0x20);
      local_a4 = iVar14;
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar16 = System_Decimal__op_Implicit(iVar14,0);
      local_a0 = System_Decimal__op_Division(param_2,param_3,auVar16._0_8_,auVar16._8_8_,0);
LAB_0732a648:
      lVar11 = FUN_03f5c394(DAT_091805f8,6);
      if (lVar11 == 0) goto LAB_0732a920;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x20) = DAT_09221ce8;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = System_Decimal__ToString(&local_88,0);
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar11 + 0x28) = uVar9;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x28),uVar9);
          if (2 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x30) = DAT_091f69d8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x30));
            uVar9 = System_Int32__ToString(&local_a4,0);
            if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar11 + 0x38) = uVar9;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x38),uVar9);
              if (4 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x40) = DAT_091f6790;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x40));
                uVar9 = System_Decimal__ToString(local_a0,0);
                if (5 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x48) = uVar9;
                  thunk_FUN_03f5d7b8();
                  uVar9 = System_String__Concat(lVar11,0);
                  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_091835d0);
                  }
                  UnityEngine_Debug__Log(uVar9,0);
                  if (0 < local_a4) {
                    iVar14 = 0;
                    do {
                      plVar10 = (long *)FUN_03f5c394(DAT_09180358,2);
                      uVar7 = local_a0._8_8_;
                      uVar9 = local_a0._0_8_;
                      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_091837d8);
                      }
                      uVar9 = System_Decimal__op_Explicit(uVar9,uVar7,0);
                      lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
                      Firebase_Analytics_Parameter___ctor(uVar9,lVar11,DAT_09225370,0);
                      if (plVar10 == (long *)0x0) goto LAB_0732a920;
                      if (lVar11 != 0) {
                        lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                        if (lVar12 != 0) goto LAB_0732a858;
LAB_0732a950:
                        uVar9 = thunk_FUN_03fa6ef4();
                        if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c414(uVar9,0);
                        }
                        goto LAB_0732a970;
                      }
LAB_0732a858:
                      if ((int)plVar10[3] == 0) goto LAB_0732a938;
                      plVar10[4] = lVar11;
                      thunk_FUN_03f5d7b8(plVar10 + 4,lVar11);
                      lVar11 = thunk_FUN_03f9944c(DAT_09188e48);
                      Firebase_Analytics_Parameter___ctor(lVar11,DAT_09219f40,param_4,0);
                      if (lVar11 != 0) {
                        lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                        if (lVar12 == 0) goto LAB_0732a950;
                      }
                      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_0732a938;
                      plVar10[5] = lVar11;
                      thunk_FUN_03f5d7b8(plVar10 + 5,lVar11);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0732a920;
                      IapAdsSystem_DataTrackingManager__LogEvent
                                (*(long *)(param_1 + 0x30),DAT_09221ce0,plVar10,0);
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < local_a4);
                  }
                  goto LAB_0732a8e8;
                }
              }
            }
          }
        }
      }
    }
LAB_0732a938:
    if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0732a970:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

