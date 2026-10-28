// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$TryGetRewardType
// address: 0x7765400
// body: available
// range: 0x7765400-0x7765573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7765570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_Bridge_R1RewardMap__TryGetRewardType(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09522c65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee40);
    FUN_03f5c2a4(&DAT_091a6498);
    FUN_03f5c2a4(&DAT_091a64a0);
    FUN_03f5c2a4(&DAT_091a64a8);
    FUN_03f5c2a4(&DAT_091a96c0);
    FUN_03f5c2a4(&DAT_091a96c8);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_09224f28);
    DAT_09522c65 = 1;
  }
  uVar1 = DAT_09224f28;
  local_40 = 0;
  *param_2 = 0xffffffff;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uVar3 = System_String__op_Equality(param_1,uVar1,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09189978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09189978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06f34328(&local_60,**(long **)(DAT_09189978 + 0xb8),DAT_0919ee40);
    do {
      uVar2 = FUN_07261764(&local_60,DAT_091a64a0);
      uVar1 = local_50;
      if ((uVar2 & 1) == 0) goto LAB_07765544;
      uVar3 = System_String__op_Inequality(uStack_48,param_1,0);
    } while ((uVar3 & 1) != 0);
    *param_2 = (int)uVar1;
LAB_07765544:
    FUN_07261888(&local_60,DAT_091a6498);
  }
  else {
    uVar2 = 1;
    *param_2 = 3;
  }
  return uVar2 & 1;
}

