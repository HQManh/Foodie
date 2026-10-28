// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$ApplyLeavingLook
// address: 0x4211b04
// body: available
// range: 0x4211b04-0x4211bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4211bc8 to 0x4203a1c AnhPD.FoodOrder.CustomerLineController$$SetWaitingLook (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4211bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerSpawner__ApplyLeavingLook(long param_1,long param_2)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09516c7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c7d = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) != 0) {
    fVar3 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c) * 0.0;
    fVar5 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 100) * 0.0;
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar3) {
      fVar1 = fVar4;
    }
    fVar4 = 0.05;
    if (0.05 <= fVar5) {
      fVar4 = fVar5;
    }
    if (((*(long *)(param_1 + 0x30) != 0) && (param_2 != 0)) && (*(long *)(param_2 + 0x30) != 0)) {
      AnhPD_FoodOrder_CustomerLineController__SetWaitingLook
                (fVar1,fVar4,0x3f800000,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(fVar1,fVar4);
  }
  return;
}

