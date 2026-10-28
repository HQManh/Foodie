// rea decompile_all
// name: _GAME.GameUI.PopupController$$FindInstance
// address: 0x774c3ac
// body: available
// range: 0x774c3ac-0x774c50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774c50c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_GameUI_PopupController__FindInstance(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09522b77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ecb0);
    FUN_03f5c2a4(&DAT_091a6450);
    FUN_03f5c2a4(&DAT_091a6458);
    FUN_03f5c2a4(&DAT_091a6460);
    FUN_03f5c2a4(&DAT_091a9698);
    FUN_03f5c2a4(&DAT_091a96a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09522b77 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_GameUI_PopupController__RemoveDestroyed();
  lVar2 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06fd8888(&local_70,lVar2,DAT_0919ecb0);
  do {
    uVar3 = FUN_072753d4(&local_70,DAT_091a6458);
    uVar1 = uStack_58;
    uVar4 = local_60;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      break;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  } while ((uVar3 & 1) == 0);
  FUN_072754f4(&local_70,DAT_091a6450);
  return uVar4;
}

