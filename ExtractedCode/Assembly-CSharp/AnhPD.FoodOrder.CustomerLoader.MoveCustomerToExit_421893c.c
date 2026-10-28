// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$MoveCustomerToExit
// address: 0x421893c
// body: available
// range: 0x421893c-0x42189ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42189c8 to 0x4201d48 AnhPD.FoodOrder.Customer$$LocalMove (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42189fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader__MoveCustomerToExit
               (float param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_28;
  
  local_28 = 0;
  uVar1 = AnhPD_FoodOrder_CustomerLoader__TryGetExitDelta
                    (param_2,param_3,(long)&local_28 + 4,&local_28);
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042189e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x18))(*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28))
      ;
      return;
    }
    return;
  }
  fVar3 = 0.01;
  fVar2 = fVar3;
  if (0.01 <= param_1) {
    fVar2 = param_1;
  }
  fVar2 = fVar2 * *(float *)(param_2 + 0x34);
  fVar4 = 0.0;
  if (0.01 < fVar2) {
    fVar3 = ABS((float)local_28);
    fVar4 = fVar3 / fVar2;
  }
  if (param_3 != 0) {
    AnhPD_FoodOrder_Customer__LocalMove(local_28._4_4_,0,fVar4,0,param_3,param_4,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(fVar2,fVar3,fVar4);
}

