// rea decompile_all
// name: _GAME.GameUI.DropItemController$$OnDestroy
// address: 0x774d650
// body: available
// range: 0x774d650-0x774d767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774d764 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__OnDestroy(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09522b85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba670);
    FUN_03f5c2a4(&DAT_091ba678);
    DAT_09522b85 = 1;
  }
  lVar1 = *(long *)(DAT_091ba678 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar4 = **(undefined8 **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x70) = 1;
    if (*(long *)(param_1 + 0x78) != 0) {
      System_Threading_CancellationTokenSource__Cancel(*(long *)(param_1 + 0x78),0);
    }
    _GAME_GameUI_DropItemController__CancelPendingRequests(param_1);
    _GAME_GameUI_DropItemController__CancelBagAnimation(param_1);
  }
  FUN_060e08a4(param_1,DAT_091ba670);
  plVar3 = (long *)(param_1 + 0x78);
  if (*plVar3 != 0) {
    System_Threading_CancellationTokenSource__Dispose(*plVar3,0);
  }
  *plVar3 = 0;
  thunk_FUN_03f5d7b8(plVar3,0);
  return;
}

