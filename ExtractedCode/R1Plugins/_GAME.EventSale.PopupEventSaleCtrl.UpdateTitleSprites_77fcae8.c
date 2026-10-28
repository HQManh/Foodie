// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$UpdateTitleSprites
// address: 0x77fcae8
// body: available
// range: 0x77fcae8-0x77fce27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fce24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__UpdateTitleSprites(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  if ((DAT_09523174 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b36f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e1e8);
    FUN_03f5c2a4(&DAT_091ee830);
    FUN_03f5c2a4(&DAT_091935f0);
    FUN_03f5c2a4(&DAT_0921ae70);
    DAT_09523174 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091935f0);
  System_Object___ctor(lVar3,0);
  uVar10 = *(undefined8 *)(param_1 + 0x130);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x138);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = CakeOrder_Localization_CakeLocalization__get_SelectedLocale(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  uVar10 = DAT_0921ae70;
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) goto LAB_077fce24;
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
  }
  if (lVar3 == 0) goto LAB_077fce24;
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  thunk_FUN_03f5d7b8();
  lVar5 = *(long *)(param_1 + 0x140);
  if (lVar5 == 0) {
LAB_077fcd20:
    uVar10 = *(undefined8 *)(param_1 + 0x130);
    lVar3 = 0;
    bVar1 = true;
    uVar2 = 1;
LAB_077fcd38:
    puVar11 = (undefined8 *)(param_1 + 0x168);
    puVar6 = (undefined4 *)(param_1 + 0x148);
    puVar7 = (undefined4 *)(param_1 + 0x14c);
    puVar8 = (undefined4 *)(param_1 + 0x150);
    puVar9 = (undefined4 *)(param_1 + 0x154);
  }
  else {
    uVar10 = thunk_FUN_03f9944c(DAT_0917e1e8);
    FUN_05d78cfc(uVar10,lVar3,DAT_091ee830,0);
    lVar3 = FUN_057e1328(lVar5,uVar10,DAT_091b36f8);
    if (lVar3 == 0) goto LAB_077fcd20;
    puVar11 = (undefined8 *)(lVar3 + 0x18);
    uVar10 = *puVar11;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    uVar10 = *(undefined8 *)(lVar3 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    uVar10 = *(undefined8 *)(param_1 + 0x130);
    uVar2 = uVar2 ^ 1;
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
      goto LAB_077fcd38;
    }
    bVar1 = false;
    puVar6 = (undefined4 *)(lVar3 + 0x28);
    puVar7 = (undefined4 *)(lVar3 + 0x2c);
    puVar8 = (undefined4 *)(lVar3 + 0x30);
    puVar9 = (undefined4 *)(lVar3 + 0x34);
  }
  _GAME_EventSale_PopupEventSaleCtrl__ApplyTitleLayout
            (*puVar6,*puVar7,*puVar8,*puVar9,*(undefined4 *)(param_1 + 0x148),
             *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),
             *(undefined4 *)(param_1 + 0x154),uVar10,*puVar11);
  uVar4 = *(ulong *)(param_1 + 0x138);
  if ((uVar2 & 1) == 0) {
    if (bVar1) {
LAB_077fce24:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar4);
    }
    puVar11 = (undefined8 *)(lVar3 + 0x20);
    puVar6 = (undefined4 *)(lVar3 + 0x38);
    puVar7 = (undefined4 *)(lVar3 + 0x3c);
    puVar8 = (undefined4 *)(lVar3 + 0x40);
    puVar9 = (undefined4 *)(lVar3 + 0x44);
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x170);
    puVar6 = (undefined4 *)(param_1 + 0x158);
    puVar7 = (undefined4 *)(param_1 + 0x15c);
    puVar8 = (undefined4 *)(param_1 + 0x160);
    puVar9 = (undefined4 *)(param_1 + 0x164);
  }
  _GAME_EventSale_PopupEventSaleCtrl__ApplyTitleLayout
            (*puVar6,*puVar7,*puVar8,*puVar9,*(undefined4 *)(param_1 + 0x158),
             *(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
             *(undefined4 *)(param_1 + 0x164),uVar4,*puVar11);
  return;
}

