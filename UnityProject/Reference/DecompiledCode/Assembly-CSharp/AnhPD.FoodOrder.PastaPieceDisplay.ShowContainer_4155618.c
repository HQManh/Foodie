// rea decompile_all
// name: AnhPD.FoodOrder.PastaPieceDisplay$$ShowContainer
// address: 0x4155618
// body: available
// range: 0x4155618-0x415579b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4155794 to 0x415589c AnhPD.FoodOrder.PastaPieceDisplay$$ShowContainerLayer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4155798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PastaPieceDisplay__ShowContainer(long param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_095164c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095164c2 = 1;
  }
  bVar2 = AnhPD_FoodOrder_PastaPieceDisplay__get_OnShelf(param_1);
  *(byte *)(param_1 + 0x4a) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_04155798;
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
    if ((uVar3 & 1) == 0) goto LAB_04155708;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      lVar4 = *(long *)(param_1 + 0x20);
      DAT_09515ce6 = '\x01';
      if (lVar4 == 0) goto LAB_04155798;
    }
    bVar1 = false;
    puVar8 = (undefined4 *)(param_1 + 0x30);
    puVar9 = (undefined4 *)(param_1 + 0x34);
    puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    puVar7 = puVar5 + 2;
    puVar6 = puVar5 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_04155798;
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
LAB_04155708:
    uVar11 = *(undefined8 *)(lVar4 + 0x20);
    puVar5 = (undefined4 *)(lVar4 + 0x30);
    puVar6 = (undefined4 *)(lVar4 + 0x34);
    puVar7 = (undefined4 *)(lVar4 + 0x38);
    puVar8 = (undefined4 *)(lVar4 + 0x50);
    puVar9 = (undefined4 *)(lVar4 + 0x54);
    bVar1 = true;
  }
  AnhPD_FoodOrder_PastaPieceDisplay__ShowContainerLayer
            (*puVar5,*puVar6,*puVar7,*(undefined4 *)(lVar4 + 0x48),*puVar8,*puVar9,uVar10,uVar11,
             *(undefined4 *)(lVar4 + 0x60),param_2 & 1);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (bVar1) {
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
    }
    else {
      uVar10 = 0;
    }
    AnhPD_FoodOrder_PastaPieceDisplay__ShowContainerLayer
              (*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
               *(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x4c),
               *(undefined4 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x5c),
               *(undefined8 *)(lVar4 + 0x18),uVar10,*(undefined4 *)(lVar4 + 100),param_2 & 1);
    return;
  }
LAB_04155798:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

