// rea decompile_all
// name: CakeOrder.LevelIngredientQueuesConfig$$ParseSlotGroup
// address: 0x4264528
// body: available
// range: 0x4264528-0x426499b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4264998 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LevelIngredientQueuesConfig__ParseSlotGroup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
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
  
  if ((DAT_09516fa4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186c28);
    FUN_03f5c2a4(&DAT_091ada88);
    FUN_03f5c2a4(&DAT_091b1a08);
    FUN_03f5c2a4(&DAT_091b1a20);
    FUN_03f5c2a4(&DAT_091ada90);
    FUN_03f5c2a4(&DAT_091ada80);
    FUN_03f5c2a4(&DAT_091b19f8);
    FUN_03f5c2a4(&DAT_091b1a28);
    FUN_03f5c2a4(&DAT_0917d058);
    FUN_03f5c2a4(&DAT_0917c4b8);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516fa4 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  uStack_d0 = 0;
  local_100 = 0;
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
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_138 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c4b8);
  FUN_057e0400(lVar3,DAT_091ada80);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_160,param_2,param_3,0x3b,0);
  local_a0 = local_140;
  uStack_b8 = uStack_158;
  local_c0 = local_160;
  local_a8 = uStack_148;
  uStack_b0 = uStack_150;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_188,&local_c0,0);
  uStack_88 = uStack_180;
  local_90 = local_188;
  local_78 = uStack_170;
  uStack_80 = local_178;
  local_70 = local_168;
  uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  uVar7 = local_78;
  uVar2 = local_70;
  while (local_78 = uVar7, local_70 = uVar2, (uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917d058);
    FUN_058ae718(lVar5,DAT_091b19f8);
    if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Utilities_StringExtension__SplitNonAlloc(&local_160,uVar7,uVar2,0x2c,0);
    uStack_d0 = local_140;
    uStack_e8 = uStack_158;
    local_f0 = local_160;
    local_d8 = uStack_148;
    uStack_e0 = uStack_150;
    Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_188,&local_f0,0);
    uStack_b8 = uStack_180;
    local_c0 = local_188;
    local_a8 = uStack_170;
    uStack_b0 = local_178;
    local_a0 = local_168;
    while (uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0),
          uVar2 = local_a0, uVar7 = local_a8, (uVar4 & 1) != 0) {
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_160,uVar7,uVar2,0x2d,0);
      local_100 = local_140;
      uStack_118 = uStack_158;
      local_120 = local_160;
      uStack_108 = uStack_148;
      uStack_110 = uStack_150;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_188,&local_120,0);
      uStack_e8 = uStack_180;
      local_f0 = local_188;
      local_d8 = uStack_170;
      uStack_e0 = local_178;
      uStack_d0 = local_168;
      uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0);
      if ((uVar4 & 1) != 0) {
        iVar12 = 0;
        iVar10 = -1;
        iVar11 = -1;
        do {
          uStack_128 = uStack_d0;
          local_130 = local_d8;
          if (iVar12 == 1) {
            uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_130,&local_138,0)
            ;
            iVar10 = (int)local_138;
            if ((uVar4 & 1) == 0) {
              iVar10 = -1;
            }
          }
          else {
            if (iVar12 != 0) break;
            uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt
                              (&local_130,(long)&local_138 + 4,0);
            iVar11 = local_138._4_4_;
            if ((uVar4 & 1) == 0) {
              iVar11 = -1;
            }
          }
          iVar12 = iVar12 + 1;
          uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_f0,0);
        } while ((uVar4 & 1) != 0);
        lVar6 = DAT_091b1a08;
        if ((-1 < iVar11) && (-1 < iVar10)) {
          if (lVar5 == 0) goto LAB_04264998;
          lVar9 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_04264998;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(ulong *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = CONCAT44(iVar10,iVar11);
          }
          else {
            FUN_058aefa4(lVar5,CONCAT44(iVar10,iVar11),
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    if (lVar5 == 0) goto LAB_04264998;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar6 = thunk_FUN_03f9944c(DAT_09186c28);
      System_Object___ctor(lVar6,0);
      uVar7 = FUN_058b0b44(lVar5,DAT_091b1a20);
      if (lVar6 == 0) goto LAB_04264998;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_03f5d7b8();
      lVar5 = DAT_091ada88;
      if (lVar3 == 0) goto LAB_04264998;
      lVar9 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_04264998;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar6;
        thunk_FUN_03f5d7b8(plVar8,lVar6);
      }
      else {
        FUN_057e0c68(lVar3,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    uVar7 = local_78;
    uVar2 = local_70;
  }
  if (lVar3 != 0) {
    FUN_057e28a4(lVar3,DAT_091ada90);
    return;
  }
LAB_04264998:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

