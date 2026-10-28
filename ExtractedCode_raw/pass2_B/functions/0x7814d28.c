// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassLevelUICtrl$$UpdateUIData
// address: 0x7814d28
// body: available
// range: 0x7814d28-0x7814eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7814ea4 to 0x7741114 _GAME.Utils.HelperButton$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7814ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassLevelUICtrl__UpdateUIData(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  
  if ((DAT_095232c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ab408);
    DAT_095232c1 = 1;
  }
  lVar7 = **(long **)(DAT_09183d58 + 0xb8);
  if (((lVar7 != 0) && (*(long *)(param_1 + 0x98) != 0)) && (*(long *)(lVar7 + 0x30) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x98) + 0x10);
    cVar3 = *(char *)(lVar7 + 0x20);
    iVar2 = *(int *)(lVar7 + 0x40);
    bVar5 = FUN_0571bde4(*(long *)(lVar7 + 0x30),iVar1,DAT_091ab408);
    if ((**(long **)(DAT_09183d58 + 0xb8) != 0) && (*(long *)(param_1 + 0x98) != 0)) {
      lVar7 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x38);
      if (lVar7 != 0) {
        bVar6 = FUN_0571bde4(lVar7,*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10),DAT_091ab408);
        _GAME_Utils_HelperGameObject__SetActive(*(undefined8 *)(param_1 + 0x88),iVar1 < iVar2,0);
        _GAME_Utils_HelperGameObject__SetActive(*(undefined8 *)(param_1 + 0x90),iVar2 <= iVar1,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x50),bVar5 & 1,0);
          _GAME_Utils_HelperButton__SetActive
                    (*(undefined8 *)(param_1 + 0x48),iVar1 < iVar2 & (bVar5 ^ 1),0);
          if (*(long *)(param_1 + 0x70) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x70),bVar6 & 1,0);
            if (*(long *)(param_1 + 0x78) != 0) {
              bVar4 = cVar3 == '\0';
              UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x78),bVar4,0);
              bVar5 = 0;
              if (iVar1 < iVar2) {
                bVar5 = !bVar4 & (bVar6 ^ 1);
              }
              _GAME_Utils_HelperButton__SetActive(*(undefined8 *)(param_1 + 0x68),bVar5,0);
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

