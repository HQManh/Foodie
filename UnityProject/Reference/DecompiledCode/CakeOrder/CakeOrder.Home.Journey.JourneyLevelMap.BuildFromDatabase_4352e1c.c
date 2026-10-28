// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyLevelMap$$BuildFromDatabase
// address: 0x4352e1c
// body: available
// range: 0x4352e1c-0x4353007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4353000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4353004 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * CakeOrder_Home_Journey_JourneyLevelMap__BuildFromDatabase(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_095177c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180b00);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4ab0);
    DAT_095177c0 = 1;
  }
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar4 + 0xb8),0);
    puVar5 = (undefined8 *)FUN_03f5c394(DAT_09180b00,(ulong)uVar2);
    if (0 < (int)uVar2) {
      uVar8 = 0;
      iVar10 = 1;
      puVar1 = puVar5;
      do {
        puVar9 = puVar1 + 4;
        lVar4 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04353000;
        uVar6 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                          (**(long **)(lVar4 + 0xb8),uVar8 & 0xffffffff,0);
        uVar7 = FUN_05a8eda4(DAT_091b4ab0);
        if ((uVar7 & 1) == 0) {
          iVar3 = CakeOrder_Home_Journey_JourneyLevelMap__FallbackLevelCount(uVar6);
        }
        else {
          iVar3 = CakeOrder_Home_Journey_JourneyLevelMap__CountLevelDesigns(uVar6);
        }
        uStack_78 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        local_80 = uVar6;
        thunk_FUN_03f5d7b8(&local_80,uVar6);
        uStack_78 = CONCAT44(iVar3,(int)uVar8);
        uStack_70 = CONCAT44(iVar3 + iVar10 + -1,iVar10);
        uStack_68._0_5_ = CONCAT14(1,(undefined4)uStack_68);
        if (puVar5 == (undefined8 *)0x0) goto LAB_04353000;
        if (*(uint *)(puVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar1[5] = uStack_78;
        *puVar9 = local_80;
        puVar1[7] = uStack_68;
        puVar1[6] = uStack_70;
        thunk_FUN_03f5d7b8(puVar9,0);
        uVar8 = uVar8 + 1;
        iVar10 = iVar3 + iVar10;
        puVar1 = puVar9;
      } while (uVar2 != uVar8);
    }
    return puVar5;
  }
LAB_04353000:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

