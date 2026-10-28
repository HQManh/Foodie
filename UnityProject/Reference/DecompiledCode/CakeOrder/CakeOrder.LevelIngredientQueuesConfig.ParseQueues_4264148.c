// rea decompile_all
// name: CakeOrder.LevelIngredientQueuesConfig$$ParseQueues
// address: 0x4264148
// body: available
// range: 0x4264148-0x4264527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4264524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_LevelIngredientQueuesConfig__ParseQueues
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
  undefined1 auVar10 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
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
  
  if ((DAT_09516fa3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0018);
    FUN_03f5c2a4(&DAT_091ad9b0);
    FUN_03f5c2a4(&DAT_091ad9b8);
    FUN_03f5c2a4(&DAT_091b0020);
    FUN_03f5c2a4(&DAT_091b0008);
    FUN_03f5c2a4(&DAT_091ad9a0);
    FUN_03f5c2a4(&DAT_091ad9c0);
    FUN_03f5c2a4(&DAT_091b0028);
    FUN_03f5c2a4(&DAT_0917c488);
    FUN_03f5c2a4(&DAT_0917cbe0);
    FUN_03f5c2a4(&DAT_0918ac88);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_09516fa3 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917cbe0);
  FUN_057e0400(lVar3,DAT_091b0008);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_130,param_2,param_3,0x25,0);
  local_a0 = local_110;
  uStack_b8 = uStack_128;
  local_c0 = local_130;
  local_a8 = uStack_118;
  uStack_b0 = local_120;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_158,&local_c0,0);
  uStack_88 = uStack_150;
  local_90 = local_158;
  local_78 = uStack_140;
  uStack_80 = local_148;
  local_70 = local_138;
  uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  uVar7 = local_78;
  uVar2 = local_70;
  while (local_78 = uVar7, local_70 = uVar2, (uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_03f9944c(DAT_0917c488);
    FUN_05785f18(lVar5,DAT_091ad9a0);
    if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Utilities_StringExtension__SplitNonAlloc(&local_130,uVar7,uVar2,0x2c,0);
    local_d0 = local_110;
    uStack_e8 = uStack_128;
    local_f0 = local_130;
    uStack_d8 = uStack_118;
    uStack_e0 = local_120;
    Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_158,&local_f0,0);
    uStack_b8 = uStack_150;
    local_c0 = local_158;
    local_a8 = uStack_140;
    uStack_b0 = local_148;
    local_a0 = local_138;
    while (uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0),
          (uVar4 & 1) != 0) {
      auVar10 = Utilities_StringExtension_StringSplitEntry__op_Implicit(local_a8,local_a0,0);
      uVar4 = CakeOrder_LevelIngredientQueuesConfig__TryParseItem
                        (auVar10._0_8_,auVar10._8_8_,&local_108);
      lVar6 = DAT_091ad9b0;
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) goto LAB_04264524;
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_04264524;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + 0x30) = local_f8;
          *(undefined8 *)(lVar9 + 0x28) = uStack_100;
          *(undefined8 *)(lVar9 + 0x20) = local_108;
          thunk_FUN_03f5d7b8(lVar9 + 0x28,0);
        }
        else {
          uStack_128 = uStack_100;
          local_130 = local_108;
          local_120 = local_f8;
          FUN_0578683c(lVar5,&local_130,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    if (lVar5 == 0) goto LAB_04264524;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar6 = thunk_FUN_03f9944c(DAT_0918ac88);
      System_Object___ctor(lVar6,0);
      uVar7 = FUN_057887fc(lVar5,DAT_091ad9b8);
      if (lVar6 == 0) goto LAB_04264524;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_03f5d7b8();
      lVar5 = DAT_091b0018;
      if (lVar3 == 0) goto LAB_04264524;
      lVar9 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_04264524;
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
    if (*(int *)(lVar3 + 0x18) < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_057e28a4(lVar3,DAT_091b0020);
    }
    return uVar7;
  }
LAB_04264524:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

