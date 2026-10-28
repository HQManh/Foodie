// rea decompile_all
// name: CakeOrder.Home.UIItemToolUpgrade$$OnCurrencyChanged
// address: 0x43498b0
// body: available
// range: 0x43498b0-0x4349a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4349a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4349a54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolUpgrade__OnCurrencyChanged
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if ((DAT_09517782 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    DAT_09517782 = 1;
  }
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if ((**(long **)(lVar3 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48), lVar3 != 0)) {
    uVar4 = System_String__op_Equality(param_2,*(undefined8 *)(lVar3 + 0x18),0);
    if (((uVar4 & 1) == 0) ||
       ((*(char *)(param_1 + 0xd8) == '\0' ||
        (*(int *)(param_1 + 0xe0) <= *(int *)(param_1 + 0xdc) + 1)))) {
      return;
    }
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar3 = CakeOrder_MapToolConfig_ToolData__get_upgradePrices(*(long *)(param_1 + 0x58),0),
       lVar3 != 0)) {
      uVar1 = *(int *)(param_1 + 0xdc) + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(DAT_091b4b60 + 0x20);
      iVar2 = *(int *)(lVar3 + (long)(int)uVar1 * 4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48);
        plVar5 = *(long **)(param_1 + 0xb0);
        if (param_4 < iVar2) {
          if (lVar3 == 0) goto LAB_04349a50;
          puVar7 = (undefined4 *)(lVar3 + 0x50);
          puVar8 = (undefined4 *)(lVar3 + 0x54);
          puVar9 = (undefined4 *)(lVar3 + 0x58);
          puVar10 = (undefined4 *)(lVar3 + 0x5c);
        }
        else {
          if (lVar3 == 0) goto LAB_04349a50;
          puVar7 = (undefined4 *)(lVar3 + 0x40);
          puVar8 = (undefined4 *)(lVar3 + 0x44);
          puVar9 = (undefined4 *)(lVar3 + 0x48);
          puVar10 = (undefined4 *)(lVar3 + 0x4c);
        }
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04349a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x2a8))
                    (*puVar7,*puVar8,*puVar9,*puVar10,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
          return;
        }
      }
    }
  }
LAB_04349a50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

