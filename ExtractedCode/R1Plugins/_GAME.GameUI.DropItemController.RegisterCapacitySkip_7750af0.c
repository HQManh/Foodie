// rea decompile_all
// name: _GAME.GameUI.DropItemController$$RegisterCapacitySkip
// address: 0x7750af0
// body: available
// range: 0x7750af0-0x7750c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__RegisterCapacitySkip(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_4c;
  undefined4 local_48;
  int local_44;
  
  if ((DAT_09522ba7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09200d88);
    FUN_03f5c2a4(&DAT_091f8380);
    FUN_03f5c2a4(&DAT_09221438);
    DAT_09522ba7 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  local_44 = iVar1 + 1;
  *(int *)(param_1 + 0x6c) = local_44;
  if ((iVar1 == 0) || (local_44 % 0x19 == 0)) {
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
    local_48 = *(undefined4 *)(param_1 + 0x60);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
    uVar2 = System_String__Format(DAT_091f8380,uVar2,uVar3,0);
    local_4c = _GAME_GameUI_DropItemController__get_QueuedRequestCount(param_1);
    local_4c = *(int *)(param_1 + 100) + local_4c;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_4c);
    uVar3 = System_String__Format(DAT_09221438,uVar3,0);
    uVar2 = System_String__Concat(DAT_09200d88,uVar2,uVar3,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar2,param_1,0);
  }
  return;
}

