// rea decompile_all
// name: _GAME.GameUI.RwItemDropCtrl$$PrepareForSpawn
// address: 0x775a898
// body: available
// range: 0x775a898-0x775aa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775a9f0 to 0x85cb17c UnityEngine.Animator$$set_updateMode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775aa00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_RwItemDropCtrl__PrepareForSpawn(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if ((DAT_09522bf1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522bf1 = 1;
  }
  *(undefined2 *)(param_1 + 0x5c) = 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  _GAME_GameUI_RwItemDropCtrl__KillActiveSequence(param_1);
  uVar1 = UnityEngine_Component__get_transform(param_1,0);
  DG_Tweening_ShortcutExtensions__DOKill(uVar1,0,0);
  lVar2 = UnityEngine_Component__get_transform(param_1,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  if (lVar2 != 0) {
    lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar2,0);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (DAT_09515ed5 == '\0') {
      FUN_03f5c2a4(&DAT_091898c0);
      DAT_09515ed5 = '\x01';
    }
    if (lVar2 != 0) {
      puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      UnityEngine_Transform__set_localRotation(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,0);
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        UnityEngine_Animator__set_updateMode(*(long *)(param_1 + 0x48),2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

