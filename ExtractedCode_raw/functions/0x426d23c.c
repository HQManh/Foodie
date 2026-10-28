// rea decompile_all
// name: CakeOrder.MapCookingProcessConfig$$ImportRecipePieceData
// address: 0x426d23c
// body: available
// range: 0x426d23c-0x426d77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426d778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapCookingProcessConfig__ImportRecipePieceData(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_10c;
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
  
  if ((DAT_09516ffa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091af678);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091af680);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091af670);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917ca28);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09189c18);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516ffa = 1;
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
  local_108 = 0;
  local_10c = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_164 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917ca28);
  FUN_057e0400(lVar4,DAT_091af670);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_190,param_2,0x7c,0);
  local_a0 = local_170;
  uStack_b8 = uStack_188;
  local_c0 = local_190;
  local_a8 = uStack_178;
  uStack_b0 = uStack_180;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1b8,&local_c0,0);
  uStack_88 = uStack_1b0;
  local_90 = local_1b8;
  local_78 = uStack_1a0;
  uStack_80 = local_1a8;
  local_70 = local_198;
  uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
LAB_0426d778:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      uVar3 = local_70;
      uVar8 = local_78;
      lVar6 = thunk_FUN_03f9944c(DAT_09189c18);
      System_Object___ctor(lVar6,0);
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_190,uVar8,uVar3,0x3b,0);
      local_d0 = local_170;
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      local_d8 = uStack_178;
      uStack_e0 = uStack_180;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1b8,&local_f0,0);
      uStack_b8 = uStack_1b0;
      local_c0 = local_1b8;
      local_a8 = uStack_1a0;
      uStack_b0 = local_1a8;
      local_a0 = local_198;
      uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      if ((uVar5 & 1) != 0) {
        iVar12 = 0;
        do {
          local_100 = local_a8;
          uStack_f8 = local_a0;
          if (iVar12 < 2) {
            if (iVar12 == 0) {
              local_120 = local_a8;
              uStack_118 = local_a0;
              uVar8 = FUN_05ff6c30(&local_120,DAT_091b97f0);
              if (lVar6 == 0) goto LAB_0426d778;
              *(undefined8 *)(lVar6 + 0x10) = uVar8;
              lVar7 = lVar6 + 0x10;
            }
            else {
              if (iVar12 != 1) goto LAB_0426d6b0;
              lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
              FUN_05796918(lVar7,DAT_091adc70);
              uVar3 = uStack_f8;
              uVar8 = local_100;
              if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Utilities_StringExtension__SplitNonAlloc(&local_190,uVar8,uVar3,0x2c,0);
              local_130 = local_170;
              uStack_148 = uStack_188;
              local_150 = local_190;
              uStack_138 = uStack_178;
              uStack_140 = uStack_180;
              Utilities_StringExtension_StringSplitEnumerator__GetEnumerator
                        (&local_1b8,&local_150,0);
              uStack_e8 = uStack_1b0;
              local_f0 = local_1b8;
              local_d8 = uStack_1a0;
              uStack_e0 = local_1a8;
              local_d0 = local_198;
              while (uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0),
                    (uVar5 & 1) != 0) {
                local_160 = local_d8;
                uStack_158 = local_d0;
                local_120 = local_d8;
                uStack_118 = local_d0;
                if ((0 < (int)local_d0) &&
                   (uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                      (&local_160,&local_164,0), lVar11 = DAT_091adc88,
                   (uVar5 & 1) != 0)) {
                  if (lVar7 == 0) goto LAB_0426d778;
                  lVar10 = *(long *)(lVar7 + 0x10);
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_0426d778;
                  uVar2 = *(uint *)(lVar7 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                    *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = local_164;
                  }
                  else {
                    FUN_057971a8(lVar7,local_164,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              if (lVar7 == 0) goto LAB_0426d778;
              if (*(int *)(lVar7 + 0x18) < 1) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_05798d44(lVar7,DAT_091add08);
              }
              if (lVar6 == 0) goto LAB_0426d778;
              lVar7 = lVar6 + 0x18;
              *(undefined8 *)(lVar6 + 0x18) = uVar8;
            }
            thunk_FUN_03f5d7b8(lVar7,uVar8);
          }
          else if (iVar12 == 2) {
            uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                              (&local_100,(long)&local_108 + 4,0);
            if (lVar6 == 0) goto LAB_0426d778;
            uVar1 = local_108._4_4_;
            if ((uVar5 & 1) == 0) {
              uVar1 = 0;
            }
            *(undefined4 *)(lVar6 + 0x20) = uVar1;
          }
          else if (iVar12 == 3) {
            uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_108,0)
            ;
            if (lVar6 == 0) goto LAB_0426d778;
            uVar1 = (undefined4)local_108;
            if ((uVar5 & 1) == 0) {
              uVar1 = 1;
            }
            *(undefined4 *)(lVar6 + 0x24) = uVar1;
          }
          else if (iVar12 == 4) {
            uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_10c,0)
            ;
            if (lVar6 == 0) goto LAB_0426d778;
            uVar1 = local_10c;
            if ((uVar5 & 1) == 0) {
              uVar1 = 5;
            }
            *(undefined4 *)(lVar6 + 0x28) = uVar1;
          }
LAB_0426d6b0:
          iVar12 = iVar12 + 1;
          uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        } while ((uVar5 & 1) != 0);
      }
      lVar7 = DAT_091af678;
      if (lVar4 == 0) goto LAB_0426d778;
      lVar11 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0426d778;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        plVar9 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *plVar9 = lVar6;
        thunk_FUN_03f5d7b8(plVar9,lVar6);
      }
      else {
        FUN_057e0c68(lVar4,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar5 & 1) != 0);
  }
  FUN_057e28a4(lVar4,DAT_091af680);
  return;
}

