// rea decompile_all
// name: _GAME.Team.MemberChatItemUICtrl$$UpdateProfileInfo
// address: 0x7791e34
// body: available
// range: 0x7791e34-0x779209f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779209c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberChatItemUICtrl__UpdateProfileInfo(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  if ((DAT_09522daa & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09522daa = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), lVar6 != 0)) &&
      (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)) &&
     ((uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(param_2,0), (uVar3 & 1) == 0 &&
      (uVar3 = FUN_06fd9fbc(lVar6,param_2,&local_28,DAT_0919ffb8), (uVar3 & 1) != 0)))) {
    if (local_28 == 0) goto LAB_0779209c;
    if (*(long *)(local_28 + 0x48) != 0) {
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 == (long *)0x0) goto LAB_0779209c;
      (**(code **)(*plVar4 + 0x178))
                (plVar4,*(undefined4 *)(*(long *)(local_28 + 0x48) + 0x20),
                 *(undefined8 *)(*plVar4 + 0x180));
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         (plVar4 = *(long **)(param_1 + 0x30), plVar4 == (long *)0x0)) goto LAB_0779209c;
      (**(code **)(*plVar4 + 0x178))
                (plVar4,*(undefined4 *)(*(long *)(local_28 + 0x48) + 0x24),
                 *(undefined8 *)(*plVar4 + 0x180));
      if ((local_28 == 0) || (lVar6 = *(long *)(local_28 + 0x48), lVar6 == 0)) goto LAB_0779209c;
      if (*(int *)(lVar6 + 0x28) == 1) {
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
        if ((local_28 == 0) || (lVar6 = *(long *)(local_28 + 0x48), lVar6 == 0)) goto LAB_0779209c;
        if (lVar5 <= *(long *)(lVar6 + 0x70)) goto LAB_07792038;
        plVar4 = *(long **)(param_1 + 0x38);
        if (plVar4 == (long *)0x0) goto LAB_0779209c;
        lVar5 = *plVar4;
        uVar1 = *(undefined4 *)(lVar6 + 0x30);
      }
      else {
LAB_07792038:
        plVar4 = *(long **)(param_1 + 0x38);
        if (plVar4 == (long *)0x0) goto LAB_0779209c;
        lVar5 = *plVar4;
        uVar1 = *(undefined4 *)(lVar6 + 0x28);
      }
      (**(code **)(lVar5 + 0x178))(plVar4,uVar1,*(undefined8 *)(lVar5 + 0x180));
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         (plVar4 = *(long **)(param_1 + 0x38), plVar4 == (long *)0x0)) goto LAB_0779209c;
      (**(code **)(*plVar4 + 0x188))
                (plVar4,*(undefined8 *)(*(long *)(local_28 + 0x48) + 0x18),0,
                 *(undefined8 *)(*plVar4 + 400));
      if ((local_28 == 0) || (lVar6 = *(long *)(param_1 + 0x40), lVar6 == 0)) goto LAB_0779209c;
      bVar2 = *(int *)(local_28 + 0x30) == 1;
      goto LAB_07792020;
    }
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      plVar4 = *(long **)(param_1 + 0x38);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (plVar4 = *(long **)(param_1 + 0x38), plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x188))
                    (plVar4,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x20),0,
                     *(undefined8 *)(*plVar4 + 400));
          lVar6 = *(long *)(param_1 + 0x40);
          if (lVar6 != 0) {
            bVar2 = false;
LAB_07792020:
            UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_0779209c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

