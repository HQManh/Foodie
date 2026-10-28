// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderBoard$$Split
// address: 0x41328c8
// body: available
// range: 0x41328c8-0x4132d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4132d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderBoard__Split(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if ((DAT_0951634a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175a80);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aa6a8);
    FUN_03f5c2a4(&DAT_091aa6b8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aa6a0);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917ba70);
    FUN_03f5c2a4(&DAT_091e6540);
    FUN_03f5c2a4(&DAT_0918e9b0);
    DAT_0951634a = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917ba70);
  FUN_057e0400(lVar5,DAT_091aa6a0);
  lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar6,DAT_091adc70);
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar12 = 0;
      do {
        FUN_057eeec4(auStack_a8,param_2,iVar12,DAT_091aed50);
        pvVar7 = memcpy(auStack_f0,auStack_a8,0x48);
        uVar8 = AnhPD_FoodOrder_BurgerOrderBoard__IsBurger(pvVar7,auStack_f0);
        lVar11 = DAT_091adc88;
        if ((uVar8 & 1) == 0) {
          if (lVar6 == 0) goto LAB_04132d90;
          lVar9 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04132d90;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = iVar12;
          }
          else {
            FUN_057971a8(lVar6,iVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar9 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar9,DAT_091adc70);
          lVar11 = DAT_091adc88;
          if (lVar9 == 0) goto LAB_04132d90;
          lVar13 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_04132d90;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(int *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = iVar12;
          }
          else {
            FUN_057971a8(lVar9,iVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = DAT_091aa6a8;
          if (lVar5 == 0) goto LAB_04132d90;
          lVar13 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_04132d90;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = lVar9;
            thunk_FUN_03f5d7b8(plVar10,lVar9);
          }
          else {
            FUN_057e0c68(lVar5,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_2 + 0x18));
    }
    iVar3 = AnhPD_FoodOrder_OrderBoard__get_Capacity(param_1,0);
    iVar12 = 1;
    if (1 < iVar3) {
      iVar12 = 2;
    }
    if (lVar6 != 0) {
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar3 = 0;
        do {
          lVar11 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar11,DAT_091adc70);
          if (iVar3 < *(int *)(lVar6 + 0x18)) {
            iVar1 = iVar3;
            if (lVar11 == 0) goto LAB_04132d90;
            do {
              if (iVar12 <= *(int *)(lVar11 + 0x18)) break;
              uVar4 = FUN_05796eb0(lVar6,iVar1,DAT_091add20);
              lVar9 = DAT_091adc88;
              lVar13 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_04132d90;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar4;
              }
              else {
                FUN_057971a8(lVar11,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(lVar6 + 0x18));
          }
          lVar9 = DAT_091aa6a8;
          if (lVar5 == 0) goto LAB_04132d90;
          lVar13 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_04132d90;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = lVar11;
            thunk_FUN_03f5d7b8(plVar10,lVar11);
          }
          else {
            FUN_057e0c68(lVar5,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          iVar3 = iVar3 + iVar12;
        } while (iVar3 < *(int *)(lVar6 + 0x18));
      }
      if (*(int *)(DAT_0918e9b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar14 = *(undefined8 **)(DAT_0918e9b0 + 0xb8);
      lVar6 = puVar14[1];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918e9b0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar14 = *(undefined8 **)(DAT_0918e9b0 + 0xb8);
        }
        uVar15 = *puVar14;
        lVar6 = thunk_FUN_03f9944c(DAT_09175a80);
        FUN_06d4541c(lVar6,uVar15,DAT_091e6540,0);
        plVar10 = (long *)(*(long *)(DAT_0918e9b0 + 0xb8) + 8);
        *plVar10 = lVar6;
        thunk_FUN_03f5d7b8(plVar10,lVar6);
      }
      if (lVar5 != 0) {
        FUN_057e280c(lVar5,lVar6,DAT_091aa6b8);
        return lVar5;
      }
    }
  }
LAB_04132d90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

