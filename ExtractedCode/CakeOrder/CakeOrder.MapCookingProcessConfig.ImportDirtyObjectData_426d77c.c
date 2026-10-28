// rea decompile_all
// name: CakeOrder.MapCookingProcessConfig$$ImportDirtyObjectData
// address: 0x426d77c
// body: available
// range: 0x426d77c-0x426dc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426dc90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapCookingProcessConfig__ImportDirtyObjectData(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
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
  
  if ((DAT_09516ffb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b88);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ac5c0);
    FUN_03f5c2a4(&DAT_091ac5c8);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ac5b8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c078);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516ffb = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_154 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917c078);
  FUN_057e0400(lVar5,DAT_091ac5b8);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_180,param_2,0x7c,0);
  local_a0 = local_160;
  uStack_b8 = uStack_178;
  local_c0 = local_180;
  local_a8 = uStack_168;
  uStack_b0 = uStack_170;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1a8,&local_c0,0);
  uStack_88 = uStack_1a0;
  local_90 = local_1a8;
  local_78 = uStack_190;
  uStack_80 = local_198;
  local_70 = local_188;
  uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
LAB_0426dc90:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      uVar3 = local_70;
      uVar8 = local_78;
      lVar7 = thunk_FUN_03f9944c(DAT_09183b88);
      System_Object___ctor(lVar7,0);
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_180,uVar8,uVar3,0x3b,0);
      local_d0 = local_160;
      uStack_e8 = uStack_178;
      local_f0 = local_180;
      local_d8 = uStack_168;
      uStack_e0 = uStack_170;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1a8,&local_f0,0);
      uStack_b8 = uStack_1a0;
      local_c0 = local_1a8;
      local_a8 = uStack_190;
      uStack_b0 = local_198;
      local_a0 = local_188;
      uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      if ((uVar6 & 1) != 0) {
        iVar13 = 0;
        do {
          local_100 = local_a8;
          uStack_f8 = local_a0;
          if (iVar13 < 2) {
            if (iVar13 == 0) {
              local_118 = local_a8;
              local_110 = local_a0;
              uVar8 = FUN_05ff6c30(&local_118,DAT_091b97f0);
              if (lVar7 == 0) goto LAB_0426dc90;
              *(undefined8 *)(lVar7 + 0x10) = uVar8;
              lVar9 = lVar7 + 0x10;
LAB_0426dbc4:
              thunk_FUN_03f5d7b8(lVar9,uVar8);
            }
            else if (iVar13 == 1) {
              uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                (&local_100,(long)&local_108 + 4,0);
              if (lVar7 == 0) goto LAB_0426dc90;
              uVar1 = local_108._4_4_;
              if ((uVar6 & 1) == 0) {
                uVar1 = 1;
              }
              *(undefined4 *)(lVar7 + 0x18) = uVar1;
            }
          }
          else {
            if (iVar13 == 2) {
              lVar9 = thunk_FUN_03f9944c(DAT_0917c520);
              FUN_05796918(lVar9,DAT_091adc70);
              uVar3 = uStack_f8;
              uVar8 = local_100;
              if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Utilities_StringExtension__SplitNonAlloc(&local_180,uVar8,uVar3,0x2c,0);
              local_120 = local_160;
              uStack_138 = uStack_178;
              local_140 = local_180;
              uStack_128 = uStack_168;
              uStack_130 = uStack_170;
              Utilities_StringExtension_StringSplitEnumerator__GetEnumerator
                        (&local_1a8,&local_140,0);
              uStack_e8 = uStack_1a0;
              local_f0 = local_1a8;
              local_d8 = uStack_190;
              uStack_e0 = local_198;
              local_d0 = local_188;
              while (uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0),
                    (uVar6 & 1) != 0) {
                local_150 = local_d8;
                uStack_148 = local_d0;
                local_118 = local_d8;
                local_110 = local_d0;
                if ((0 < (int)local_d0) &&
                   (uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                      (&local_150,&local_154,0), lVar12 = DAT_091adc88,
                   (uVar6 & 1) != 0)) {
                  if (lVar9 == 0) goto LAB_0426dc90;
                  lVar11 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_0426dc90;
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = local_154;
                  }
                  else {
                    FUN_057971a8(lVar9,local_154,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) < 1) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = FUN_05798d44(lVar9,DAT_091add08);
                }
                if (lVar7 != 0) {
                  lVar9 = lVar7 + 0x20;
                  *(undefined8 *)(lVar7 + 0x20) = uVar8;
                  goto LAB_0426dbc4;
                }
              }
              goto LAB_0426dc90;
            }
            if (iVar13 == 3) {
              bVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                (&local_100,&local_108,0);
              if (lVar7 == 0) goto LAB_0426dc90;
              *(byte *)(lVar7 + 0x28) = bVar4 & (int)local_108 == 1;
            }
          }
          iVar13 = iVar13 + 1;
          uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        } while ((uVar6 & 1) != 0);
      }
      lVar9 = DAT_091ac5c0;
      if (lVar5 == 0) goto LAB_0426dc90;
      lVar12 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_0426dc90;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = lVar7;
        thunk_FUN_03f5d7b8(plVar10,lVar7);
      }
      else {
        FUN_057e0c68(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar6 & 1) != 0);
  }
  FUN_057e28a4(lVar5,DAT_091ac5c8);
  return;
}

