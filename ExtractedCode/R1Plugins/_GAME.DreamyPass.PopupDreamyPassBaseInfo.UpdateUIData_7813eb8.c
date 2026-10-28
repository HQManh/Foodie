// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassBaseInfo$$UpdateUIData
// address: 0x7813eb8
// body: available
// range: 0x7813eb8-0x78141fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78141f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassBaseInfo__UpdateUIData(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  int local_44;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_09523275 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ac718);
    FUN_03f5c2a4(&DAT_091ac720);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_092265c0);
    FUN_03f5c2a4(&DAT_092072a8);
    DAT_09523275 = 1;
  }
  if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
    _GAME_Utils_HelperButton__SetActive
              (*(undefined8 *)(param_1 + 0x20),
               *(char *)(**(long **)(DAT_09183d58 + 0xb8) + 0x20) == '\0',0);
    if ((**(long **)(DAT_09183d58 + 0xb8) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      UnityEngine_GameObject__SetActive
                (*(long *)(param_1 + 0x28),*(undefined1 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x20),
                 0);
      if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
        iVar1 = *(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40);
        lVar2 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
        if (lVar2 != 0) {
          lVar7 = *(long *)(param_1 + 0x40);
          if (iVar1 < *(int *)(lVar2 + 0x18)) {
            if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
              local_34 = *(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40);
              uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
              uVar3 = System_String__Format(DAT_09226038,uVar3,0);
              if (lVar7 != 0) {
                TMPro_TMP_Text__SetText(lVar7,uVar3,0);
                lVar2 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
                if ((((**(long **)(DAT_09183d58 + 0xb8) != 0) && (lVar2 != 0)) &&
                    (lVar2 = FUN_057e0998(lVar2,*(undefined4 *)
                                                 (**(long **)(DAT_09183d58 + 0xb8) + 0x40),
                                          DAT_091ac720), lVar2 != 0)) &&
                   (**(long **)(DAT_09183d58 + 0xb8) != 0)) {
                  local_38 = *(undefined4 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x44);
                  iVar1 = *(int *)(lVar2 + 0x14);
                  lVar2 = *(long *)(param_1 + 0x38);
                  uVar3 = FUN_03f5c42c(DAT_09535420,&local_38);
                  local_44 = iVar1;
                  uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
                  uVar3 = System_String__Format(DAT_092265c0,uVar3,uVar4,0);
                  if (lVar2 != 0) {
                    TMPro_TMP_Text__SetText(lVar2,uVar3,0);
                    if ((**(long **)(DAT_09183d58 + 0xb8) != 0) &&
                       (plVar5 = *(long **)(param_1 + 0x30), plVar5 != (long *)0x0)) {
                      pcVar6 = *(code **)(*plVar5 + 0x428);
                      uVar3 = *(undefined8 *)(*plVar5 + 0x430);
                      fVar8 = (float)*(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x44) /
                              (float)iVar1;
                      goto LAB_078141dc;
                    }
                  }
                }
              }
            }
          }
          else {
            lVar2 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
            if (lVar2 != 0) {
              local_34 = *(int *)(lVar2 + 0x18) + -1;
              uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
              uVar3 = System_String__Format(DAT_09226038,uVar3,0);
              if (lVar7 != 0) {
                TMPro_TMP_Text__SetText(lVar7,uVar3,0);
                lVar2 = DAT_091c0310;
                uVar3 = *(undefined8 *)(param_1 + 0x38);
                lVar7 = *(long *)(DAT_091c0310 + 0x38);
                if (lVar7 == 0) {
                  FUN_03f95ac8(DAT_091c0310);
                  lVar7 = *(long *)(lVar2 + 0x38);
                }
                lVar7 = *(long *)(lVar7 + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_03f95a6c();
                }
                _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey
                          (uVar3,DAT_092072a8,**(undefined8 **)(lVar2 + 0xb8),0);
                plVar5 = *(long **)(param_1 + 0x30);
                if (plVar5 != (long *)0x0) {
                  fVar8 = 1.0;
                  pcVar6 = *(code **)(*plVar5 + 0x428);
                  uVar3 = *(undefined8 *)(*plVar5 + 0x430);
LAB_078141dc:
                  (*pcVar6)(fVar8,plVar5,uVar3);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

