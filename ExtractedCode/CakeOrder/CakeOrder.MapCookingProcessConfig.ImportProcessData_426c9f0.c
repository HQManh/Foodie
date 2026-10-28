// rea decompile_all
// name: CakeOrder.MapCookingProcessConfig$$ImportProcessData
// address: 0x426c9f0
// body: available
// range: 0x426c9f0-0x426d157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426d154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapCookingProcessConfig__ImportProcessData(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
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
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  
  if ((DAT_09516ff8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186c08);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ada50);
    FUN_03f5c2a4(&DAT_091ada58);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ada48);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c4a8);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09209f78);
    FUN_03f5c2a4(&DAT_091f8fc8);
    DAT_09516ff8 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  uStack_d0 = 0;
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
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_144 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_164 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917c4a8);
  FUN_057e0400(lVar2,DAT_091ada48);
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
  uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
LAB_0426d154:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      uVar1 = local_70;
      uVar5 = local_78;
      lVar4 = thunk_FUN_03f9944c(DAT_09186c08);
      System_Object___ctor(lVar4,0);
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_190,uVar5,uVar1,0x3b,0);
      uStack_d0 = local_170;
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      local_d8 = uStack_178;
      uStack_e0 = uStack_180;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1b8,&local_f0,0);
      iVar12 = 0;
      uStack_b8 = uStack_1b0;
      local_c0 = local_1b8;
      local_a8 = uStack_1a0;
      uStack_b0 = local_1a8;
      local_a0 = local_198;
      do {
        uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        uVar1 = local_a0;
        uVar5 = local_a8;
        if ((uVar3 & 1) == 0) break;
        if (iVar12 == 2) {
          lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar6,DAT_091adc70);
          lVar10 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar10,DAT_091adc70);
          if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Utilities_StringExtension__SplitNonAlloc(&local_190,uVar5,uVar1,0x2c,0);
          local_110 = local_170;
          uStack_128 = uStack_188;
          local_130 = local_190;
          uStack_118 = uStack_178;
          uStack_120 = uStack_180;
          Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1b8,&local_130,0);
          bVar13 = false;
          uStack_e8 = uStack_1b0;
          local_f0 = local_1b8;
          local_d8 = uStack_1a0;
          uStack_e0 = local_1a8;
          uStack_d0 = local_198;
          while (uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0),
                (uVar3 & 1) != 0) {
            uStack_158 = uStack_d0;
            local_160 = local_d8;
            uVar3 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_160,&local_164,0)
            ;
            lVar8 = DAT_091adc88;
            if ((uVar3 & 1) != 0) {
              if (bVar13) {
                if (lVar10 == 0) goto LAB_0426d154;
                lVar9 = *(long *)(lVar10 + 0x10);
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_0426d154;
                uVar11 = *(uint *)(lVar10 + 0x18);
                if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                  lVar9 = *(long *)(lVar8 + 0x20);
                  lVar8 = lVar10;
                  goto LAB_0426cf10;
                }
                lVar9 = lVar9 + (long)(int)uVar11 * 4;
                *(uint *)(lVar10 + 0x18) = uVar11 + 1;
LAB_0426cef4:
                *(undefined4 *)(lVar9 + 0x20) = local_164;
              }
              else {
                if (lVar6 == 0) goto LAB_0426d154;
                lVar9 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_0426d154;
                uVar11 = *(uint *)(lVar6 + 0x18);
                if (uVar11 < *(uint *)(lVar9 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)uVar11 * 4;
                  *(uint *)(lVar6 + 0x18) = uVar11 + 1;
                  goto LAB_0426cef4;
                }
                lVar9 = *(long *)(lVar8 + 0x20);
                lVar8 = lVar6;
LAB_0426cf10:
                FUN_057971a8(lVar8,local_164,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
              }
              bVar13 = (bool)(bVar13 ^ 1);
            }
          }
          if ((lVar6 == 0) || (uVar5 = FUN_05798d44(lVar6,DAT_091add08), lVar4 == 0))
          goto LAB_0426d154;
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8(lVar4 + 0x20,uVar5);
          if (lVar10 == 0) goto LAB_0426d154;
          if (*(int *)(lVar10 + 0x18) < *(int *)(lVar6 + 0x18)) {
            uVar5 = System_String__Concat(DAT_09209f78,*(undefined8 *)(lVar4 + 0x10),DAT_091f8fc8,0)
            ;
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar5,0);
            uVar11 = *(uint *)(lVar10 + 0x18);
            lVar8 = DAT_091adc88;
            if ((int)uVar11 < *(int *)(lVar6 + 0x18)) {
              do {
                lVar9 = *(long *)(lVar10 + 0x10);
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_0426d154;
                if (uVar11 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar11 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar11 * 4 + 0x20) = 1;
                }
                else {
                  FUN_057971a8(lVar10,1,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  lVar8 = DAT_091adc88;
                }
                uVar11 = *(uint *)(lVar10 + 0x18);
              } while ((int)uVar11 < *(int *)(lVar6 + 0x18));
            }
          }
          uVar5 = FUN_05798d44(lVar10,DAT_091add08);
          *(undefined8 *)(lVar4 + 0x28) = uVar5;
          lVar6 = lVar4 + 0x28;
LAB_0426d08c:
          thunk_FUN_03f5d7b8(lVar6,uVar5);
        }
        else {
          if (iVar12 == 1) {
            lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
            FUN_05796918(lVar6,DAT_091adc70);
            if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Utilities_StringExtension__SplitNonAlloc(&local_190,uVar5,uVar1,0x2c,0);
            local_110 = local_170;
            uStack_128 = uStack_188;
            local_130 = local_190;
            uStack_118 = uStack_178;
            uStack_120 = uStack_180;
            Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_1b8,&local_130,0);
            uStack_e8 = uStack_1b0;
            local_f0 = local_1b8;
            local_d8 = uStack_1a0;
            uStack_e0 = local_1a8;
            uStack_d0 = local_198;
            while (uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0),
                  (uVar3 & 1) != 0) {
              local_140 = local_d8;
              uStack_138 = uStack_d0;
              local_100 = local_d8;
              uStack_f8 = uStack_d0;
              if ((0 < (int)uStack_d0) &&
                 (uVar3 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                    (&local_140,&local_144,0), lVar10 = DAT_091adc88,
                 (uVar3 & 1) != 0)) {
                if (lVar6 == 0) goto LAB_0426d154;
                lVar8 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_0426d154;
                uVar11 = *(uint *)(lVar6 + 0x18);
                if (uVar11 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar11 + 1;
                  *(undefined4 *)(lVar8 + (long)(int)uVar11 * 4 + 0x20) = local_144;
                }
                else {
                  FUN_057971a8(lVar6,local_144,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) < 1) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_05798d44(lVar6,DAT_091add08);
              }
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                lVar6 = lVar4 + 0x18;
                goto LAB_0426d08c;
              }
            }
            goto LAB_0426d154;
          }
          if (iVar12 == 0) {
            local_100 = local_a8;
            uStack_f8 = local_a0;
            uVar5 = FUN_05ff6c30(&local_100,DAT_091b97f0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = uVar5;
              lVar6 = lVar4 + 0x10;
              goto LAB_0426d08c;
            }
            goto LAB_0426d154;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 3);
      lVar6 = DAT_091ada50;
      if (lVar2 == 0) goto LAB_0426d154;
      lVar10 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0426d154;
      uVar11 = *(uint *)(lVar2 + 0x18);
      if (uVar11 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar11 + 1;
        plVar7 = (long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
        *plVar7 = lVar4;
        thunk_FUN_03f5d7b8(plVar7,lVar4);
      }
      else {
        FUN_057e0c68(lVar2,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      uVar3 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar3 & 1) != 0);
  }
  FUN_057e28a4(lVar2,DAT_091ada58);
  return;
}

