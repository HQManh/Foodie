// rea decompile_all
// name: CakeOrder.UI.UIHeartCounter.<IEUpdateInfiniteHeart>d__28$$MoveNext
// address: 0x42baa94
// body: available
// range: 0x42baa94-0x42bafe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bafd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bafd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bafe4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_UI_UIHeartCounter_<IEUpdateInfiniteHeart>d__28__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  
  if ((DAT_095172ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09223ec0);
    FUN_03f5c2a4(&DAT_09225fa8);
    FUN_03f5c2a4(&DAT_092266f0);
    DAT_095172ed = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  local_48 = 0;
  if (iVar1 - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar11 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar9 == 0) goto LAB_042bafd4;
    if (*(float *)(param_1 + 0x28) + *(float *)(lVar9 + 0xa0) <= fVar11) goto LAB_042bab84;
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar12 = 2;
LAB_042bac68:
    *(undefined4 *)(param_1 + 0x10) = uVar12;
    uVar3 = 1;
  }
  else {
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_042bafd4;
      CakeOrder_UI_UIHeartCounter__TriggerUpdateLoop(lVar9);
    }
    else if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_042bab84:
      lVar2 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042bafd4;
      uVar3 = CakeOrder_HeartSystem_HeartSystemController__GetTimeRemainedUnlimitedHeart
                        (**(long **)(lVar2 + 0xb8),0);
      local_48 = uVar3;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar4 = System_TimeSpan__op_LessThanOrEqual(uVar3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = System_TimeSpan__get_Days(&local_48,0);
        if (iVar1 < 1) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar13 = (double)System_TimeSpan__get_TotalHours(&local_48,0);
          iVar1 = -0x80000000;
          if (dVar13 != INFINITY) {
            iVar1 = (int)dVar13;
          }
          if (lVar9 == 0) goto LAB_042bafd4;
          plVar10 = *(long **)(lVar9 + 0x48);
          if (iVar1 < 1) {
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_4c = System_TimeSpan__get_Minutes(&local_48,0);
            uVar3 = FUN_03f5c42c(DAT_09535420,&local_4c);
            local_50 = System_TimeSpan__get_Seconds(&local_48,0);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_50);
            uVar3 = System_String__Format(DAT_09225fa8,uVar3,uVar7,0);
          }
          else {
            local_4c = iVar1;
            uVar3 = FUN_03f5c42c(DAT_09535420,&local_4c);
            if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918bd60);
            }
            local_50 = System_TimeSpan__get_Minutes(&local_48,0);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_50);
            local_54 = System_TimeSpan__get_Seconds(&local_48,0);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_54);
            uVar3 = System_String__Format(DAT_092266f0,uVar3,uVar7,uVar8,0);
          }
        }
        else {
          if (lVar9 == 0) goto LAB_042bafd4;
          plVar10 = *(long **)(lVar9 + 0x48);
          plVar5 = (long *)FUN_03f5c394(DAT_09180318,2);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          local_4c = System_TimeSpan__get_Days(&local_48,0);
          lVar2 = FUN_03f5c42c(DAT_09535420,&local_4c);
          if (plVar5 == (long *)0x0) goto LAB_042bafd4;
          if ((lVar2 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_042bafdc:
            uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,0);
          }
          if ((int)plVar5[3] == 0) {
LAB_042bafd8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5[4] = lVar2;
          thunk_FUN_03f5d7b8(plVar5 + 4,lVar2);
          local_50 = System_TimeSpan__get_Hours(&local_48,0);
          lVar2 = FUN_03f5c42c(DAT_09535420,&local_50);
          if ((lVar2 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_042bafdc;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_042bafd8;
          plVar5[5] = lVar2;
          thunk_FUN_03f5d7b8(plVar5 + 5,lVar2);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09223ec0,plVar5,0);
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x558))(plVar10,uVar3,*(undefined8 *)(*plVar10 + 0x560));
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = System_TimeSpan__get_Milliseconds(&local_48,0);
          fVar11 = 1.0;
          if (0.01 <= (float)iVar1 / 1000.0) {
            fVar11 = (float)iVar1 / 1000.0;
          }
          *(float *)(lVar9 + 0xa0) = fVar11;
          uVar12 = UnityEngine_Time__get_unscaledTime(0);
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x28) = uVar12;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
LAB_042bafd4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *(long *)(DAT_091b4970 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_042bafd4;
      CakeOrder_HeartSystem_HeartSystemController__CheckAndSaveHeartStatus
                (**(long **)(lVar9 + 0xb8),0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar12 = 3;
      goto LAB_042bac68;
    }
    uVar3 = 0;
  }
  return uVar3;
}

