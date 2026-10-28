// rea decompile_all
// name: AnhPD.FoodOrder.SandwichOrderBoard$$Split
// address: 0x41595ec
// body: available
// range: 0x41595ec-0x4159ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4159ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SandwichOrderBoard__Split(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if ((DAT_095164f0 & 1) == 0) {
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
    FUN_03f5c2a4(&DAT_091ef778);
    FUN_03f5c2a4(&DAT_09194120);
    DAT_095164f0 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917ba70);
  FUN_057e0400(lVar5,DAT_091aa6a0);
  lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar6,DAT_091adc70);
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar11 = 0;
      do {
        FUN_057eeec4(auStack_a8,param_2,iVar11,DAT_091aed50);
        memcpy(auStack_f0,auStack_a8,0x48);
        uVar7 = AnhPD_FoodOrder_SandwichOrderBoard__IsSavorySandwich(auStack_f0);
        lVar10 = DAT_091adc88;
        if ((uVar7 & 1) == 0) {
          if (lVar6 == 0) goto LAB_04159ab4;
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_04159ab4;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar11;
          }
          else {
            FUN_057971a8(lVar6,iVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar8,DAT_091adc70);
          lVar10 = DAT_091adc88;
          if (lVar8 == 0) goto LAB_04159ab4;
          lVar12 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_04159ab4;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar11;
          }
          else {
            FUN_057971a8(lVar8,iVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = DAT_091aa6a8;
          if (lVar5 == 0) goto LAB_04159ab4;
          lVar12 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_04159ab4;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar8;
            thunk_FUN_03f5d7b8(plVar9,lVar8);
          }
          else {
            FUN_057e0c68(lVar5,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_2 + 0x18));
    }
    iVar3 = AnhPD_FoodOrder_OrderBoard__get_Capacity(param_1,0);
    iVar11 = 1;
    if (1 < iVar3) {
      iVar11 = 2;
    }
    if (lVar6 != 0) {
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar3 = 0;
        do {
          lVar10 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar10,DAT_091adc70);
          if (iVar3 < *(int *)(lVar6 + 0x18)) {
            iVar1 = iVar3;
            if (lVar10 == 0) goto LAB_04159ab4;
            do {
              if (iVar11 <= *(int *)(lVar10 + 0x18)) break;
              uVar4 = FUN_05796eb0(lVar6,iVar1,DAT_091add20);
              lVar8 = DAT_091adc88;
              lVar12 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_04159ab4;
              uVar2 = *(uint *)(lVar10 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uVar4;
              }
              else {
                FUN_057971a8(lVar10,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(lVar6 + 0x18));
          }
          lVar8 = DAT_091aa6a8;
          if (lVar5 == 0) goto LAB_04159ab4;
          lVar12 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_04159ab4;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar10;
            thunk_FUN_03f5d7b8(plVar9,lVar10);
          }
          else {
            FUN_057e0c68(lVar5,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          iVar3 = iVar3 + iVar11;
        } while (iVar3 < *(int *)(lVar6 + 0x18));
      }
      if (*(int *)(DAT_09194120 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar13 = *(undefined8 **)(DAT_09194120 + 0xb8);
      lVar6 = puVar13[1];
      if (lVar6 == 0) {
        if (*(int *)(DAT_09194120 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar13 = *(undefined8 **)(DAT_09194120 + 0xb8);
        }
        uVar14 = *puVar13;
        lVar6 = thunk_FUN_03f9944c(DAT_09175a80);
        FUN_06d4541c(lVar6,uVar14,DAT_091ef778,0);
        plVar9 = (long *)(*(long *)(DAT_09194120 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_03f5d7b8(plVar9,lVar6);
      }
      if (lVar5 != 0) {
        FUN_057e280c(lVar5,lVar6,DAT_091aa6b8);
        return lVar5;
      }
    }
  }
LAB_04159ab4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

