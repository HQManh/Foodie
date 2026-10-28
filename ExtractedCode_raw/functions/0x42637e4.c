// rea decompile_all
// name: CakeOrder.LevelGridConfig$$ParseCellData
// address: 0x42637e4
// body: available
// range: 0x42637e4-0x4263d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4263d04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4263d08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4263d14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_LevelGridConfig__ParseCellData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_1;
  uStack_68 = param_2;
  if ((DAT_09516f9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184ed0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_091f05d8);
    FUN_03f5c2a4(&DAT_09202670);
    FUN_03f5c2a4(&DAT_09202678);
    DAT_09516f9f = 1;
  }
  local_74 = 0;
  local_80 = 0;
  uStack_b0 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_114 = 0;
  local_128 = 0;
  uStack_120 = 0;
  if ((int)param_2 == 0) goto LAB_04263cc4;
  local_74 = -1;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar3,DAT_091adc70);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_150,param_1,param_2,0x23,0);
  local_d0 = CONCAT44(uStack_14c,local_150);
  uStack_b0 = local_130;
  uStack_c8 = uStack_148;
  local_b8 = uStack_138;
  uStack_c0 = uStack_140;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_178,&local_d0,0);
  uStack_98 = uStack_170;
  local_a0 = local_178;
  local_88 = uStack_160;
  uStack_90 = local_168;
  local_80 = local_158;
  uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_a0,0);
  if ((uVar4 & 1) != 0) {
    iVar9 = 2;
    do {
      uVar2 = local_80;
      uVar6 = local_88;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Utilities_StringExtension__SplitNonAlloc(&local_150,uVar6,uVar2,0x3a,0);
        local_100 = CONCAT44(uStack_14c,local_150);
        local_e0 = local_130;
        uStack_f8 = uStack_148;
        uStack_e8 = uStack_138;
        local_f0 = uStack_140;
        Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_178,&local_100,0);
        uStack_c8 = uStack_170;
        local_d0 = local_178;
        local_b8 = uStack_160;
        uStack_c0 = local_168;
        uStack_b0 = local_158;
        uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_d0,0);
        if ((uVar4 & 1) != 0) {
          iVar9 = 0;
          goto LAB_04263a48;
        }
        break;
      }
      uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_a0,0);
    } while ((uVar4 & 1) != 0);
  }
  goto LAB_04263bd0;
LAB_04263a48:
  do {
    uStack_108 = uStack_b0;
    local_110 = local_b8;
    if (iVar9 == 0) {
      FUN_04e897d8(&local_110,&local_74,1,DAT_091f05d8);
    }
    else {
      uVar4 = Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_110,&local_114,0);
      lVar5 = DAT_091adc88;
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)FUN_03f5c394(DAT_09180318,2);
        local_128 = uVar6;
        uStack_120 = uVar2;
        lVar5 = FUN_05ff6c30(&local_128,DAT_091b97f0);
        if (plVar7 == (long *)0x0) goto LAB_04263d04;
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_04263d0c;
        if ((int)plVar7[3] == 0) goto LAB_04263d08;
        plVar7[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
        local_150 = 1;
        lVar5 = FUN_03f5c42c(DAT_09535420,&local_150);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_04263d0c;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_04263d08;
        plVar7[5] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 5,lVar5);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarningFormat(DAT_09202678,plVar7,0);
      }
      else {
        if (lVar3 == 0) goto LAB_04263d04;
        lVar8 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_04263d04;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = local_114;
        }
        else {
          FUN_057971a8(lVar3,local_114,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar4 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_d0,0);
    iVar9 = iVar9 + -1;
  } while ((uVar4 & 1) != 0);
LAB_04263bd0:
  if (local_74 == -1) {
    plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
    lVar3 = FUN_05ff6c30(&local_70,DAT_091b97f0);
    if (plVar7 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
LAB_04263d0c:
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_04263d08:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar3);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarningFormat(DAT_09202670,plVar7,0);
LAB_04263cc4:
      lVar3 = thunk_FUN_03f9944c(DAT_09184ed0);
      System_Object___ctor(lVar3,0);
      return lVar3;
    }
  }
  else {
    lVar5 = thunk_FUN_03f9944c(DAT_09184ed0);
    System_Object___ctor(lVar5,0);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) = local_74, lVar3 != 0)) {
      uVar6 = FUN_05798d44(lVar3,DAT_091add08);
      *(undefined8 *)(lVar5 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8();
      return lVar5;
    }
  }
LAB_04263d04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

