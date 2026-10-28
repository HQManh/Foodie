// rea decompile_all
// name: AnhPD.PopupMinigame.MinigameDragItem$$Rewind
// address: 0x41cf380
// body: available
// range: 0x41cf380-0x41cf657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cf650 to 0x4d9656c FUN_04d9656c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cf654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PopupMinigame_MinigameDragItem__Rewind
               (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09516a27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dc000);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_091ecf98);
    FUN_03f5c2a4(&DAT_09192928);
    DAT_09516a27 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192928);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_3);
    *(undefined8 *)(lVar1 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_4);
    if (*(long *)(param_3 + 0xb8) != 0) {
      UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_3 + 0xb8),0);
    }
    fVar6 = *(float *)(param_3 + 0x98);
    *(undefined1 *)(param_3 + 0xd4) = 0;
    lVar2 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_3);
    if (lVar2 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position(lVar2,0);
      fVar7 = *(float *)(param_3 + 0x80);
      fVar8 = *(float *)(param_3 + 0x84);
      if (DAT_09515fab == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_2 = param_2 - fVar8;
      fVar5 = fVar5 - fVar7;
      fVar7 = 1.0;
      fVar5 = SQRT(fVar5 * fVar5 + param_2 * param_2);
      if (fVar5 < 1.0) {
        fVar7 = *(float *)(param_3 + 0x98);
        fVar6 = fVar5 * fVar7;
      }
      if (*(long *)(param_3 + 0xd8) != 0) {
        fVar5 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0xd8),0);
        fVar8 = *(float *)(param_3 + 0x80);
        fVar9 = *(float *)(param_3 + 0x84);
        if (DAT_09515fab == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515fab = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar7 = fVar7 - fVar9;
        fVar5 = fVar5 - fVar8;
        fVar8 = 0.1;
        if (0.2 <= SQRT(fVar5 * fVar5 + fVar7 * fVar7)) {
          fVar8 = fVar6;
        }
        uVar3 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove
                          (*(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x84),0,fVar8,
                           uVar3,0,0);
        uVar3 = FUN_04d9656c(uVar3,1,DAT_091dc028);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091ecf98,0);
        FUN_04d956bc(uVar3,uVar4,DAT_091dbd10);
        uVar3 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                          (*(undefined4 *)(param_3 + 0x68),*(undefined4 *)(param_3 + 0x6c),
                           *(undefined4 *)(param_3 + 0x70),0x3e99999a,uVar3,0);
        FUN_04d9656c(uVar3,1,DAT_091dc028);
        uVar3 = AnhPD_PopupMinigame_MinigameDragItem__get_Tf(param_3);
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                          (*(undefined4 *)(param_3 + 0x88),*(undefined4 *)(param_3 + 0x8c),
                           *(undefined4 *)(param_3 + 0x90),0x3e99999a,uVar3,0,0);
        FUN_04d9656c(uVar3,1,DAT_091dc000);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

