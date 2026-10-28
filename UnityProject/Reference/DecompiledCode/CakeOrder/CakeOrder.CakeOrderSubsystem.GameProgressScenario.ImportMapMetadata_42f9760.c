// rea decompile_all
// name: CakeOrder.CakeOrderSubsystem.GameProgressScenario$$ImportMapMetadata
// address: 0x42f9760
// body: available
// range: 0x42f9760-0x42f9b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f9b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportMapMetadata
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
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
  
  if ((DAT_09517508 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae500);
    FUN_03f5c2a4(&DAT_091ae508);
    FUN_03f5c2a4(&DAT_091ae4f8);
    FUN_03f5c2a4(&DAT_0917c6c0);
    FUN_03f5c2a4(&DAT_09187da8);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09517508 = 1;
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
  lVar5 = thunk_FUN_03f9944c(DAT_0917c6c0);
  FUN_057e0400(lVar5,DAT_091ae4f8);
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
  uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  uVar8 = local_78;
  uVar3 = local_70;
  while (local_78 = uVar8, local_70 = uVar3, (uVar6 & 1) != 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_09187da8);
    *(undefined4 *)(lVar7 + 0x28) = 3;
    *(undefined8 *)(lVar7 + 0x20) = 0x200000005;
    *(undefined8 *)(lVar7 + 0x18) = 0x1900000019;
    System_Object___ctor(lVar7,0);
    if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Utilities_StringExtension__SplitNonAlloc(&local_150,uVar8,uVar3,0x3b,0);
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
    uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
    if ((uVar6 & 1) != 0) {
      iVar11 = 0;
      do {
        local_100 = local_a8;
        uStack_f8 = local_a0;
        if (iVar11 < 3) {
          if (iVar11 == 0) {
            local_128 = local_a8;
            uStack_120 = local_a0;
            uVar8 = FUN_05ff6c30(&local_128,DAT_091b97f0);
            *(undefined8 *)(lVar7 + 0x10) = uVar8;
            thunk_FUN_03f5d7b8(lVar7 + 0x10,uVar8);
          }
          else if (iVar11 == 1) {
            uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                              (&local_100,(long)&local_108 + 4,0);
            uVar1 = local_108._4_4_;
            if ((uVar6 & 1) == 0) {
              uVar1 = 1;
            }
            *(undefined4 *)(lVar7 + 0x18) = uVar1;
          }
          else if (iVar11 == 2) {
            uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_108,0)
            ;
            uVar1 = (undefined4)local_108;
            if ((uVar6 & 1) == 0) {
              uVar1 = 1;
            }
            *(undefined4 *)(lVar7 + 0x1c) = uVar1;
          }
        }
        else if (iVar11 == 3) {
          uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                            (&local_100,(long)&local_110 + 4,0);
          uVar1 = local_110._4_4_;
          if ((uVar6 & 1) == 0) {
            uVar1 = 5;
          }
          *(undefined4 *)(lVar7 + 0x20) = uVar1;
        }
        else if (iVar11 == 4) {
          uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_110,0);
          uVar1 = (undefined4)local_110;
          if ((uVar6 & 1) == 0) {
            uVar1 = 3;
          }
          *(undefined4 *)(lVar7 + 0x24) = uVar1;
        }
        else if (iVar11 == 5) {
          uVar6 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_100,&local_114,0);
          uVar1 = local_114;
          if ((uVar6 & 1) == 0) {
            uVar1 = 3;
          }
          *(undefined4 *)(lVar7 + 0x28) = uVar1;
        }
        iVar11 = iVar11 + 1;
        uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      } while ((uVar6 & 1) != 0);
      if (lVar7 == 0) goto LAB_042f9b4c;
    }
    uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar7 + 0x10),0);
    lVar4 = DAT_091ae500;
    if ((uVar6 & 1) == 0) {
      if (lVar5 == 0) goto LAB_042f9b4c;
      lVar10 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_042f9b4c;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        plVar9 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        *plVar9 = lVar7;
        thunk_FUN_03f5d7b8(plVar9,lVar7);
      }
      else {
        FUN_057e0c68(lVar5,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar6 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    uVar8 = local_78;
    uVar3 = local_70;
  }
  if (lVar5 != 0) {
    FUN_057e28a4(lVar5,DAT_091ae508);
    return;
  }
LAB_042f9b4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

