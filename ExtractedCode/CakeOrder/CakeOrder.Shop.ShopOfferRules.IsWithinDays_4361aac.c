// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$IsWithinDays
// address: 0x4361aac
// body: available
// range: 0x4361aac-0x4361bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4361bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_Shop_ShopOfferRules__IsWithinDays(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_38;
  
  if ((DAT_09517854 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09517854 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_DateTime__op_Equality(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_DateTime__op_Subtraction(uVar3,param_2,0);
    local_38 = uVar3;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar2 = System_TimeSpan__op_LessThan(uVar3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar4 = (double)System_TimeSpan__get_TotalDays(&local_38,0);
      bVar1 = dVar4 < (double)param_3;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

