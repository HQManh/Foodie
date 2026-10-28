// rea decompile_all
// name: CakeOrder.InGame.UITimeCounterTimeSpan$$Update
// address: 0x437c5a4
// body: available
// range: 0x437c5a4-0x437cc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437c65c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437c6a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437cc44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437cc48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UITimeCounterTimeSpan__Update(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 local_54;
  undefined8 local_48;
  
  if ((DAT_09517949 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180c58);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09226898);
    FUN_03f5c2a4(&DAT_092268e0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09517949 = 1;
  }
  local_48 = 0;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_0437cc44;
  lVar2 = System_Array__Clone(*(long *)(param_1 + 0x68),0);
  uVar5 = DAT_09180c58;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_03f99350(lVar2,DAT_09180c58);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar5);
    }
  }
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_0437cc44;
  lVar2 = System_Array__Clone(*(long *)(param_1 + 0x70),0);
  uVar5 = DAT_091801b8;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_03f99350(lVar2,DAT_091801b8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar5);
    }
  }
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) goto LAB_0437cc44;
  local_48 = (**(code **)(lVar2 + 0x18))
                       (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  dVar13 = (double)System_TimeSpan__get_TotalDays(&local_48,0);
  if (dVar13 <= 0.0) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar13 = (double)System_TimeSpan__get_TotalHours(&local_48,0);
    if (0.0 < dVar13) {
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 == 0) goto LAB_0437cc44;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x20) = 4;
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_TimeSpan__get_Hours(&local_48,0);
      if (lVar2 == 0) goto LAB_0437cc44;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x20) = uVar1;
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 == 0) goto LAB_0437cc44;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x24) = 5;
      lVar2 = *(long *)(param_1 + 0x70);
      uVar1 = System_TimeSpan__get_Minutes(&local_48,0);
      goto joined_r0x0437c8a8;
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar13 = (double)System_TimeSpan__get_TotalMinutes(&local_48,0);
    lVar2 = *(long *)(param_1 + 0x68);
    if (0.0 < dVar13) {
      if (lVar2 == 0) goto LAB_0437cc44;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x20) = 5;
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_TimeSpan__get_Minutes(&local_48,0);
      if (lVar2 == 0) goto LAB_0437cc44;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x20) = uVar1;
      lVar2 = *(long *)(param_1 + 0x68);
      if (lVar2 == 0) goto LAB_0437cc44;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
      *(undefined4 *)(lVar2 + 0x24) = 6;
      lVar2 = *(long *)(param_1 + 0x70);
      uVar1 = System_TimeSpan__get_Seconds(&local_48,0);
      goto joined_r0x0437c8a8;
    }
    if (lVar2 == 0) goto LAB_0437cc44;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x20) = 6;
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_TimeSpan__get_Seconds(&local_48,0);
    if (lVar2 == 0) goto LAB_0437cc44;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) goto LAB_0437cc44;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x24) = 0;
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 == 0) goto LAB_0437cc44;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
    uVar1 = 0xffffffff;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) goto LAB_0437cc44;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x20) = 3;
    lVar2 = *(long *)(param_1 + 0x70);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_TimeSpan__get_Days(&local_48,0);
    if (lVar2 == 0) goto LAB_0437cc44;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) goto LAB_0437cc44;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
    *(undefined4 *)(lVar2 + 0x24) = 4;
    lVar2 = *(long *)(param_1 + 0x70);
    uVar1 = System_TimeSpan__get_Hours(&local_48,0);
joined_r0x0437c8a8:
    if (lVar2 == 0) goto LAB_0437cc44;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
  }
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0437cc48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
      if (*(int *)(lVar3 + 0x20) == *(int *)(lVar2 + 0x20)) {
        if (lVar4 == 0) goto LAB_0437cc44;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0437cc48;
        lVar10 = *(long *)(param_1 + 0x70);
        if (lVar10 == 0) goto LAB_0437cc44;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0437cc48;
        if (*(int *)(lVar4 + 0x20) == *(int *)(lVar10 + 0x20)) {
          if ((*(int *)(lVar3 + 0x18) == 1) || (*(int *)(lVar2 + 0x18) == 1)) goto LAB_0437cc48;
          if (*(int *)(lVar3 + 0x24) == *(int *)(lVar2 + 0x24)) {
            if ((*(int *)(lVar4 + 0x18) == 1) || (*(int *)(lVar10 + 0x18) == 1)) goto LAB_0437cc48;
            if (*(int *)(lVar4 + 0x24) == *(int *)(lVar10 + 0x24)) {
              return;
            }
          }
        }
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        plVar11 = *(long **)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x70);
        if (*(char *)(*(long *)(param_1 + 0x50) + 0x1c) == '\0') {
          if (lVar2 == 0) goto LAB_0437cc44;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
          local_54 = *(undefined4 *)(lVar2 + 0x20);
          uVar9 = FUN_03f5c42c(DAT_09535420,&local_54);
          uVar5 = DAT_09226898;
          lVar2 = *(long *)(param_1 + 0x68);
          if (lVar2 == 0) goto LAB_0437cc44;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
          uVar6 = DAT_091f5700;
          if (*(int *)(lVar2 + 0x24) != 0) {
            if ((*(long *)(param_1 + 0x50) == 0) || (lVar2 = *(long *)(param_1 + 0x70), lVar2 == 0))
            goto LAB_0437cc44;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
            local_54 = *(undefined4 *)(lVar2 + 0x24);
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x20);
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_54);
            uVar6 = System_String__Format(DAT_09226898,uVar7,uVar6,0);
          }
          uVar5 = System_String__Format(uVar5,uVar9,uVar6,0);
        }
        else {
          if (lVar2 == 0) goto LAB_0437cc44;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
          local_54 = *(undefined4 *)(lVar2 + 0x20);
          uVar5 = FUN_03f5c42c(DAT_09535420,&local_54);
          lVar2 = *(long *)(param_1 + 0x68);
          if (lVar2 == 0) goto LAB_0437cc44;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
          uVar6 = CakeOrder_InGame_UITimeCounterTimeSpan__DisplayUnitToString
                            (*(undefined4 *)(lVar2 + 0x20));
          uVar9 = DAT_092268e0;
          lVar2 = *(long *)(param_1 + 0x68);
          if (lVar2 == 0) goto LAB_0437cc44;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
          uVar7 = DAT_091f5700;
          if (*(int *)(lVar2 + 0x24) != 0) {
            if ((*(long *)(param_1 + 0x50) == 0) || (lVar2 = *(long *)(param_1 + 0x70), lVar2 == 0))
            goto LAB_0437cc44;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
            local_54 = *(undefined4 *)(lVar2 + 0x24);
            uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x20);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_54);
            lVar2 = *(long *)(param_1 + 0x68);
            if (lVar2 == 0) goto LAB_0437cc44;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) == 0) goto LAB_0437cc48;
            uVar8 = CakeOrder_InGame_UITimeCounterTimeSpan__DisplayUnitToString
                              (*(undefined4 *)(lVar2 + 0x24));
            uVar7 = System_String__Format(DAT_092268e0,uVar12,uVar7,uVar8,0);
          }
          uVar5 = System_String__Format(uVar9,uVar5,uVar6,uVar7,0);
        }
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x558))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x560));
          lVar2 = *(long *)(param_1 + 0x68);
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
            if (*(int *)(lVar2 + 0x20) != 6) {
              return;
            }
            lVar2 = *(long *)(param_1 + 0x70);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0437cc48;
              if (*(long *)(param_1 + 0x50) != 0) {
                if (*(int *)(*(long *)(param_1 + 0x50) + 0x10) < *(int *)(lVar2 + 0x20)) {
                  return;
                }
                DG_Tweening_TweenExtensions__Restart(0xbf800000,*(undefined8 *)(param_1 + 0x78),1,0)
                ;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0437cc44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

