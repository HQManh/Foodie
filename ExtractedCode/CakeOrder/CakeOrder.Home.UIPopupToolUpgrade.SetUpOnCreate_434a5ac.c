// rea decompile_all
// name: CakeOrder.Home.UIPopupToolUpgrade$$SetUpOnCreate
// address: 0x434a5ac
// body: available
// range: 0x434a5ac-0x434a88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434a88c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPopupToolUpgrade__SetUpOnCreate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_0951778b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a58);
    FUN_03f5c2a4(&DAT_091a0688);
    FUN_03f5c2a4(&DAT_091a0680);
    FUN_03f5c2a4(&DAT_09176da8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091d4d40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091957d0);
    FUN_03f5c2a4(&DAT_091dd010);
    DAT_0951778b = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  uVar3 = thunk_FUN_03f9944c(DAT_09176da8);
  FUN_06fd76bc(uVar3,DAT_091a0680);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  thunk_FUN_03f5d7b8(param_1 + 0x100,uVar3);
  iVar8 = 0;
  while( true ) {
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_0434a88c;
    iVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar4 + 0xb8),0);
    if (iVar2 <= iVar8) break;
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_0434a88c;
    uVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(**(long **)(lVar4 + 0xb8),iVar8,0);
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar4 = FUN_04c35338(uVar1,uVar3,DAT_091d4d40);
    if (lVar4 == 0) goto LAB_0434a88c;
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x48),uVar5);
    auVar10 = CakeOrder_Home_UITabItemRestaurant__LoadMapThumbnailAsync(lVar4);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar10._0_8_,auVar10._8_8_,0);
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar4,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174a58);
    FUN_070a8c30(uVar3,param_1,DAT_091dd010,0);
    CakeOrder_BaseUI_UIElementWithAnimHighlight__add_onClick(lVar4,uVar3,0);
    lVar9 = *(long *)(param_1 + 0x100);
    lVar6 = thunk_FUN_03f9944c(DAT_091957d0);
    System_Object___ctor(lVar6,0);
    if (lVar6 == 0) goto LAB_0434a88c;
    *(undefined8 *)(lVar6 + 0x10) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),uVar5);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x18),0);
    *(long *)(lVar6 + 0x20) = lVar4;
    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x20),lVar4);
    if (lVar9 == 0) goto LAB_0434a88c;
    FUN_06fd8454(lVar9,uVar5,lVar6,DAT_091a0688);
    iVar8 = iVar8 + 1;
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    *(undefined1 *)(param_1 + 0x108) = 1;
    return;
  }
LAB_0434a88c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

