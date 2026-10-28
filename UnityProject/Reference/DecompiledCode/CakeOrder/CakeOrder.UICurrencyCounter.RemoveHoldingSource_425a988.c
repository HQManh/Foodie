// rea decompile_all
// name: CakeOrder.UICurrencyCounter$$RemoveHoldingSource
// address: 0x425a988
// body: available
// range: 0x425a988-0x425aacf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425aabc to 0x452bfc0 Utilities.UINumberCounterAbstract$$SyncData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x425aacc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UICurrencyCounter__RemoveHoldingSource(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  
  if ((DAT_09516f42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f10);
    FUN_03f5c2a4(&DAT_091ad430);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dc890);
    DAT_09516f42 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = FUN_057e2274(param_1[0x12],param_2,DAT_091ad430);
    if ((uVar1 & 1) != 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09191518);
      CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                (uVar2,param_1,DAT_091dc890,0);
      lVar4 = *param_2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185f10) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_0425aa84;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f10,3);
LAB_0425aa84:
      (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      if ((char)param_1[5] != '\0') {
        Utilities_UINumberCounterAbstract__SyncData(param_1,0);
        return;
      }
    }
  }
  return;
}

