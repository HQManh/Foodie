// rea decompile_all
// name: CakeOrder.MapLevelMetadataConfig$$ImportData
// address: 0x426e368
// body: available
// range: 0x426e368-0x426e7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426e7b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapLevelMetadataConfig__ImportData(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_114;
  undefined8 local_110;
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
  
  if ((DAT_09517000 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0038);
    FUN_03f5c2a4(&DAT_091b0040);
    FUN_03f5c2a4(&DAT_091b0030);
    FUN_03f5c2a4(&DAT_0917cbe8);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_0918ac90);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_091f05e0);
    FUN_03f5c2a4(&DAT_091f05e8);
    DAT_09517000 = 1;
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
  local_110 = 0;
  local_108 = 0;
  local_114 = 0;
  local_128 = 0;
  uStack_120 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917cbe8);
  FUN_057e0400(lVar4,DAT_091b0030);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_150,param_2,0x7c,0);
  local_a0 = local_130;
  uStack_b8 = uStack_148;
  local_c0 = local_150;
  local_a8 = uStack_138;
  uStack_b0 = uStack_140;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_178,&local_c0,0);
  uStack_88 = uStack_170;
  local_90 = local_178;
  local_78 = uStack_160;
  uStack_80 = local_168;
  local_70 = local_158;
  uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
LAB_0426e7b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    do {
      uVar3 = local_70;
      uVar7 = local_78;
      lVar6 = thunk_FUN_03f9944c(DAT_0918ac90);
      System_Object___ctor(lVar6,0);
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_150,uVar7,uVar3,0x3b,0);
      local_d0 = local_130;
      uStack_e8 = uStack_148;
      local_f0 = local_150;
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_178,&local_f0,0);
      uStack_b8 = uStack_170;
      local_c0 = local_178;
      local_a8 = uStack_160;
      uStack_b0 = local_168;
      local_a0 = local_158;
      uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      if ((uVar5 & 1) != 0) {
        iVar10 = 0;
        do {
          local_100 = local_a8;
          uStack_f8 = local_a0;
          if (iVar10 < 3) {
            if (iVar10 == 0) {
              puVar11 = (undefined4 *)((long)&local_108 + 4);
              uVar5 = FUN_04e897d8(&local_100,(long)&local_108 + 4,1,DAT_091f05e8);
              if ((uVar5 & 1) == 0) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426e7b4;
                puVar11 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
              }
              if (lVar6 == 0) goto LAB_0426e7b4;
              *(undefined4 *)(lVar6 + 0x10) = *puVar11;
            }
            else if (iVar10 == 1) {
              puVar12 = &local_108;
              uVar5 = FUN_04e897d8(&local_100,&local_108,1,DAT_091f05e0);
              if ((uVar5 & 1) == 0) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426e7b4;
                puVar12 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x14);
              }
              if (lVar6 == 0) goto LAB_0426e7b4;
              *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)puVar12;
            }
            else if (iVar10 == 2) {
              puVar11 = (undefined4 *)((long)&local_110 + 4);
              uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                                (&local_100,(long)&local_110 + 4,0);
              if ((uVar5 & 1) == 0) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426e7b4;
                puVar11 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
              }
              if (lVar6 == 0) goto LAB_0426e7b4;
              *(undefined4 *)(lVar6 + 0x18) = *puVar11;
            }
          }
          else if (iVar10 == 3) {
            puVar12 = &local_110;
            uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_110,0)
            ;
            if ((uVar5 & 1) == 0) {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426e7b4;
              puVar12 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x1c);
            }
            if (lVar6 == 0) goto LAB_0426e7b4;
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)puVar12;
          }
          else if (iVar10 == 4) {
            puVar11 = &local_114;
            uVar5 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_114,0)
            ;
            if ((uVar5 & 1) == 0) {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426e7b4;
              puVar11 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x20);
            }
            if (lVar6 == 0) goto LAB_0426e7b4;
            *(undefined4 *)(lVar6 + 0x20) = *puVar11;
          }
          else if (iVar10 == 5) {
            local_128 = local_a8;
            uStack_120 = local_a0;
            uVar7 = FUN_05ff6c30(&local_128,DAT_091b97f0);
            if (lVar6 == 0) goto LAB_0426e7b4;
            *(undefined8 *)(lVar6 + 0x28) = uVar7;
            thunk_FUN_03f5d7b8(lVar6 + 0x28,uVar7);
          }
          iVar10 = iVar10 + 1;
          uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        } while ((uVar5 & 1) != 0);
      }
      lVar2 = DAT_091b0038;
      if (lVar4 == 0) goto LAB_0426e7b4;
      lVar9 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0426e7b4;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar6;
        thunk_FUN_03f5d7b8(plVar8,lVar6);
      }
      else {
        FUN_057e0c68(lVar4,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    } while ((uVar5 & 1) != 0);
  }
  FUN_057e28a4(lVar4,DAT_091b0040);
  return;
}

