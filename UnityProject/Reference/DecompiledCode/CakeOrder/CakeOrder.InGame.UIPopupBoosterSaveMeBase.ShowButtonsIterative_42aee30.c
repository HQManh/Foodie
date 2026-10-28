// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$ShowButtonsIterative
// address: 0x42aee30
// body: available
// range: 0x42aee30-0x42af1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42af194 to 0x4d8dd74 FUN_04d8dd74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42af1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__ShowButtonsIterative(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  char local_54 [4];
  char local_48 [4];
  char local_44 [4];
  
  if ((DAT_0951729f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbcb8);
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_0951729f = 1;
  }
  local_44[0] = '\0';
  local_48[0] = '\0';
  local_54[0] = '\0';
  if ((*(long *)(param_2 + 0xf8) == 0) || (*(long *)(param_2 + 0x168) == 0)) goto LAB_042af1b4;
  param_1 = *(float *)(*(long *)(param_2 + 0xf8) + 0x10) + param_1;
  if (*(char *)(*(long *)(param_2 + 0x168) + 0x1c) == '\0') {
    CakeOrder_InGame_UIPopupBoosterSaveMeBase__GetButtonVisibility
              (param_2,local_44,local_48,local_54);
    if (local_44[0] != '\0') {
      if ((*(long *)(param_2 + 200) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 200),0), lVar1 == 0))
      goto LAB_042af1b4;
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (*(long *)(param_2 + 200) == 0) goto LAB_042af1b4;
      uVar2 = UnityEngine_Component__get_transform(*(long *)(param_2 + 200),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x14),
                         *(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x14),uVar2,0);
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x1c),DAT_091dbeb0);
      uVar2 = FUN_04d95c7c(param_1,uVar2,DAT_091dbe48);
      uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
      FUN_04d8dd74(uVar2,DAT_091dbcb8);
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      param_1 = param_1 + *(float *)(*(long *)(param_2 + 0xf8) + 0x18);
    }
    if (local_48[0] != '\0') {
      if ((*(long *)(param_2 + 0x128) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0x128),0), lVar1 == 0))
      goto LAB_042af1b4;
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (*(long *)(param_2 + 0x128) == 0) goto LAB_042af1b4;
      uVar2 = UnityEngine_Component__get_transform(*(long *)(param_2 + 0x128),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x14),
                         *(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x14),uVar2,0);
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x1c),DAT_091dbeb0);
      uVar2 = FUN_04d95c7c(param_1,uVar2,DAT_091dbe48);
      uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
      FUN_04d8dd74(uVar2,DAT_091dbcb8);
      if (*(long *)(param_2 + 0xf8) == 0) goto LAB_042af1b4;
      param_1 = param_1 + *(float *)(*(long *)(param_2 + 0xf8) + 0x18);
    }
    if (local_54[0] == '\0') {
      return;
    }
    if ((*(long *)(param_2 + 0xd0) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0xd0),0), lVar1 == 0))
    goto LAB_042af1b4;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = *(long *)(param_2 + 0xd0);
  }
  else {
    if ((*(long *)(param_2 + 0xc0) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0xc0),0), lVar1 == 0))
    goto LAB_042af1b4;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = *(long *)(param_2 + 0xc0);
  }
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Component__get_transform(lVar1,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (*(long *)(param_2 + 0xf8) != 0) {
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x14),
                         *(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x14),uVar2,0);
      if (*(long *)(param_2 + 0xf8) != 0) {
        uVar2 = FUN_04d95e8c(uVar2,*(undefined4 *)(*(long *)(param_2 + 0xf8) + 0x1c),DAT_091dbeb0);
        uVar2 = FUN_04d95c7c(param_1,uVar2,DAT_091dbe48);
        uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
        FUN_04d8dd74(uVar2,DAT_091dbcb8);
        return;
      }
    }
  }
LAB_042af1b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

