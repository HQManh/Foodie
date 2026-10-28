// rea decompile_all
// name: CakeOrder.Home.NpcHomeControl$$ShowNoti
// address: 0x432e14c
// body: available
// range: 0x432e14c-0x432e24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432e24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_NpcHomeControl__ShowNoti(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_095176c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_095176c2 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = UnityEngine_GameObject__get_gameObject(*(long *)(param_1 + 0x30),0), lVar1 != 0)) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x30),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x14),0x3e800000,uVar2,0);
      uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),uVar2);
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

