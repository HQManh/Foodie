// rea decompile_all
// name: Utilities.UIDraggableFloatingButton$$OnPlayerPointerDown
// address: 0x4526a08
// body: available
// range: 0x4526a08-0x4526b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4526af8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4526afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4526b00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIDraggableFloatingButton__OnPlayerPointerDown
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((DAT_095185fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5888);
    DAT_095185fc = 1;
  }
  if (*(long *)(param_3 + 0x48) != 0) {
    if ((*(char *)(*(long *)(param_3 + 0x48) + 0x18) != '\0') || (*(char *)(param_3 + 0x60) != '\0')
       ) {
      return;
    }
    *(undefined1 *)(param_3 + 0x60) = 1;
    *(undefined1 *)(param_3 + 0x78) = 0;
    DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_3 + 0x88),0,0);
    if (param_5 != 0) {
      *(undefined8 *)(param_3 + 100) = *(undefined8 *)(param_5 + 0x144);
      if (*(long *)(param_3 + 0x28) != 0) {
        uVar4 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_3 + 0x28),0);
        *(undefined4 *)(param_3 + 0x6c) = uVar4;
        *(undefined4 *)(param_3 + 0x70) = param_2;
        uVar4 = UnityEngine_Time__get_time(0);
        *(undefined4 *)(param_3 + 0x74) = uVar4;
        if ((*(long *)(param_3 + 0x30) != 0) &&
           (lVar1 = FUN_04a6ae64(*(long *)(param_3 + 0x30),DAT_091c5888), lVar1 != 0)) {
          lVar3 = *(long *)(lVar1 + 0x18);
          if (lVar3 == 0) {
            uVar2 = 0;
          }
          else {
            if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar2 = *(undefined8 *)(lVar1 + ((lVar3 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
          }
          *(undefined8 *)(param_3 + 0x80) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x80));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

