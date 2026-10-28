// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader$$WalkInFrom
// address: 0x42186b8
// body: available
// range: 0x42186b8-0x421889f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421889c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader__WalkInFrom
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  long local_38;
  
  if ((DAT_09516cde & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516cde = 1;
  }
  local_38 = 0;
  if ((*(long *)(param_5 + 0x78) == 0) ||
     (uVar3 = AnhPD_FoodOrder_CustomerLoader__TryGetCurrentCustomer(param_5,&local_38),
     (uVar3 & 1) == 0)) {
    return;
  }
  uVar4 = *(undefined8 *)(param_5 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  fVar5 = 1.0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_5 + 0xa8) == 0) goto LAB_0421889c;
    fVar5 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_5 + 0xa8),0);
  }
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  lVar1 = local_38;
  fVar7 = ABS(fVar5);
  if (ABS(fVar5) <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar6 = fVar7 * 1e-06;
  if (fVar7 * 1e-06 <= fVar8) {
    fVar6 = fVar8;
  }
  fVar7 = 1.0;
  if (fVar6 <= ABS(0.0 - fVar5)) {
    fVar7 = fVar5;
  }
  if ((param_4 <= 0.0) || (param_1 = param_1 / fVar7, ABS(param_1) < 0.001)) {
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    if (lVar1 != 0) {
      AnhPD_FoodOrder_Customer__LocalMoveInstant
                (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],
                 lVar1,0);
      return;
    }
  }
  else if (local_38 != 0) {
    AnhPD_FoodOrder_Customer__LocalMoveInstant(param_1,0,local_38,0);
    lVar1 = local_38;
    uVar9 = *(undefined4 *)(param_5 + 0x20);
    uVar2 = AnhPD_FoodOrder_CustomerLoader__WalkStepsFor(param_1,param_5);
    if (lVar1 != 0) {
      AnhPD_FoodOrder_Customer__WalkIn(-param_1,0x8000000080000000,param_4,uVar9,lVar1,uVar2,0,0);
      return;
    }
  }
LAB_0421889c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

