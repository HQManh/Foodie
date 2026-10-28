// rea decompile_all
// name: CakeOrder.InGame.CustomerRandomizer$$Assign
// address: 0x438d9a4
// body: available
// range: 0x438d9a4-0x438dcd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438dcc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438dccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438dcd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CustomerRandomizer__Assign(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_095179fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2858);
    FUN_03f5c2a4(&DAT_091a2860);
    FUN_03f5c2a4(&DAT_091a2868);
    FUN_03f5c2a4(&DAT_091ac1f8);
    FUN_03f5c2a4(&DAT_091ab778);
    FUN_03f5c2a4(&DAT_091ab7b8);
    FUN_03f5c2a4(&DAT_0917bdc8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091b8b08);
    FUN_03f5c2a4(&DAT_091b8b10);
    FUN_03f5c2a4(&DAT_091b8af8);
    FUN_03f5c2a4(&DAT_091b8b20);
    FUN_03f5c2a4(&DAT_0917e318);
    FUN_03f5c2a4(&DAT_09189a90);
    DAT_095179fd = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_1 != 0) && (uVar2 = FUN_05a8f088(DAT_091b4b68), (uVar2 & 1) != 0)) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917bdc8);
    FUN_057e0400(lVar3,DAT_091ab778);
    lVar4 = thunk_FUN_03f9944c(DAT_0917bdc8);
    FUN_057e0400(lVar4,DAT_091ab778);
    lVar5 = thunk_FUN_03f9944c(DAT_0917bdc8);
    FUN_057e0400(lVar5,DAT_091ab778);
    lVar6 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if ((((**(long **)(lVar6 + 0xb8) == 0) ||
         (CakeOrder_DataSO_CakeOrderDatabaseSO__GetRandomCustomerTiers
                    (**(long **)(lVar6 + 0xb8),param_2,lVar3,lVar4,lVar5,0), lVar3 == 0)) ||
        (lVar4 == 0)) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x18) + *(int *)(lVar3 + 0x18) + *(int *)(lVar4 + 0x18) != 0) {
      uVar7 = thunk_FUN_03f9944c(DAT_09189a90);
      System_Random___ctor(uVar7,param_3,0);
      lVar6 = thunk_FUN_03f9944c(DAT_0917e318);
      FUN_05e2ca0c(lVar6,DAT_091b8af8);
      FUN_057e185c(&local_98,param_1,DAT_091ac1f8);
      uStack_78 = puStack_90;
      local_80 = local_98;
      puStack_90 = &local_80;
      local_70 = local_88;
      local_98 = 0;
      while (uVar2 = FUN_071bd28c(&local_80,DAT_091a2860), lVar1 = local_70, (uVar2 & 1) != 0) {
        lVar8 = CakeOrder_InGame_CustomerRandomizer__Pick(uVar7,lVar3,lVar4,lVar5,lVar6);
        if (lVar1 != 0) {
          puVar9 = (undefined8 *)(lVar1 + 0x38);
          uVar2 = System_String__IsNullOrEmpty(*puVar9,0);
          if ((uVar2 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *puVar9 = *(undefined8 *)(lVar8 + 0x18);
            thunk_FUN_03f5d7b8(puVar9);
          }
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_05e2cfd8(lVar6,lVar8,DAT_091b8b10);
        while (4 < *(int *)(lVar6 + 0x20)) {
          FUN_05e2d168(lVar6,DAT_091b8b08);
        }
      }
      FUN_071bd288(&local_80,DAT_091a2858);
    }
  }
  return;
}

