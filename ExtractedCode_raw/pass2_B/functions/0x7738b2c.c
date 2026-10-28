// rea decompile_all
// name: CakeOrder.Levels.daivqLv.CustomerGeneratorSample$$GenerateCustomer
// address: 0x7738b2c
// body: available
// range: 0x7738b2c-0x7738cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7738ce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7738cec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7738cf8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Levels_daivqLv_CustomerGeneratorSample__GenerateCustomer(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((DAT_09522aaa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091830b8);
    FUN_03f5c2a4(&DAT_0917fdd0);
    FUN_03f5c2a4(&DAT_091830f0);
    FUN_03f5c2a4(&DAT_091800c0);
    FUN_03f5c2a4(&DAT_09188d20);
    DAT_09522aaa = 1;
  }
  uVar7 = DAT_09188d20;
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar3 < uVar1) {
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = (int)(uVar3 + 1) / (int)uVar1;
      }
      uVar9 = *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      *(uint *)(param_1 + 0x30) = (uVar3 + 1) - iVar4 * uVar1;
      lVar8 = thunk_FUN_03f9944c(uVar7);
      CakeOrder_Model_OrderRequirementAnything___ctor(lVar8,0);
      plVar5 = (long *)FUN_03f5c394(DAT_091800c0,1);
      if (plVar5 == (long *)0x0) goto LAB_07738ce8;
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_07738cf0:
        uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar8;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
        lVar8 = thunk_FUN_03f9944c(DAT_091830f0);
        CakeOrder_Model_CustomerOrderData___ctor(lVar8,plVar5,0);
        uVar10 = *(undefined4 *)(param_1 + 0x34);
        uVar2 = *(undefined4 *)(param_1 + 0x38);
        plVar5 = (long *)FUN_03f5c394(DAT_0917fdd0,1);
        if (plVar5 == (long *)0x0) goto LAB_07738ce8;
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_07738cf0;
        if ((int)plVar5[3] != 0) {
          plVar5[4] = lVar8;
          thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
          uVar7 = thunk_FUN_03f9944c(DAT_091830b8);
          CakeOrder_Model_CustomerDataGeneral___ctor(uVar10,uVar7,uVar9,uVar2,plVar5,0);
          return uVar7;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07738ce8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

