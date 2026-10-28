// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$CanGrant
// address: 0x77655e8
// body: available
// range: 0x77655e8-0x77656df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77656d8 to 0x6f340e0 FUN_06f340e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77656dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GAME_Bridge_R1RewardMap__CanGrant(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_09522c66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee38);
    FUN_03f5c2a4(&DAT_09189978);
    DAT_09522c66 = 1;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (*(int *)(DAT_09189978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = (ulong)(iVar1 - 1U < 2);
    }
    else {
      if (*(int *)(DAT_09189978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((2 < iVar1 - 0x32U) && (*(int *)(param_1 + 0x10) != 3)) {
        if (*(int *)(DAT_09189978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09189978 + 0xb8) != 0) {
          uVar2 = FUN_06f340e0(**(long **)(DAT_09189978 + 0xb8),*(undefined4 *)(param_1 + 0x10),
                               DAT_0919ee38);
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

