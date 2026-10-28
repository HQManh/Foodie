// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMainDetailsMode$$<Awake>g__OnClickNavItem|36_0
// address: 0x432366c
// body: available
// range: 0x432366c-0x432378f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4323788 to 0x432267c CakeOrder.Home.UIHomeTabPageMainDetailsMode$$ChangeTab (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x432378c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMainDetailsMode__<Awake>g__OnClickNavItem_36_0
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0951766c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951766c = 1;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0432378c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_0432378c;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0432378c;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
      iVar2 = 2;
      if ((uVar1 & 1) == 0) {
        iVar2 = -1;
      }
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (iVar2 == *(int *)(param_1 + 100)) {
        return;
      }
      goto LAB_04323778;
    }
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == *(int *)(param_1 + 100)) {
    return;
  }
LAB_04323778:
  CakeOrder_Home_UIHomeTabPageMainDetailsMode__ChangeTab(param_1);
  return;
}

