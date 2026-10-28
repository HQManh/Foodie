// rea decompile_all
// name: CakeOrder.UI.UIHeartCounter.<IEUpdateHeartCooldown>d__29$$MoveNext
// address: 0x42ba678
// body: available
// range: 0x42ba678-0x42baa47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42baa44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_UI_UIHeartCounter_<IEUpdateHeartCooldown>d__29__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  if ((DAT_095172ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09225fa8);
    DAT_095172ec = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  local_48 = 0;
  local_4c = 0;
  if (iVar1 - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar5 == 0) goto LAB_042baa44;
    if (fVar7 < *(float *)(param_1 + 0x28) + *(float *)(lVar5 + 0xa0)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar10 = 2;
      goto LAB_042ba73c;
    }
  }
  else {
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        CakeOrder_UI_UIHeartCounter__TriggerUpdateLoop(lVar5);
        return 0;
      }
      goto LAB_042baa44;
    }
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  lVar2 = *(long *)(DAT_091b4970 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar2 + 0xb8) == 0) ||
     (local_48 = CakeOrder_HeartSystem_HeartSystemController__GetTimeRemainedToRecoverHeart
                           (**(long **)(lVar2 + 0xb8),0), lVar5 == 0)) {
LAB_042baa44:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6 = *(long **)(lVar5 + 0x70);
  local_4c = CakeOrder_UI_UIHeartCounter__CalculateTotalHeartAmount(lVar5);
  uVar3 = System_Int32__ToString(&local_4c,0);
  if (plVar6 == (long *)0x0) goto LAB_042baa44;
  (**(code **)(*plVar6 + 0x558))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x560));
  plVar6 = *(long **)(lVar5 + 0x48);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar11 = (double)System_TimeSpan__get_TotalMinutes(&local_48,0);
  local_50 = -0x80000000;
  if (dVar11 != INFINITY) {
    local_50 = (int)dVar11;
  }
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_50);
  local_54 = System_TimeSpan__get_Seconds(&local_48,0);
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_54);
  uVar3 = System_String__Format(DAT_09225fa8,uVar3,uVar4,0);
  if (plVar6 == (long *)0x0) goto LAB_042baa44;
  (**(code **)(*plVar6 + 0x558))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x560));
  iVar1 = System_TimeSpan__get_Days(&local_48,0);
  if (iVar1 < 1) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_TimeSpan__get_Hours(&local_48,0);
    if (iVar1 < 1) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar11 = (double)System_TimeSpan__get_TotalSeconds(&local_48,0);
      if (dVar11 <= 0.0) {
        lVar5 = *(long *)(DAT_091b4970 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          CakeOrder_HeartSystem_HeartSystemController__CheckAndSaveHeartStatus
                    (**(long **)(lVar5 + 0xb8),0);
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          uVar10 = 3;
LAB_042ba73c:
          *(undefined4 *)(param_1 + 0x10) = uVar10;
          return 1;
        }
        goto LAB_042baa44;
      }
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar11 = (double)System_TimeSpan__get_TotalSeconds(&local_48,0);
      fVar8 = (float)dVar11 - (float)(int)dVar11;
      fVar7 = 1.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
      goto LAB_042ba948;
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar11 = (double)System_TimeSpan__get_TotalMinutes(&local_48,0);
    fVar7 = 60.0;
  }
  else {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar11 = (double)System_TimeSpan__get_TotalHours(&local_48,0);
    fVar7 = 3600.0;
  }
  fVar8 = (float)dVar11 - (float)(int)dVar11;
  fVar9 = 1.0;
  if (fVar8 <= 1.0) {
    fVar9 = fVar8;
  }
  fVar7 = fVar9 * fVar7;
LAB_042ba948:
  fVar9 = 0.0;
  if (0.0 <= fVar8) {
    fVar9 = fVar7;
  }
  *(float *)(lVar5 + 0xa0) = fVar9;
  uVar10 = UnityEngine_Time__get_unscaledTime(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

