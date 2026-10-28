// rea decompile_all
// name: CakeOrder.UICurrencyCounter$$UpdateVisualAmount
// address: 0x425a17c
// body: available
// range: 0x425a17c-0x425a267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425a264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UICurrencyCounter__UpdateVisualAmount(float param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_24;
  
  if ((DAT_09516f3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_092083b8);
    DAT_09516f3f = 1;
  }
  iVar1 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar1 = (int)param_1;
  }
  if (*(int *)(param_2 + 0x98) != iVar1) {
    plVar2 = *(long **)(param_2 + 0x60);
    *(int *)(param_2 + 0x98) = iVar1;
    uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x68),0);
    if ((uVar3 & 1) == 0) {
      local_24 = *(undefined4 *)(param_2 + 0x98);
      uVar5 = *(undefined8 *)(param_2 + 0x68);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      uVar4 = System_String__Format(uVar5,uVar4,0);
    }
    else {
      uVar4 = System_Int32__ToString((int *)(param_2 + 0x98),DAT_092083b8,0);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar4,uVar4);
    }
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x560));
  }
  return;
}

