// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyLevelMap$$BuildFromPlayableLevels
// address: 0x4352580
// body: available
// range: 0x4352580-0x435284b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4352844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4352848 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * CakeOrder_Home_Journey_JourneyLevelMap__BuildFromPlayableLevels(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_095177c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03e0);
    FUN_03f5c2a4(&DAT_09180b00);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177c2 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar4 = FUN_05a8f088(DAT_091b4b68);
  lVar5 = DAT_091c03e0;
  if ((uVar4 & 1) == 0) {
    lVar8 = *(long *)(DAT_091c03e0 + 0x38);
    if (lVar8 == 0) {
      FUN_03f95ac8(DAT_091c03e0);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    puVar6 = (undefined8 *)**(long **)(lVar5 + 0xb8);
  }
  else {
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
LAB_04352844:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar5,0);
    puVar6 = (undefined8 *)FUN_03f5c394(DAT_09180b00,(ulong)uVar3);
    if (0 < (int)uVar3) {
      uVar4 = 0;
      iVar13 = 0;
      iVar14 = 1;
      puVar1 = puVar6;
      do {
        puVar11 = puVar1 + 4;
        uVar7 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar5,uVar4 & 0xffffffff,0);
        lVar8 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar5,uVar7,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar9 = UnityEngine_Object__op_Inequality(lVar8,0,0);
        if ((uVar9 & 1) == 0) {
          iVar12 = 0;
        }
        else {
          if (lVar8 == 0) goto LAB_04352844;
          iVar12 = *(int *)(lVar8 + 0x4c);
        }
        CakeOrder_Home_Journey_JourneyLevelMap__WarnIfDesignsDisagreeWithPlayable(uVar7,iVar12);
        uStack_78 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        local_80 = uVar7;
        thunk_FUN_03f5d7b8(&local_80,uVar7);
        uStack_78 = CONCAT44(iVar12,(int)uVar4);
        uStack_70 = CONCAT44(iVar12 + iVar14 + -1,iVar14);
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar13 + 1);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
        uStack_68 = CONCAT35(uStack_68._5_3_,CONCAT14(uVar2,(undefined4)uStack_68)) &
                    0xffffff01ffffffff;
        if (puVar6 == (undefined8 *)0x0) goto LAB_04352844;
        if (*(uint *)(puVar6 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar1[5] = uStack_78;
        *puVar11 = local_80;
        puVar1[7] = uStack_68;
        puVar1[6] = uStack_70;
        thunk_FUN_03f5d7b8(puVar11,0);
        uVar9 = UnityEngine_Object__op_Inequality(lVar8,0,0);
        if ((uVar9 & 1) == 0) {
          iVar10 = 0;
        }
        else {
          if (lVar8 == 0) goto LAB_04352844;
          iVar10 = *(int *)(lVar8 + 0x50);
        }
        uVar4 = uVar4 + 1;
        iVar13 = iVar10 + iVar13;
        iVar14 = iVar12 + iVar14;
        puVar1 = puVar11;
      } while (uVar3 != uVar4);
    }
  }
  return puVar6;
}

