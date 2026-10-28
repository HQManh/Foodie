// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$BuiltCellsInScanOrder
// address: 0x42374f4
// body: available
// range: 0x42374f4-0x423780b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4237804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4237808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_GridIngController__BuiltCellsInScanOrder(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516dec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175b00);
    FUN_03f5c2a4(&DAT_091a1318);
    FUN_03f5c2a4(&DAT_091a1320);
    FUN_03f5c2a4(&DAT_091a6c78);
    FUN_03f5c2a4(&DAT_091a6c80);
    FUN_03f5c2a4(&DAT_091a6c88);
    FUN_03f5c2a4(&DAT_09179278);
    FUN_03f5c2a4(&DAT_091cfdb8);
    FUN_03f5c2a4(&DAT_091cfdb0);
    FUN_03f5c2a4(&DAT_091ad928);
    FUN_03f5c2a4(&DAT_091ad938);
    FUN_03f5c2a4(&DAT_091ad920);
    FUN_03f5c2a4(&DAT_0917c478);
    FUN_03f5c2a4(&DAT_091eaef0);
    FUN_03f5c2a4(&DAT_091910c8);
    FUN_03f5c2a4(&DAT_091bea90);
    DAT_09516dec = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_091910c8);
  System_Object___ctor(lVar4,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar3 = FUN_070699ec(*(long *)(param_1 + 0xa8),DAT_091a1318);
    lVar5 = thunk_FUN_03f9944c(DAT_0917c478);
    FUN_057e0478(lVar5,uVar3,DAT_091ad920);
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar6 = FUN_07069b58(*(long *)(param_1 + 0xa8),DAT_091a1320), lVar6 != 0)) {
      FUN_06554ac8(&local_98,lVar6,DAT_091bea90);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
LAB_042376d8:
      uVar7 = FUN_04f9b95c(&local_80,DAT_091a6c80);
      lVar6 = DAT_091ad928;
      if ((uVar7 & 1) != 0) {
        if (local_70 != 0) {
          if (lVar5 != 0) {
            lVar10 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = local_70;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar5,local_70,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_042376d8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_042376d8;
      }
      FUN_04f9b958(&local_80,DAT_091a6c78);
      uVar8 = AnhPD_FoodOrder_GridIngController__get_Layout(param_1);
      uVar9 = thunk_FUN_03f9944c(DAT_09179278);
      puVar1 = &DAT_091cfdb8;
      if ((param_2 & 1) == 0) {
        puVar1 = &DAT_091cfdb0;
      }
      FUN_05329afc(uVar9,uVar8,*puVar1,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = uVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar9);
        uVar8 = thunk_FUN_03f9944c(DAT_09175b00);
        FUN_06d4541c(uVar8,lVar4,DAT_091eaef0,0);
        if (lVar5 != 0) {
          FUN_057e280c(lVar5,uVar8,DAT_091ad938);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

