// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards.<IECountdownToNextMilestone>d__33$$MoveNext
// address: 0x42ea850
// body: available
// range: 0x42ea850-0x42eaaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eaaec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_LiveOpsImplement_UIPopupDailyRewards_<IECountdownToNextMilestone>d__33__MoveNext
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 local_48;
  
  if ((DAT_0951747b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0921cb40);
    FUN_03f5c2a4(&DAT_091f96b0);
    DAT_0951747b = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  local_48 = 0;
  if (uVar1 < 3) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
LAB_042eaaec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = *(undefined8 *)(lVar5 + 0xc0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      CakeOrder_LiveOpsImplement_UIPopupDailyRewards__UpdateProgressFill(lVar5);
      CakeOrder_LiveOpsImplement_UIPopupDailyRewards__RefreshCountdownViews(lVar5);
      lVar3 = *(long *)(lVar5 + 0xc0);
      if (lVar3 == 0) goto LAB_042eaaec;
      local_48 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__GetTimespanToMilestone
                           (lVar3,*(undefined4 *)(lVar3 + 0x48));
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      dVar9 = (double)System_TimeSpan__get_TotalSeconds(&local_48,0);
      uVar7 = *(undefined8 *)(lVar5 + 0xd0);
      if (dVar9 <= 0.0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        fVar11 = 1.0;
        if ((uVar2 & 1) != 0) {
          plVar6 = *(long **)(lVar5 + 0xd0);
          if (plVar6 == (long *)0x0) goto LAB_042eaaec;
          (**(code **)(*plVar6 + 0x558))(plVar6,DAT_091f96b0,*(undefined8 *)(*plVar6 + 0x560));
          fVar11 = 1.0;
        }
      }
      else {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          plVar6 = *(long **)(lVar5 + 0xd0);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_TimeSpan__ToString(&local_48,DAT_0921cb40,0);
          if (plVar6 == (long *)0x0) goto LAB_042eaaec;
          (**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
        }
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar9 = (double)System_TimeSpan__get_TotalSeconds(&local_48,0);
        fVar8 = (float)dVar9 - (float)(int)dVar9;
        fVar10 = 1.0;
        if (fVar8 <= 1.0) {
          fVar10 = fVar8;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar8) {
          fVar11 = fVar10;
        }
      }
      uVar7 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(fVar11,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
      uVar4 = 2;
    }
    else {
      uVar7 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f800000,uVar7,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar7);
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  return uVar1 < 3;
}

