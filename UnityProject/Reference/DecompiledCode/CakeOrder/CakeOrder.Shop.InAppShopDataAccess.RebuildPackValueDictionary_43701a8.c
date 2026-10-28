// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$RebuildPackValueDictionary
// address: 0x43701a8
// body: available
// range: 0x43701a8-0x437052f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4370528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437052c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_InAppShopDataAccess__RebuildPackValueDictionary(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  if ((DAT_095178d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fa58);
    FUN_03f5c2a4(&DAT_0919fa68);
    FUN_03f5c2a4(&DAT_091871e0);
    FUN_03f5c2a4(&DAT_091871d8);
    FUN_03f5c2a4(&DAT_091adf70);
    FUN_03f5c2a4(&DAT_091adf68);
    FUN_03f5c2a4(&DAT_091adf80);
    FUN_03f5c2a4(&DAT_0917c588);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095178d6 = 1;
  }
  if (((*(long *)(param_1 + 0x60) == 0) || (*(long *)(*(long *)(param_1 + 0x60) + 0x10) == 0)) ||
     (uVar2 = FUN_05a8f088(DAT_091b4b68), (uVar2 & 1) == 0)) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = **(long **)(lVar3 + 0xb8);
    FUN_06fd85dc(*(long *)(param_1 + 0x40),DAT_0919fa58);
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar14 != 0)) {
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar2 = 0;
        uVar9 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar2) {
LAB_0437052c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar12 = *(long *)(lVar14 + uVar2 * 8 + 0x20);
          if (((lVar12 != 0) &&
              (uVar9 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar12 + 0x10),0),
              (uVar9 & 1) == 0)) && (*(long *)(lVar12 + 0x18) != 0)) {
            lVar4 = thunk_FUN_03f9944c(DAT_0917c588);
            FUN_057e0400(lVar4,DAT_091adf68);
            lVar10 = *(long *)(lVar12 + 0x18);
            if (lVar10 == 0) goto LAB_04370528;
            uVar9 = 0;
            while ((long)uVar9 < (long)(int)*(uint *)(lVar10 + 0x18)) {
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0437052c;
              if (lVar3 == 0) goto LAB_04370528;
              uVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                                (lVar3,*(undefined8 *)(lVar10 + uVar9 * 8 + 0x20),0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
              if ((uVar6 & 1) != 0) {
                lVar10 = *(long *)(lVar12 + 0x20);
                if ((lVar10 == 0) || ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar9)) {
                  iVar13 = 1;
                }
                else {
                  if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_0437052c;
                  iVar13 = *(int *)(lVar10 + uVar9 * 4 + 0x20);
                  if (iVar13 < 1) goto LAB_04370480;
                }
                uVar7 = thunk_FUN_03f9944c(DAT_091871d8);
                CakeOrder_DataSO_ItemPack___ctor(uVar7,uVar5,iVar13,0);
                lVar10 = DAT_091adf70;
                if (lVar4 == 0) goto LAB_04370528;
                lVar11 = *(long *)(lVar4 + 0x10);
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_04370528;
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar8 = uVar7;
                  thunk_FUN_03f5d7b8(puVar8,uVar7);
                }
                else {
                  FUN_057e0c68(lVar4,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
LAB_04370480:
              lVar10 = *(long *)(lVar12 + 0x18);
              uVar9 = uVar9 + 1;
              if (lVar10 == 0) goto LAB_04370528;
            }
            if (lVar4 == 0) goto LAB_04370528;
            if (0 < *(int *)(lVar4 + 0x18)) {
              uVar7 = *(undefined8 *)(lVar12 + 0x10);
              lVar12 = *(long *)(param_1 + 0x40);
              uVar5 = thunk_FUN_03f9944c(DAT_091871e0);
              CakeOrder_DataSO_ItemPackGroup___ctor(uVar5,lVar4,0);
              if (lVar12 == 0) goto LAB_04370528;
              FUN_06fd8440(lVar12,uVar7,uVar5,DAT_0919fa68);
            }
          }
          uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      *(undefined1 *)(param_1 + 0xb0) = 1;
      return;
    }
  }
LAB_04370528:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

