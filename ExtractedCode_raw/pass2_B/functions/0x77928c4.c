// rea decompile_all
// name: _GAME.Team.MemberLifeReqUICtrl$$UpdateProfileInfo
// address: 0x77928c4
// body: available
// range: 0x77928c4-0x7792b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7792b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberLifeReqUICtrl__UpdateProfileInfo(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_28;
  
  if ((DAT_09522dae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091f8ab8);
    DAT_09522dae = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((((**(long **)(DAT_0918b978 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38), lVar5 != 0)) &&
      (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) &&
     (uVar2 = FUN_06fd9fbc(lVar5,param_2,&local_28,DAT_0919ffb8), (uVar2 & 1) != 0)) {
    if (local_28 == 0) goto LAB_07792b2c;
    if (*(long *)(local_28 + 0x48) != 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      if ((((plVar3 == (long *)0x0) ||
           ((**(code **)(*plVar3 + 0x178))
                      (plVar3,*(undefined4 *)(*(long *)(local_28 + 0x48) + 0x20),
                       *(undefined8 *)(*plVar3 + 0x180)), local_28 == 0)) ||
          ((*(long *)(local_28 + 0x48) == 0 ||
           ((plVar3 = *(long **)(param_1 + 0x30), plVar3 == (long *)0x0 ||
            ((**(code **)(*plVar3 + 0x178))
                       (plVar3,*(undefined4 *)(*(long *)(local_28 + 0x48) + 0x24),
                        *(undefined8 *)(*plVar3 + 0x180)), local_28 == 0)))))) ||
         (lVar5 = *(long *)(local_28 + 0x48), lVar5 == 0)) goto LAB_07792b2c;
      if (*(int *)(lVar5 + 0x28) == 1) {
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
        if ((local_28 == 0) || (lVar5 = *(long *)(local_28 + 0x48), lVar5 == 0)) goto LAB_07792b2c;
        if (lVar4 <= *(long *)(lVar5 + 0x70)) goto LAB_07792ac0;
        plVar3 = *(long **)(param_1 + 0x38);
        if (plVar3 == (long *)0x0) goto LAB_07792b2c;
        lVar4 = *plVar3;
        uVar1 = *(undefined4 *)(lVar5 + 0x30);
      }
      else {
LAB_07792ac0:
        plVar3 = *(long **)(param_1 + 0x38);
        if (plVar3 == (long *)0x0) goto LAB_07792b2c;
        lVar4 = *plVar3;
        uVar1 = *(undefined4 *)(lVar5 + 0x28);
      }
      (**(code **)(lVar4 + 0x178))(plVar3,uVar1,*(undefined8 *)(lVar4 + 0x180));
      if ((((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
          (plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0)) &&
         (((**(code **)(*plVar3 + 0x188))
                     (plVar3,*(undefined8 *)(*(long *)(local_28 + 0x48) + 0x18),0,
                      *(undefined8 *)(*plVar3 + 400)), local_28 != 0 &&
          (*(long *)(param_1 + 0x40) != 0)))) {
        UnityEngine_GameObject__SetActive
                  (*(long *)(param_1 + 0x40),*(int *)(local_28 + 0x30) == 1,0);
        return;
      }
      goto LAB_07792b2c;
    }
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x178))(plVar3,0,*(undefined8 *)(*plVar3 + 0x180));
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x178))(plVar3,0,*(undefined8 *)(*plVar3 + 0x180));
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x40),0,0);
        plVar3 = *(long **)(param_1 + 0x38);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x178))(plVar3,0,*(undefined8 *)(*plVar3 + 0x180));
          plVar3 = *(long **)(param_1 + 0x38);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x188))(plVar3,DAT_091f8ab8,0,*(undefined8 *)(*plVar3 + 400));
            return;
          }
        }
      }
    }
  }
LAB_07792b2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

