// rea decompile_all
// name: AnhPD.PointerInput$$PollMouse
// address: 0x41cb0f8
// body: available
// range: 0x41cb0f8-0x41cb29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cb298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PointerInput__PollMouse(undefined1 param_1 [16],undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((DAT_09516a04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8ff8);
    FUN_03f5c2a4(&DAT_091893b8);
    DAT_09516a04 = 1;
  }
  if (DAT_09516af9 == '\0') {
    FUN_03f5c2a4(&DAT_09188428);
    DAT_09516af9 = '\x01';
  }
  lVar3 = **(long **)(DAT_09188428 + 0xb8);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x188) != 0) {
      uVar4 = FUN_05483d88(*(long *)(lVar3 + 0x188),DAT_091a8ff8);
      if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(DAT_091893b8 + 0xb8);
      *(undefined4 *)(lVar2 + 8) = uVar4;
      *(undefined4 *)(lVar2 + 0xc) = param_2;
      if (*(long *)(lVar3 + 0x1c0) != 0) {
        bVar1 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                          (*(long *)(lVar3 + 0x1c0),0);
        lVar2 = *(long *)(lVar3 + 0x1c0);
        *(byte *)(*(long *)(DAT_091893b8 + 0xb8) + 0x10) = bVar1 & 1;
        if (lVar2 != 0) {
          bVar1 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame(lVar2,0);
          lVar3 = *(long *)(lVar3 + 0x1c0);
          *(byte *)(*(long *)(DAT_091893b8 + 0xb8) + 0x11) = bVar1 & 1;
          if (lVar3 != 0) {
            bVar1 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasReleasedThisFrame
                              (lVar3,0);
            goto LAB_041cb278;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = UnityEngine_Input__get_mousePosition(0);
  if (*(int *)(DAT_091893b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_091893b8 + 0xb8);
  *(undefined4 *)(lVar3 + 8) = uVar4;
  *(undefined4 *)(lVar3 + 0xc) = param_2;
  bVar1 = UnityEngine_Input__GetMouseButton(0,0);
  *(byte *)(*(long *)(DAT_091893b8 + 0xb8) + 0x10) = bVar1 & 1;
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,0);
  *(byte *)(*(long *)(DAT_091893b8 + 0xb8) + 0x11) = bVar1 & 1;
  bVar1 = UnityEngine_Input__GetMouseButtonUp(0,0);
LAB_041cb278:
  *(byte *)(*(long *)(DAT_091893b8 + 0xb8) + 0x12) = bVar1 & 1;
  return;
}

