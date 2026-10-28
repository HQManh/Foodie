// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassFirstOpenCtrl$$OnStartStep2
// address: 0x7817f1c
// body: available
// range: 0x7817f1c-0x78180eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78180e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassFirstOpenCtrl__OnStartStep2(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_0952329a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ac720);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_092265c0);
    DAT_0952329a = 1;
  }
  if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
    local_44 = *(undefined4 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40);
    lVar5 = *(long *)(param_1 + 0x120);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
    uVar2 = System_String__Format(DAT_09226038,uVar2,0);
    if (lVar5 != 0) {
      TMPro_TMP_Text__SetText(lVar5,uVar2,0);
      lVar5 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
      if ((((**(long **)(DAT_09183d58 + 0xb8) != 0) && (lVar5 != 0)) &&
          (lVar5 = FUN_057e0998(lVar5,*(undefined4 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40),
                                DAT_091ac720), lVar5 != 0)) &&
         (**(long **)(DAT_09183d58 + 0xb8) != 0)) {
        local_48 = *(undefined4 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x44);
        iVar1 = *(int *)(lVar5 + 0x14);
        lVar5 = *(long *)(param_1 + 0x118);
        uVar2 = FUN_03f5c42c(DAT_09535420,&local_48);
        local_4c = iVar1;
        uVar3 = FUN_03f5c42c(DAT_09535420,&local_4c);
        uVar2 = System_String__Format(DAT_092265c0,uVar2,uVar3,0);
        if (lVar5 != 0) {
          TMPro_TMP_Text__SetText(lVar5,uVar2,0);
          if ((**(long **)(DAT_09183d58 + 0xb8) != 0) &&
             (plVar4 = *(long **)(param_1 + 0x110), plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0x428))
                      ((float)*(int *)(**(long **)(DAT_09183d58 + 0xb8) + 0x44) / (float)iVar1,
                       plVar4,*(undefined8 *)(*plVar4 + 0x430));
            if (*(long *)(param_1 + 0x108) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x108),1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

