// rea decompile_all
// name: CakeOrder.LevelCustomerOrdersConfig$$ImportData
// address: 0x4262e78
// body: available
// range: 0x4262e78-0x426331b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4263318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LevelCustomerOrdersConfig__ImportData
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  if ((DAT_09516f9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c8f88);
    FUN_03f5c2a4(&DAT_091afff8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091b0000);
    FUN_03f5c2a4(&DAT_091afff0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0917cbd8);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918ac70);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516f9a = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
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
  lVar5 = thunk_FUN_03f9944c(DAT_0917cbd8);
  FUN_057e0400(lVar5,DAT_091afff0);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_148,param_2,param_3,0x7c,0);
  local_a0 = local_128;
  uStack_b8 = uStack_140;
  local_c0 = local_148;
  local_a8 = uStack_130;
  uStack_b0 = local_138;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_170,&local_c0,0);
  uStack_88 = uStack_168;
  local_90 = local_170;
  local_78 = uStack_158;
  uStack_80 = uStack_160;
  local_70 = local_150;
  uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) {
LAB_04263318:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      uVar3 = local_70;
      uVar9 = local_78;
      lVar7 = thunk_FUN_03f9944c(DAT_0918ac70);
      System_Object___ctor(lVar7,0);
      lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(lVar8,DAT_091b0558);
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_148,uVar9,uVar3,0x3b,0);
      local_d0 = local_128;
      uStack_e8 = uStack_140;
      local_f0 = local_148;
      uStack_d8 = uStack_130;
      uStack_e0 = local_138;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_170,&local_f0,0);
      uStack_b8 = uStack_168;
      local_c0 = local_170;
      local_a8 = uStack_158;
      uStack_b0 = uStack_160;
      local_a0 = local_150;
      uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      if ((uVar6 & 1) != 0) {
        iVar13 = 0;
        do {
          local_100 = local_a8;
          uStack_f8 = local_a0;
          if (iVar13 == 2) {
            bVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_10c,0)
            ;
            if (lVar7 == 0) goto LAB_04263318;
            *(byte *)(lVar7 + 0x18) = bVar4 & local_10c == 1;
          }
          else if (iVar13 == 1) {
            uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_108,0)
            ;
            if (lVar7 == 0) goto LAB_04263318;
            uVar1 = (undefined4)local_108;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            *(undefined4 *)(lVar7 + 0x14) = uVar1;
          }
          else if (iVar13 == 0) {
            local_120 = local_a8;
            uStack_118 = local_a0;
            uVar9 = FUN_05ff6c30(&local_120,DAT_091b97f0);
            if (*(int *)(DAT_09535470 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09535470);
            }
            uVar6 = FUN_04aaf4a8(uVar9,(long)&local_108 + 4,DAT_091c8f88);
            if (lVar7 == 0) goto LAB_04263318;
            uVar1 = local_108._4_4_;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            *(undefined4 *)(lVar7 + 0x10) = uVar1;
          }
          else {
            local_120 = local_a8;
            uStack_118 = local_a0;
            if (0 < (int)local_a0) {
              uVar9 = FUN_05ff6c30(&local_120,DAT_091b97f0);
              lVar12 = DAT_091b0570;
              if (lVar8 == 0) goto LAB_04263318;
              lVar11 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_04263318;
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar13 = iVar13 + 1;
          uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        } while ((uVar6 & 1) != 0);
      }
      if ((lVar8 == 0) || (uVar9 = FUN_057e28a4(lVar8,DAT_091b05f8), lVar7 == 0)) goto LAB_04263318;
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8();
      lVar8 = DAT_091afff8;
      if (lVar5 == 0) goto LAB_04263318;
      lVar12 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_04263318;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        plVar10 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *plVar10 = lVar7;
        thunk_FUN_03f5d7b8(plVar10,lVar7);
      }
      else {
        FUN_057e0c68(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar6 & 1) != 0);
  }
  FUN_057e28a4(lVar5,DAT_091b0000);
  return;
}

