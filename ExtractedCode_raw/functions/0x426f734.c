// rea decompile_all
// name: CakeOrder.MapToolConfig$$ImportData
// address: 0x426f734
// body: available
// range: 0x426f734-0x426fbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426fba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_MapToolConfig__ImportData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  if ((DAT_09517008 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b33b8);
    FUN_03f5c2a4(&DAT_091b33c0);
    FUN_03f5c2a4(&DAT_091b33b0);
    FUN_03f5c2a4(&DAT_0917d5a8);
    FUN_03f5c2a4(&DAT_09187db0);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09192660);
    FUN_03f5c2a4(&DAT_091f7600);
    FUN_03f5c2a4(&DAT_09210b48);
    DAT_09517008 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d5a8);
  FUN_057e0400(lVar4,DAT_091b33b0);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_128,param_2,0x7c,0);
  local_a0 = local_108;
  uStack_b8 = uStack_120;
  local_c0 = local_128;
  local_a8 = uStack_110;
  uStack_b0 = local_118;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_150,&local_c0,0);
  uStack_88 = uStack_148;
  local_90 = local_150;
  local_78 = uStack_138;
  uStack_80 = uStack_140;
  local_70 = local_130;
  uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
  uVar10 = local_78;
  uVar2 = local_70;
  while (local_78 = uVar10, local_70 = uVar2, (uVar5 & 1) != 0) {
    local_d0 = uVar10;
    uStack_c8 = uVar2;
    if ((int)uVar2 != 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_09192660);
      CakeOrder_MapToolConfig_ToolData___ctor();
      if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Utilities_StringExtension__SplitNonAlloc(&local_128,uVar10,uVar2,0x3b,0);
      local_e0 = local_108;
      uStack_f8 = uStack_120;
      local_100 = local_128;
      uStack_e8 = uStack_110;
      uStack_f0 = local_118;
      Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_150,&local_100,0);
      uStack_b8 = uStack_148;
      local_c0 = local_150;
      local_a8 = uStack_138;
      uStack_b0 = uStack_140;
      local_a0 = local_130;
      uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
      iVar13 = 0;
      uVar9 = local_d0;
      uVar3 = uStack_c8;
      local_d0 = local_a8;
      uStack_c8 = local_a0;
      while (local_a8 = local_d0, local_a0 = uStack_c8, (uVar5 & 1) != 0) {
        if (iVar13 == 2) {
          uVar9 = FUN_05ff6c30(&local_d0,DAT_091b97f0);
          if (*(int *)(DAT_09187db0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187db0);
          }
          uVar8 = CakeOrder_MapToolConfig__ParseFloatList(0,uVar9);
          uVar9 = local_d0;
          uVar3 = uStack_c8;
          if (lVar6 == 0) goto LAB_0426fba8;
          *(undefined8 *)(lVar6 + 0x20) = uVar8;
          lVar7 = lVar6 + 0x20;
LAB_0426fa38:
          thunk_FUN_03f5d7b8(lVar7,uVar8);
          uVar9 = local_d0;
          uVar3 = uStack_c8;
        }
        else {
          if (iVar13 == 1) {
            uVar9 = FUN_05ff6c30(&local_d0,DAT_091b97f0);
            if (*(int *)(DAT_09187db0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187db0);
            }
            uVar8 = CakeOrder_MapToolConfig__ParseFloatList(0x3f800000,uVar9);
            uVar9 = local_d0;
            uVar3 = uStack_c8;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x18) = uVar8;
              lVar7 = lVar6 + 0x18;
              goto LAB_0426fa38;
            }
            goto LAB_0426fba8;
          }
          if (iVar13 == 0) {
            lVar7 = FUN_05ff6c30(&local_d0,DAT_091b97f0);
            uVar9 = local_d0;
            uVar3 = uStack_c8;
            if ((lVar7 != 0) &&
               (uVar8 = System_String__Trim(lVar7,0), uVar9 = local_d0, uVar3 = uStack_c8,
               lVar6 != 0)) {
              *(undefined8 *)(lVar6 + 0x10) = uVar8;
              lVar7 = lVar6 + 0x10;
              goto LAB_0426fa38;
            }
            goto LAB_0426fba8;
          }
        }
        uStack_c8 = uVar3;
        local_d0 = uVar9;
        iVar13 = iVar13 + 1;
        uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_c0,0);
        uVar9 = local_d0;
        uVar3 = uStack_c8;
        local_d0 = local_a8;
        uStack_c8 = local_a0;
      }
      if (lVar6 == 0) goto LAB_0426fba8;
      local_d0 = uVar9;
      uStack_c8 = uVar3;
      uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x10),0);
      if ((uVar5 & 1) == 0) {
        if (iVar13 < 3) {
          uVar9 = local_d0;
          uVar3 = uStack_c8;
          if (*(long *)(lVar6 + 0x18) == 0) goto LAB_0426fba8;
          uVar10 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x18));
          *(undefined8 *)(lVar6 + 0x20) = uVar10;
          thunk_FUN_03f5d7b8();
        }
        lVar7 = DAT_091b33b8;
        uVar9 = local_d0;
        uVar3 = uStack_c8;
        if (lVar4 == 0) goto LAB_0426fba8;
        lVar12 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_0426fba8;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar6;
          thunk_FUN_03f5d7b8(plVar11,lVar6);
        }
        else {
          FUN_057e0c68(lVar4,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      else {
        local_d0 = uVar10;
        uStack_c8 = uVar2;
        uVar10 = FUN_05ff6c30(&local_d0,DAT_091b97f0);
        uVar10 = System_String__Concat(DAT_09210b48,uVar10,DAT_091f7600,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar10,0);
      }
    }
    uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
    uVar10 = local_78;
    uVar2 = local_70;
  }
  uVar9 = local_d0;
  uVar3 = uStack_c8;
  if (lVar4 != 0) {
    FUN_057e28a4(lVar4,DAT_091b33c0);
    return;
  }
LAB_0426fba8:
  uStack_c8 = uVar3;
  local_d0 = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

