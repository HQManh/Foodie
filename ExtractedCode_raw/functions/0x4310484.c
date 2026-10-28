// rea decompile_all
// name: CakeOrder.Home.HomeSelectionControl.<SetUp>d__42$$MoveNext
// address: 0x4310484
// body: available
// range: 0x4310484-0x43108c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4310854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4310858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43108c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeSelectionControl_<SetUp>d__42__MoveNext(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_095175c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09180530);
    FUN_03f5c2a4(&DAT_0918ac80);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09211658);
    DAT_095175c9 = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  lVar5 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar5 + 0xb8),0);
  uVar6 = FUN_03f5c394(DAT_09180530,uVar3);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar10 + 0x58) = uVar6;
  thunk_FUN_03f5d7b8();
  uVar7 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                      (**(long **)(lVar5 + 0xb8),*(undefined8 *)(param_1 + 8),0);
    uVar11 = uVar7 & 0xffffffff;
  }
  else {
    uVar11 = 0xffffffff;
  }
  iVar4 = (int)uVar11;
  uVar7 = CakeOrder_Home_HomeSelectionControl__CanShowMap(uVar7,uVar11);
  if ((uVar7 & 1) == 0) {
    iVar4 = CakeOrder_Home_HomeSelectionControl__FindVisibleMapIndex(lVar10,0,1);
  }
  lVar5 = DAT_091b4b60;
  if (iVar4 < 0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar6 = thunk_FUN_03f9944c();
    uVar13 = thunk_FUN_03fc39d4(&DAT_092040e8);
    System_InvalidOperationException___ctor(uVar6,uVar13,0);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091eb300);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar13);
  }
  *(int *)(lVar10 + 0x28) = iVar4;
  lVar5 = *(long *)(lVar5 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                    (**(long **)(lVar5 + 0xb8),*(undefined4 *)(lVar10 + 0x28),0);
  puVar12 = (undefined8 *)(lVar10 + 0x20);
  *puVar12 = uVar6;
  thunk_FUN_03f5d7b8(puVar12);
  plVar15 = *(long **)(lVar10 + 0x58);
  uVar1 = *(uint *)(lVar10 + 0x28);
  uVar13 = *(undefined8 *)(lVar10 + 0x20);
  *(undefined4 *)(lVar10 + 0x2c) = param_1[10];
  uVar6 = UnityEngine_Component__get_transform(lVar10,0);
  uVar14 = *(undefined8 *)(lVar10 + 0x60);
  lVar5 = thunk_FUN_03f9944c(DAT_0918ac80);
  CakeOrder_Home_SingleHomeMapDataCache___ctor(lVar5,uVar13,uVar1,uVar6,uVar14,0);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if (*(uint *)(plVar15 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar15[(long)(int)uVar1 + 4] = lVar5;
  thunk_FUN_03f5d7b8(plVar15 + (long)(int)uVar1 + 4,lVar5);
  *(long *)(lVar10 + 0x30) = lVar5;
  thunk_FUN_03f5d7b8((long *)(lVar10 + 0x30),lVar5);
  uVar6 = *puVar12;
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_Localization_CakeLocalization__SetActiveMap(uVar6,0);
  lVar5 = FUN_03f5c394(DAT_091805f8,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar5 + 0x20) = DAT_09211658;
  thunk_FUN_03f5d7b8();
  auVar16 = CakeOrder_Localization_CakeLocalization__PreloadAsync(lVar5,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar16._0_8_,auVar16._8_8_,0);
  if ((int)param_1[0xb] < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xc);
  }
  *(undefined8 *)(lVar10 + 0x68) = uVar6;
  thunk_FUN_03f5d7b8();
  cVar2 = DAT_095162d8;
  *(undefined4 *)(lVar10 + 0x70) = param_1[0xb];
  *param_1 = 0xfffffffe;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar15;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091866a8) {
        puVar12 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_04310834;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar12 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091866a8,2);
LAB_04310834:
                    /* WARNING: Could not recover jumptable at 0x04310850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar12)(plVar15,puVar12[1]);
  return;
}

