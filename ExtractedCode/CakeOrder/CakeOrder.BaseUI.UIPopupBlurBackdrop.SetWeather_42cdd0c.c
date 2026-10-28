// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$SetWeather
// address: 0x42cdd0c
// body: available
// range: 0x42cdd0c-0x42cddfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cddf4 to 0x42cd8b8 CakeOrder.BaseUI.UIPopupBlurBackdrop$$Refresh (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42cddf8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__SetWeather(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar7 = (undefined8 *)(param_1 + 0xe8);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x68);
  thunk_FUN_03f5d7b8(puVar7,0);
  lVar5 = *(long *)(param_1 + 0x78);
  if ((lVar5 != 0) && (iVar4 = *(int *)(lVar5 + 0x18), 0 < iVar4)) {
    puVar6 = (undefined8 *)(lVar5 + 0x24);
    do {
      uVar10 = puVar6[3];
      uVar9 = puVar6[2];
      if (*(int *)((long)puVar6 + -4) == param_2) {
        uVar8 = *puVar6;
        uVar2 = *(undefined8 *)((long)puVar6 + 0x24);
        *(undefined8 *)(param_1 + 0xd0) = puVar6[1];
        *(undefined8 *)(param_1 + 200) = uVar8;
        *(undefined8 *)(param_1 + 0xe0) = uVar10;
        *(undefined8 *)(param_1 + 0xd8) = uVar9;
        *puVar7 = uVar2;
        thunk_FUN_03f5d7b8(puVar7);
        break;
      }
      iVar4 = iVar4 + -1;
      puVar6 = puVar6 + 6;
    } while (iVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CakeOrder_BaseUI_UIPopupBlurBackdrop__Refresh(param_1);
  return;
}

