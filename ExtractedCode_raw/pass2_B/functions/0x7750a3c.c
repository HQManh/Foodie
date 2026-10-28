// rea decompile_all
// name: _GAME.GameUI.DropItemController$$CanAcceptRequest
// address: 0x7750a3c
// body: available
// range: 0x7750a3c-0x7750aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_GameUI_DropItemController__CanAcceptRequest(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_09522ba2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522ba2 = 1;
  }
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x60);
      uVar4 = NEON_smax(*(undefined8 *)(param_1 + 0x38),1,4);
      iVar2 = _GAME_GameUI_DropItemController__get_QueuedRequestCount(param_1);
      return (long)iVar1 + (long)(*(int *)(param_1 + 100) + iVar2) <
             (long)(ulong)(uint)((int)((ulong)uVar4 >> 0x20) + (int)uVar4);
    }
  }
  return false;
}

