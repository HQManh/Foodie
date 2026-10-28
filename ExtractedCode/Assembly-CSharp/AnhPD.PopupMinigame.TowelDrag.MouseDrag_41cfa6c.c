// rea decompile_all
// name: AnhPD.PopupMinigame.TowelDrag$$MouseDrag
// address: 0x41cfa6c
// body: available
// range: 0x41cfa6c-0x41cfbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cfbf0 to 0x41cf9d4 AnhPD.PopupMinigame.TowelDrag$$UpdateRate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cfbf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PopupMinigame_TowelDrag__MouseDrag(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(char *)(param_3 + 0xa5) == '\0') && (*(char *)(param_3 + 0xd4) != '\0')) {
    AnhPD_PopupMinigame_MinigameDragItem__ClampPosition(param_3);
  }
  if (*(char *)(param_3 + 0xd4) == '\0') {
    return;
  }
  if (*(char *)(param_3 + 0xa4) == '\0') {
    return;
  }
  if (*(long *)(param_3 + 0x50) != 0) {
    lVar2 = *(long *)(param_3 + 0xe8);
    UnityEngine_Transform__get_position(*(long *)(param_3 + 0x50),0);
    if (lVar2 != 0) {
      uVar1 = UnityEngine_Collider2D__OverlapPoint(lVar2,0);
      if ((uVar1 & 1) == 0) {
        *(undefined1 *)(param_3 + 0x120) = 0;
        return;
      }
      if (*(char *)(param_3 + 0x120) == '\0') {
        if (*(long *)(param_3 + 0x50) == 0) goto LAB_041cfbf4;
        uVar3 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x50),0);
        *(undefined4 *)(param_3 + 0x118) = uVar3;
        *(float *)(param_3 + 0x11c) = param_2;
      }
      *(undefined1 *)(param_3 + 0x120) = 1;
      if (*(long *)(param_3 + 0x50) != 0) {
        fVar4 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x50),0);
        fVar5 = *(float *)(param_3 + 0x118);
        fVar6 = *(float *)(param_3 + 0x11c);
        if (DAT_09515fab == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515fab = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(param_3 + 0x50) != 0) {
          param_2 = param_2 - fVar6;
          fVar4 = fVar4 - fVar5;
          fVar4 = fVar4 * fVar4;
          fVar5 = SQRT(fVar4 + param_2 * param_2);
          uVar3 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x50),0);
          *(undefined4 *)(param_3 + 0x118) = uVar3;
          *(float *)(param_3 + 0x11c) = fVar4;
          if (fVar5 <= *(float *)(param_3 + 0x104)) {
            *(float *)(param_3 + 0x124) = fVar5 + *(float *)(param_3 + 0x124);
            AnhPD_PopupMinigame_TowelDrag__UpdateRate(param_3);
            return;
          }
          lVar2 = *(long *)(param_3 + 0x110);
          if (lVar2 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x041cfbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))
                    (fVar5 / *(float *)(param_3 + 0x104),*(undefined8 *)(lVar2 + 0x40),
                     *(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
    }
  }
LAB_041cfbf4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

