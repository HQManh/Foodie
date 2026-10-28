// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehaviorDailyReward$$ParseConfig
// address: 0x42e7870
// body: available
// range: 0x42e7870-0x42e7bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e7bf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__ParseConfig
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
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
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if ((DAT_0951745f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3328);
    FUN_03f5c2a4(&DAT_091b3330);
    FUN_03f5c2a4(&DAT_091b3320);
    FUN_03f5c2a4(&DAT_091b3338);
    FUN_03f5c2a4(&DAT_0917d588);
    FUN_03f5c2a4(&DAT_091b97f0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091924e8);
    FUN_03f5c2a4(&DAT_091924f0);
    FUN_03f5c2a4(&DAT_0918b3a0);
    DAT_0951745f = 1;
  }
  local_60 = 0;
  local_90 = 0;
  local_b4 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d588);
  FUN_057e0400(lVar4,DAT_091b3320);
  if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Utilities_StringExtension__SplitNonAlloc(&local_128,param_2,0x7c,0);
  local_90 = local_108;
  uStack_a8 = uStack_120;
  local_b0 = local_128;
  local_98 = uStack_110;
  uStack_a0 = local_118;
  Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_80,&local_b0,0);
  uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_80,0);
  uVar9 = local_68;
  uVar2 = local_60;
  while (local_68 = uVar9, local_60 = uVar2, (uVar5 & 1) != 0) {
    local_b4 = 0;
    if (*(int *)(DAT_0918b3a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Utilities_StringExtension__SplitNonAlloc(&local_128,uVar9,uVar2,0x2c,0);
    local_c0 = local_108;
    uStack_d8 = uStack_120;
    local_e0 = local_128;
    uStack_c8 = uStack_110;
    uStack_d0 = local_118;
    Utilities_StringExtension_StringSplitEnumerator__GetEnumerator(&local_150,&local_e0,0);
    uStack_a8 = uStack_148;
    local_b0 = local_150;
    local_98 = uStack_138;
    uStack_a0 = uStack_140;
    local_90 = local_130;
    uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_b0,0);
    uVar9 = 0;
    if ((uVar5 & 1) != 0) {
      uVar9 = 0;
      iVar10 = 0;
      do {
        local_f0 = local_98;
        uStack_e8 = local_90;
        if (iVar10 == 1) {
          Utilities_StringExtension_StringSplitEntry__TryParseInt(&local_f0,&local_b4,0);
        }
        else if (iVar10 == 0) {
          local_100 = local_98;
          uStack_f8 = local_90;
          if (0 < (int)local_90) {
            uVar9 = FUN_05ff6c30(&local_100,DAT_091b97f0);
          }
        }
        iVar10 = iVar10 + 1;
        uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_b0,0);
      } while ((uVar5 & 1) != 0);
    }
    uVar5 = System_String__IsNullOrEmpty(uVar9,0);
    if (((uVar5 & 1) == 0) && (0 < local_b4)) {
      lVar6 = thunk_FUN_03f9944c(DAT_091924f0);
      System_Object___ctor(lVar6,0);
      if (lVar6 == 0) goto LAB_042e7bf4;
      *(undefined8 *)(lVar6 + 0x10) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x10),uVar9);
      *(int *)(lVar6 + 0x18) = local_b4;
      lVar3 = DAT_091b3328;
      if (lVar4 == 0) goto LAB_042e7bf4;
      lVar8 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_042e7bf4;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar6;
        thunk_FUN_03f5d7b8(plVar7,lVar6);
      }
      else {
        FUN_057e0c68(lVar4,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar5 = Utilities_StringExtension_StringSplitEnumerator__MoveNext(&local_80,0);
    uVar9 = local_68;
    uVar2 = local_60;
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_03f9944c(DAT_091924e8);
      System_Object___ctor(lVar6,0);
      uVar9 = FUN_057e28a4(lVar4,DAT_091b3330);
      if (lVar6 == 0) goto LAB_042e7bf4;
      *(undefined8 *)(lVar6 + 0x10) = uVar9;
      thunk_FUN_03f5d7b8();
    }
    return lVar6;
  }
LAB_042e7bf4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

