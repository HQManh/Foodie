// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehaviorDailyReward$$get_OnlineSecondsToday
// address: 0x42e6570
// body: available
// range: 0x42e6570-0x42e6973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e6960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e6964 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e6970 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__get_OnlineSecondsToday(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 local_48;
  double local_38;
  
  if ((DAT_09517457 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187a08);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0920b300);
    FUN_03f5c2a4(&DAT_0921a140);
    FUN_03f5c2a4(&DAT_092261c8);
    FUN_03f5c2a4(&DAT_09225d80);
    FUN_03f5c2a4(&DAT_091ffe40);
    FUN_03f5c2a4(&DAT_091ffe48);
    DAT_09517457 = 1;
  }
  local_38 = 0.0;
  local_48 = 0;
  if (DAT_095174da == '\0') {
    FUN_03f5c2a4(&DAT_09189248);
    DAT_095174da = '\x01';
  }
  uVar7 = **(undefined8 **)(DAT_09189248 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    dVar11 = 0.0;
    if (*(char *)(param_1 + 0x68) == '\0') {
      *(undefined1 *)(param_1 + 0x68) = 1;
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = **(long **)(DAT_09187a08 + 0xb8);
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      uVar7 = DAT_092261c8;
      if ((uVar1 & 1) == 0) {
        plVar6 = &DAT_0921a140;
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_042e6960;
        plVar6 = (long *)(*(long *)(param_1 + 0x20) + 0x18);
      }
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar6;
        if ((lVar9 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
          uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,0);
        }
        if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2[4] = lVar9;
        thunk_FUN_03f5d7b8(plVar2 + 4,lVar9);
        if (lVar8 != 0) {
          EssentialSystemR1_R1Logger__LogErrorFormat(lVar8,uVar7,plVar2,0);
          goto LAB_042e6944;
        }
      }
LAB_042e6960:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_042e6944;
  }
  if (DAT_095174da == '\0') {
    FUN_03f5c2a4(&DAT_09189248);
    DAT_095174da = '\x01';
  }
  if (**(long **)(DAT_09189248 + 0xb8) == 0) goto LAB_042e6960;
  dVar11 = (double)EssentialSystemR1_PlayTimeTracker__get_TotalPlayTimeSecond
                             (**(long **)(DAT_09189248 + 0xb8),0);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_48 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  uVar7 = System_DateTime__ToString(&local_48,DAT_09225d80,0);
  local_38 = 0.0;
  uVar3 = UnityEngine_PlayerPrefs__GetString(DAT_091ffe40,**(undefined8 **)(DAT_09535468 + 0xb8),0);
  uVar1 = System_String__op_Equality(uVar3,uVar7,0);
  if ((uVar1 & 1) == 0) {
LAB_042e6860:
    local_38 = dVar11;
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar3 = System_Double__ToString(&local_38,DAT_0920b300,uVar3,0);
    UnityEngine_PlayerPrefs__SetString(DAT_091ffe48,uVar3,0);
    UnityEngine_PlayerPrefs__SetString(DAT_091ffe40,uVar7,0);
    UnityEngine_PlayerPrefs__Save(0);
  }
  else {
    uVar3 = UnityEngine_PlayerPrefs__GetString
                      (DAT_091ffe48,**(undefined8 **)(DAT_09535468 + 0xb8),0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar1 = System_Double__TryParse(uVar3,0xa7,uVar4,&local_38,0);
    if (((uVar1 & 1) == 0) || (dVar11 < local_38)) goto LAB_042e6860;
  }
  dVar11 = dVar11 - local_38;
LAB_042e6944:
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar11;
  return auVar10;
}

