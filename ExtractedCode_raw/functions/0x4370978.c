// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$ImportIAPPackValueData
// address: 0x4370978
// body: available
// range: 0x4370978-0x4370fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4370fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4370fd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Shop_InAppShopDataAccess__ImportIAPPackValueData(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_095178d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e88);
    FUN_03f5c2a4(&DAT_091852a0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091acff0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091acff8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091acfe8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c278);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09189e80);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09224f28);
    DAT_095178d4 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_118 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c278);
  FUN_057e0400(lVar3,DAT_091acfe8);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_140,param_2,0x7c,0);
  local_a0 = local_120;
  uStack_b8 = uStack_138;
  local_c0 = local_140;
  local_a8 = uStack_128;
  uStack_b0 = uStack_130;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_168,&local_c0,0);
  uStack_88 = uStack_160;
  local_90 = local_168;
  local_78 = uStack_150;
  uStack_80 = local_158;
  local_70 = local_148;
  uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  uVar12 = local_78;
  uVar9 = local_70;
  while (local_78 = uVar12, local_70 = uVar9, (uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar5,DAT_091b0558);
    lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(lVar6,DAT_091adc70);
    if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Utilities_StringExtension__SplitNonAlloc(&local_140,uVar12,uVar9,0x3b,0);
    local_d0 = local_120;
    uStack_e8 = uStack_138;
    local_f0 = local_140;
    uStack_d8 = uStack_128;
    local_e0 = uStack_130;
    Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_168,&local_f0,0);
    uStack_b8 = uStack_160;
    local_c0 = local_168;
    local_a8 = uStack_150;
    uStack_b0 = local_158;
    local_a0 = local_148;
    uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
    uVar12 = 0;
    if ((uVar4 & 1) != 0) {
      uVar12 = 0;
      uVar13 = 0xffffffff;
      do {
        local_100 = local_a8;
        uStack_f8 = local_a0;
        if (uVar13 == 0xffffffff) {
          local_110 = local_a8;
          uStack_108 = local_a0;
          if ((int)local_a0 < 1) break;
          uVar12 = FUN_05ff6c30(&local_110,DAT_091b97f0);
          if (*(int *)(DAT_09182e88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182e88);
          }
          uVar12 = CakeOrder_CookingdomInappPackListDefinition__ToSku(uVar12,0);
        }
        else {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_04370fd4;
          uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + 0x18);
          if ((int)uVar13 < (int)uVar1) {
            uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                              (&local_100,(long)&local_118 + 4,0);
            lVar7 = DAT_091b0570;
            if (((uVar4 & 1) != 0) && (0 < local_118._4_4_)) {
              lVar10 = *(long *)(param_1 + 0x58);
              if (lVar10 == 0) goto LAB_04370fd4;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar10 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
              if ((lVar10 == 0) || (lVar5 == 0)) goto LAB_04370fd4;
              uVar9 = *(undefined8 *)(lVar10 + 0x18);
              lVar10 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_04370fd4;
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar5,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar6 == 0) goto LAB_04370fd4;
              iVar11 = *(int *)(lVar6 + 0x1c);
              lVar7 = *(long *)(lVar6 + 0x10);
              uVar2 = local_118._4_4_;
LAB_04370e04:
              lVar10 = DAT_091adc88;
              *(int *)(lVar6 + 0x1c) = iVar11 + 1;
              if (lVar7 == 0) goto LAB_04370fd4;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
              }
              else {
                FUN_057971a8(lVar6,uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (uVar13 != uVar1) break;
            uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_118,0)
            ;
            uVar9 = DAT_09224f28;
            if (((uVar4 & 1) != 0) && (0 < (int)local_118)) {
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar5,uVar9,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(DAT_091b0570 + 0x20) + 0xc0) + 0x70));
                  }
                  if (lVar6 != 0) {
                    iVar11 = *(int *)(lVar6 + 0x1c);
                    lVar7 = *(long *)(lVar6 + 0x10);
                    uVar2 = (int)local_118;
                    goto LAB_04370e04;
                  }
                }
              }
              goto LAB_04370fd4;
            }
          }
        }
        uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        uVar13 = uVar13 + 1;
      } while ((uVar4 & 1) != 0);
    }
    uVar4 = System_String__IsNullOrEmpty(uVar12,0);
    if ((uVar4 & 1) == 0) {
      lVar7 = thunk_FUN_03f9944c(DAT_091852a0);
      CakeOrder_Shop_IAPPackValueConfig___ctor(lVar7,0);
      if (lVar7 == 0) goto LAB_04370fd4;
      *(undefined8 *)(lVar7 + 0x10) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x10),uVar12);
      if (lVar5 == 0) goto LAB_04370fd4;
      uVar12 = FUN_057e28a4(lVar5,DAT_091b05f8);
      *(undefined8 *)(lVar7 + 0x18) = uVar12;
      thunk_FUN_03f5d7b8();
      if (lVar6 == 0) goto LAB_04370fd4;
      uVar12 = FUN_05798d44(lVar6,DAT_091add08);
      *(undefined8 *)(lVar7 + 0x20) = uVar12;
      thunk_FUN_03f5d7b8();
      lVar5 = DAT_091acff0;
      if (lVar3 == 0) goto LAB_04370fd4;
      lVar6 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04370fd4;
      uVar13 = *(uint *)(lVar3 + 0x18);
      if (uVar13 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar13 + 1;
        plVar8 = (long *)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
        *plVar8 = lVar7;
        thunk_FUN_03f5d7b8(plVar8,lVar7);
      }
      else {
        FUN_057e0c68(lVar3,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    uVar12 = local_78;
    uVar9 = local_70;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09189e80);
  System_Object___ctor(lVar5,0);
  if ((lVar3 != 0) && (uVar12 = FUN_057e28a4(lVar3,DAT_091acff8), lVar5 != 0)) {
    *(undefined8 *)(lVar5 + 0x10) = uVar12;
    thunk_FUN_03f5d7b8();
    return lVar5;
  }
LAB_04370fd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

