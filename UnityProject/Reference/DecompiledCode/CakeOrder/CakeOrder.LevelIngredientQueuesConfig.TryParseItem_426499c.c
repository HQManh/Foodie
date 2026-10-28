// rea decompile_all
// name: CakeOrder.LevelIngredientQueuesConfig$$TryParseItem
// address: 0x426499c
// body: available
// range: 0x426499c-0x4264d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4264d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_LevelIngredientQueuesConfig__TryParseItem
          (undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_1;
  uStack_58 = param_2;
  if ((DAT_09516fa5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_09213ea0);
    FUN_03f5c2a4(&DAT_091f7a70);
    DAT_09516fa5 = 1;
  }
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_64 = 0;
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_118,param_1,param_2,0x23,0);
  local_a0 = local_f8;
  uStack_b8 = uStack_110;
  local_c0 = local_118;
  uStack_a8 = uStack_100;
  uStack_b0 = local_108;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_140,&local_c0,0);
  iVar9 = 0;
  lVar7 = 0;
  lVar8 = 0;
  bVar2 = false;
  uStack_88 = uStack_138;
  local_90 = local_140;
  local_78 = uStack_128;
  uStack_80 = uStack_130;
  local_70 = local_120;
LAB_04264b00:
  do {
    while( true ) {
      uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_90,0);
      if ((uVar4 & 1) == 0) {
        if (!bVar2) {
          return 0;
        }
        uStack_e8 = 0;
        local_e0 = 0;
        local_f0 = (ulong)local_64;
        if (lVar8 == 0) {
          uStack_e8 = 0;
        }
        else {
          uStack_e8 = FUN_05798d44(lVar8,DAT_091add08);
        }
        thunk_FUN_03f5d7b8(&uStack_e8);
        if (lVar7 == 0) {
          local_e0 = 0;
        }
        else {
          local_e0 = FUN_05798d44(lVar7,DAT_091add08);
        }
        thunk_FUN_03f5d7b8(&local_e0);
        param_3[1] = uStack_e8;
        *param_3 = local_f0;
        param_3[2] = local_e0;
        thunk_FUN_03f5d7b8(param_3 + 1,0);
        return 1;
      }
      iVar9 = iVar9 + 1;
      local_d0 = local_78;
      uStack_c8 = local_70;
      if (iVar9 != 1) break;
      uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_d0,&local_64,0);
      if ((uVar4 & 1) == 0) goto LAB_04264cf8;
      iVar9 = 1;
      bVar2 = true;
      if ((int)local_64 < 0) {
        uVar4 = CakeOrder_IngredientData__IsToolId();
        iVar9 = 1;
        bVar2 = true;
        if ((uVar4 & 1) == 0) {
LAB_04264cf8:
          uVar5 = FUN_05ff6c30(&local_60,DAT_091b97f0);
          uVar5 = System_String__Concat(DAT_09213ea0,uVar5,DAT_091f7a70,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar5,0);
          return 0;
        }
      }
    }
    auVar10 = Utilities_StringExtension_StringSplitEntry__op_Implicit(local_78,local_70,0);
    uVar4 = CakeOrder_LevelIngredientQueuesConfig__TryParseStatus
                      (auVar10._0_8_,auVar10._8_8_,(long)&local_d8 + 4,&local_d8);
  } while ((uVar4 & 1) == 0);
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(lVar8,DAT_091adc70);
    if (lVar8 == 0) goto LAB_04264d80;
  }
  lVar3 = DAT_091adc88;
  lVar6 = *(long *)(lVar8 + 0x10);
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = local_d8._4_4_;
    }
    else {
      FUN_057971a8(lVar8,local_d8._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(lVar7,DAT_091adc70);
      if (lVar7 == 0) goto LAB_04264d80;
    }
    lVar3 = DAT_091adc88;
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_d8;
      }
      else {
        FUN_057971a8(lVar7,local_d8 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_04264b00;
    }
  }
LAB_04264d80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

