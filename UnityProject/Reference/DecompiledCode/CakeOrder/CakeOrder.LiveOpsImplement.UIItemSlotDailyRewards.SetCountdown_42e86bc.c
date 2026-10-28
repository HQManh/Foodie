// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemSlotDailyRewards$$SetCountdown
// address: 0x42e86bc
// body: available
// range: 0x42e86bc-0x42e8803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e87fc to 0x42e8804 CakeOrder.LiveOpsImplement.UIItemSlotDailyRewards$$UpdateButtons (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e8800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetCountdown
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_0951746a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09221b50);
    DAT_0951746a = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(param_2,0);
  plVar2 = (long *)CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__get_CountdownTarget(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(plVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if ((bVar1 & 1) != 0) {
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_2 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09221b50);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar2 + 0x548))(plVar2,*(undefined8 *)(*plVar2 + 0x550));
    uVar3 = System_String__op_Inequality(uVar4,param_2,0);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
    }
  }
  bVar1 = (bVar1 ^ 0xff) & 1;
  if (*(byte *)(param_1 + 0x78) == bVar1) {
    return;
  }
  *(byte *)(param_1 + 0x78) = bVar1;
  CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__UpdateButtons(param_1);
  return;
}

