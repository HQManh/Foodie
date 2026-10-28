// rea decompile_all
// name: AnhPD.PopupMinigame.MinigameDragItem$$InitProperties
// address: 0x41cee94
// body: available
// range: 0x41cee94-0x41cf007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cf004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PopupMinigame_MinigameDragItem__InitProperties
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09516a24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5320);
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_09188288);
    DAT_09516a24 = 1;
  }
  uVar1 = FUN_04a6a14c(param_4,DAT_091c5320);
  *(undefined8 *)(param_4 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8();
  lVar2 = FUN_04a6a14c(param_4,DAT_091c54d0);
  plVar3 = (long *)(param_4 + 0x48);
  *plVar3 = lVar2;
  thunk_FUN_03f5d7b8(plVar3,lVar2);
  lVar2 = *plVar3;
  if (*(int *)(DAT_09188288 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar2 != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingOrder
              (lVar2,**(undefined4 **)(DAT_09188288 + 0xb8),0);
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar2 != 0) {
      uVar4 = UnityEngine_Transform__get_localScale(lVar2,0);
      *(undefined4 *)(param_4 + 0x68) = uVar4;
      *(float *)(param_4 + 0x6c) = param_2;
      *(float *)(param_4 + 0x70) = param_3;
      lVar2 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar2 != 0) {
        fVar5 = (float)UnityEngine_Transform__get_localScale(lVar2,0);
        fVar6 = param_3 * 1.1;
        *(ulong *)(param_4 + 0x74) = CONCAT44(param_2 * 1.1,fVar5 * 1.1);
        *(float *)(param_4 + 0x7c) = fVar6;
        lVar2 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_4);
        if (lVar2 != 0) {
          uVar4 = UnityEngine_Transform__get_localPosition(lVar2,0);
          *(undefined4 *)(param_4 + 0x80) = uVar4;
          *(float *)(param_4 + 0x84) = fVar6;
          lVar2 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_4);
          if (lVar2 != 0) {
            uVar4 = UnityEngine_Transform__get_localEulerAngles(lVar2,0);
            *(undefined4 *)(param_4 + 0x88) = uVar4;
            *(float *)(param_4 + 0x8c) = fVar6;
            *(float *)(param_4 + 0x90) = param_3;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

