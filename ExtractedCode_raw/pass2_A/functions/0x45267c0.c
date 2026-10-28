// rea decompile_all
// name: Utilities.UIDraggableFloatingButton$$Awake
// address: 0x45267c0
// body: available
// range: 0x45267c0-0x45269df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45269d8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45269dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIDraggableFloatingButton__Awake(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_095185fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174c90);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09181e18);
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc8c0);
    FUN_03f5c2a4(&DAT_091dc8c8);
    FUN_03f5c2a4(&DAT_091dc8b8);
    DAT_095185fb = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = thunk_FUN_03f9944c(DAT_09174c90);
  FUN_071cd244(uVar1,param_1,DAT_091dc8c0,0);
  if (lVar4 != 0) {
    Utilities_ForwardUIPointerEvent__add_onMouseDown(lVar4,uVar1,0);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar1 = thunk_FUN_03f9944c(DAT_09174c90);
    FUN_071cd244(uVar1,param_1,DAT_091dc8c8,0);
    if (lVar4 != 0) {
      Utilities_ForwardUIPointerEvent__add_onMouseUp(lVar4,uVar1,0);
      puVar5 = (undefined8 *)(param_1 + 0x30);
      uVar1 = *puVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar4 == 0) goto LAB_045269dc;
        uVar1 = UnityEngine_Transform__GetParent(lVar4,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = UnityEngine_Component__get_transform(param_1,0);
          if ((lVar4 == 0) || (lVar4 = UnityEngine_Transform__GetParent(lVar4,0), lVar4 == 0))
          goto LAB_045269dc;
          uVar1 = FUN_04a6a14c(lVar4,DAT_091c5430);
          *puVar5 = uVar1;
          thunk_FUN_03f5d7b8(puVar5,uVar1);
        }
      }
      uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar1,param_1,DAT_091dc8b8,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09181e18);
      Utilities_BoolModifierWithRegisteredSource___ctor(uVar3,uVar1,0);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar3);
      return;
    }
  }
LAB_045269dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

