// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$ImportPackData
// address: 0x43842b0
// body: available
// range: 0x43842b0-0x4384a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4384a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4384a38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4384a44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__ImportPackData(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  undefined4 local_1a8 [2];
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  int local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_09517982 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181e70);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_091fcde0);
    DAT_09517982 = 1;
  }
  local_70 = 0;
  uStack_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d4 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_134 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_154 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_09181e70);
  CakeOrder_InGame_BoosterPackConfig___ctor();
  lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar6,DAT_091b0558);
  lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar7,DAT_091adc70);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_180,param_1,0x3b,0);
  uStack_a0 = local_160;
  uStack_b8 = uStack_178;
  local_a8 = uStack_168;
  uStack_b0 = uStack_170;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(local_1a8,&local_c0,0);
  uStack_88 = uStack_1a0;
  local_78 = uStack_190;
  uStack_80 = local_198;
  local_70 = local_188;
  uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar8 & 1) != 0) {
    iVar18 = 0;
    do {
      uVar3 = local_70;
      uVar10 = local_78;
      local_d0 = local_78;
      uStack_c8 = local_70;
      iVar16 = (int)local_70;
      uVar12 = local_150;
      uVar4 = uStack_148;
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          uVar8 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_d0,&local_d4,0);
          uVar12 = local_150;
          uVar4 = uStack_148;
          if (lVar5 == 0) goto LAB_04384a34;
          uVar1 = local_d4;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0;
          }
          *(undefined4 *)(lVar5 + 0x10) = uVar1;
        }
        else if (iVar18 == 1) {
          local_f0 = local_78;
          uStack_e8 = local_70;
          if (0 < iVar16) {
            if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            Utilities_StringExtension__SplitNonAlloc(&local_180,uVar10,uVar3,0x2c,0);
            local_120 = CONCAT44(uStack_17c,local_180);
            local_100 = local_160;
            uStack_118 = uStack_178;
            uStack_108 = uStack_168;
            uStack_110 = uStack_170;
            Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(local_1a8,&local_120,0);
            uStack_b8 = uStack_1a0;
            local_a8 = uStack_190;
            uStack_b0 = local_198;
            uStack_a0 = local_188;
            while (uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0),
                  uVar12 = local_150, uVar4 = uStack_148, (uVar8 & 1) != 0) {
              uStack_e8 = uStack_a0;
              local_f0 = local_a8;
              lVar9 = FUN_05ff6c30(&local_f0,DAT_091b97f0);
              uVar12 = local_150;
              uVar4 = uStack_148;
              if ((lVar9 == 0) ||
                 (uVar10 = System_String__Trim(lVar9,0), lVar9 = DAT_091b0570, uVar12 = local_150,
                 uVar4 = uStack_148, lVar6 == 0)) goto LAB_04384a34;
              lVar13 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_04384a34;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar6,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      else if (iVar18 == 2) {
        local_f0 = local_78;
        uStack_e8 = local_70;
        if (0 < iVar16) {
          if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Utilities_StringExtension__SplitNonAlloc(&local_180,uVar10,uVar3,0x2c,0);
          local_120 = CONCAT44(uStack_17c,local_180);
          local_100 = local_160;
          uStack_118 = uStack_178;
          uStack_108 = uStack_168;
          uStack_110 = uStack_170;
          Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(local_1a8,&local_120,0);
          uStack_b8 = uStack_1a0;
          local_a8 = uStack_190;
          uStack_b0 = local_198;
          uStack_a0 = local_188;
          while (uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0),
                uVar12 = local_150, uVar4 = uStack_148, (uVar8 & 1) != 0) {
            uStack_128 = uStack_a0;
            local_130 = local_a8;
            uVar8 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_130,&local_134,0)
            ;
            lVar9 = DAT_091adc88;
            uVar1 = local_134;
            if ((uVar8 & 1) == 0) {
              uVar1 = 0;
            }
            uVar12 = local_150;
            uVar4 = uStack_148;
            if (lVar7 == 0) goto LAB_04384a34;
            lVar13 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_04384a34;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
            }
            else {
              FUN_057971a8(lVar7,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      else if (iVar18 == 3) {
        local_f0 = local_78;
        uStack_e8 = local_70;
        if (0 < iVar16) {
          lVar9 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796918(lVar9,DAT_091adc70);
          uVar4 = uStack_c8;
          uVar12 = local_d0;
          if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          Utilities_StringExtension__SplitNonAlloc(&local_180,uVar12,uVar4,0x2c,0);
          local_120 = CONCAT44(uStack_17c,local_180);
          local_100 = local_160;
          uStack_118 = uStack_178;
          uStack_108 = uStack_168;
          uStack_110 = uStack_170;
          Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(local_1a8,&local_120,0);
          uStack_b8 = uStack_1a0;
          local_a8 = uStack_190;
          uStack_b0 = local_198;
          uStack_a0 = local_188;
          uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
          uVar12 = local_150;
          uVar4 = uStack_148;
          local_150 = local_a8;
          uStack_148 = uStack_a0;
          while (local_a8 = local_150, uStack_a0 = uStack_148, (uVar8 & 1) != 0) {
            uVar8 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_150,&local_154,0)
            ;
            lVar13 = DAT_091adc88;
            if (((uVar8 & 1) != 0) && (0 < local_154)) {
              uVar12 = local_150;
              uVar4 = uStack_148;
              if (lVar9 == 0) goto LAB_04384a34;
              lVar14 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_04384a34;
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(int *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = local_154;
              }
              else {
                FUN_057971a8(lVar9,local_154,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
            uVar12 = local_150;
            uVar4 = uStack_148;
            local_150 = local_a8;
            uStack_148 = uStack_a0;
          }
          if (lVar9 == 0) goto LAB_04384a34;
          if (0 < *(int *)(lVar9 + 0x18)) {
            local_150 = uVar12;
            uStack_148 = uVar4;
            uVar10 = FUN_05798d44(lVar9,DAT_091add08);
            uVar12 = local_150;
            uVar4 = uStack_148;
            if (lVar5 == 0) goto LAB_04384a34;
            *(undefined8 *)(lVar5 + 0x28) = uVar10;
            thunk_FUN_03f5d7b8(lVar5 + 0x28,uVar10);
            uVar12 = local_150;
            uVar4 = uStack_148;
          }
        }
      }
      uStack_148 = uVar4;
      local_150 = uVar12;
      iVar18 = iVar18 + 1;
      uVar8 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar8 & 1) != 0);
  }
  uVar12 = local_150;
  uVar4 = uStack_148;
  if ((lVar6 != 0) &&
     (lVar6 = FUN_057e28a4(lVar6,DAT_091b05f8), uVar12 = local_150, uVar4 = uStack_148, lVar5 != 0))
  {
    plVar17 = (long *)(lVar5 + 0x18);
    *plVar17 = lVar6;
    thunk_FUN_03f5d7b8(plVar17,lVar6);
    uVar12 = local_150;
    uVar4 = uStack_148;
    if (lVar7 != 0) {
      lVar6 = FUN_05798d44(lVar7,DAT_091add08);
      plVar15 = (long *)(lVar5 + 0x20);
      *plVar15 = lVar6;
      thunk_FUN_03f5d7b8(plVar15,lVar6);
      uVar12 = local_150;
      uVar4 = uStack_148;
      if ((*(long *)(lVar5 + 0x18) != 0) && (*plVar15 != 0)) {
        if (*(int *)(*(long *)(lVar5 + 0x18) + 0x18) == *(int *)(*plVar15 + 0x18)) {
          return lVar5;
        }
        plVar11 = (long *)FUN_03f5c394(DAT_09180318,2);
        uVar12 = local_150;
        uVar4 = uStack_148;
        if (*plVar17 != 0) {
          local_180 = (undefined4)*(undefined8 *)(*plVar17 + 0x18);
          lVar6 = FUN_03f5c42c(DAT_09535420,&local_180);
          uVar12 = local_150;
          uVar4 = uStack_148;
          if (plVar11 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
LAB_04384a3c:
              uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar12,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar6;
              thunk_FUN_03f5d7b8(plVar11 + 4,lVar6);
              uVar12 = local_150;
              uVar4 = uStack_148;
              if (*plVar15 == 0) goto LAB_04384a34;
              local_1a8[0] = (undefined4)*(undefined8 *)(*plVar15 + 0x18);
              lVar6 = FUN_03f5c42c(DAT_09535420,local_1a8);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
              goto LAB_04384a3c;
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                plVar11[5] = lVar6;
                thunk_FUN_03f5d7b8(plVar11 + 5,lVar6);
                if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_Debug__LogWarningFormat(DAT_091fcde0,plVar11,0);
                return lVar5;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
    }
  }
LAB_04384a34:
  uStack_148 = uVar4;
  local_150 = uVar12;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

