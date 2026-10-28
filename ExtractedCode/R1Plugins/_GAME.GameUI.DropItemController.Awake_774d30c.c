// rea decompile_all
// name: _GAME.GameUI.DropItemController$$Awake
// address: 0x774d30c
// body: available
// range: 0x774d30c-0x774d64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774d62c to 0x85cb17c UnityEngine.Animator$$set_updateMode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x774d64c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__Awake(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09522b84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba668);
    FUN_03f5c2a4(&DAT_091ba678);
    FUN_03f5c2a4(&DAT_091bb340);
    FUN_03f5c2a4(&DAT_091baf68);
    FUN_03f5c2a4(&DAT_091bb0d0);
    FUN_03f5c2a4(&DAT_091bb0e8);
    FUN_03f5c2a4(&DAT_0917e830);
    FUN_03f5c2a4(&DAT_0917e898);
    FUN_03f5c2a4(&DAT_0917e928);
    FUN_03f5c2a4(&DAT_0917e890);
    DAT_09522b84 = 1;
  }
  FUN_060e0688(param_1,DAT_091ba668);
  lVar1 = *(long *)(DAT_091ba678 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,param_1,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_09182368);
    System_Threading_CancellationTokenSource___ctor(uVar3,0);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e928);
    FUN_061a1268(uVar3,DAT_091bb340);
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e898);
    FUN_061a1268(uVar3,DAT_091bb0e8);
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e830);
    FUN_061a1268(uVar3,DAT_091baf68);
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e890);
    FUN_061a1268(uVar3,DAT_091bb0d0);
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x110,uVar3);
    uVar3 = thunk_FUN_03f9944c(DAT_0917e890);
    FUN_061a1268(uVar3,DAT_091bb0d0);
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x120,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0774d64c;
      lVar1 = FUN_04a6a6d8(*(long *)(param_1 + 0x20),DAT_091c5630);
      uVar3 = 0;
      if (lVar1 != 0) {
        uVar3 = UnityEngine_Canvas__get_rootCanvas();
      }
      *(undefined8 *)(param_1 + 0x80) = uVar3;
      thunk_FUN_03f5d7b8();
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xc0) != 0) {
        UnityEngine_Animator__set_updateMode(*(long *)(param_1 + 0xc0),2,0);
        return;
      }
LAB_0774d64c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

