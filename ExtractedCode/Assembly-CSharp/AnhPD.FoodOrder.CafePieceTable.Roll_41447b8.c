// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$Roll
// address: 0x41447b8
// body: available
// range: 0x41447b8-0x41449a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41449a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__Roll(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095163f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163f8 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (param_3 < 1) {
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = AnhPD_FoodOrder_CafePieceTable__get_Strategy();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
    if ((uVar2 & 1) == 0) {
      param_3 = 0;
    }
    else {
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      param_3 = AnhPD_FoodOrder_CafeOrderStrategy__MaxToppingsOf(lVar1,param_2,0);
    }
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_CafePieceTable__RollColdCoffee(&local_50,param_3);
      goto LAB_04144980;
    }
    if (param_2 == 2) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_CafePieceTable__RollDonut(&local_50,param_3);
      goto LAB_04144980;
    }
  }
  else {
    if (param_2 == 3) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_CafePieceTable__RollCupcake(&local_50,param_3);
      goto LAB_04144980;
    }
    if (param_2 == 4) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_CafePieceTable__RollHotCoffee(&local_50,param_3);
      goto LAB_04144980;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  local_40 = puVar3[2];
LAB_04144980:
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}

