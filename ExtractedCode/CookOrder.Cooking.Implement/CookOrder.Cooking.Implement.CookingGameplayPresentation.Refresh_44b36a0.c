// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$Refresh
// address: 0x44b36a0
// body: available
// range: 0x44b36a0-0x44b737b inclusive
// range: 0x44b7710-0x44b772b inclusive
// range: 0x44b77e4-0x44b77ff inclusive
// range: 0x44b7980-0x44b7983 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b4550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b4c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b5534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b5d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b6958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b69b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b69cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b69e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b69fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b6a14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b6a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b6a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044b688c) */
/* WARNING: Removing unreachable block (ram,0x044b4cb8) */
/* WARNING: Removing unreachable block (ram,0x044b71f8) */
/* WARNING: Removing unreachable block (ram,0x044b720c) */
/* WARNING: Removing unreachable block (ram,0x044b7710) */
/* WARNING: Removing unreachable block (ram,0x044b7724) */
/* WARNING: Removing unreachable block (ram,0x044b5d98) */
/* WARNING: Removing unreachable block (ram,0x044b45e0) */
/* WARNING: Removing unreachable block (ram,0x044b55c8) */
/* WARNING: Removing unreachable block (ram,0x044b77e4) */
/* WARNING: Removing unreachable block (ram,0x044b77f8) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__Refresh
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  long **local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  int local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e0;
  long **local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_170;
  long *local_168;
  undefined8 local_160;
  ulong local_158;
  uint local_150;
  undefined4 uStack_14c;
  long local_148;
  long *local_140;
  long local_138;
  long local_130;
  long *local_128;
  long *local_120;
  long **pplStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long **local_a0;
  undefined8 uStack_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((DAT_09518232 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55d8);
    FUN_03f5c2a4(&DAT_091c5330);
    FUN_03f5c2a4(&DAT_0919de20);
    FUN_03f5c2a4(&DAT_0919e400);
    FUN_03f5c2a4(&DAT_0919de28);
    FUN_03f5c2a4(&DAT_0919d918);
    FUN_03f5c2a4(&DAT_0919e410);
    FUN_03f5c2a4(&DAT_0919e418);
    FUN_03f5c2a4(&DAT_0919e578);
    FUN_03f5c2a4(&DAT_0919e468);
    FUN_03f5c2a4(&DAT_0919e5a8);
    FUN_03f5c2a4(&DAT_0919de30);
    FUN_03f5c2a4(&DAT_0919e470);
    FUN_03f5c2a4(&DAT_0919de38);
    FUN_03f5c2a4(&DAT_0919e5b0);
    FUN_03f5c2a4(&DAT_0919d920);
    FUN_03f5c2a4(&DAT_091a0038);
    FUN_03f5c2a4(&DAT_0919e420);
    FUN_03f5c2a4(&DAT_0919e428);
    FUN_03f5c2a4(&DAT_0919e588);
    FUN_03f5c2a4(&DAT_0919e590);
    FUN_03f5c2a4(&DAT_0919e430);
    FUN_03f5c2a4(&DAT_0919e478);
    FUN_03f5c2a4(&DAT_0919e5b8);
    FUN_03f5c2a4(&DAT_091c9258);
    FUN_03f5c2a4(&DAT_091c9428);
    FUN_03f5c2a4(&DAT_091c9458);
    FUN_03f5c2a4(&DAT_091c9c70);
    FUN_03f5c2a4(&DAT_091c9c80);
    FUN_03f5c2a4(&DAT_091c9c90);
    FUN_03f5c2a4(&DAT_091c9dd0);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091ca378);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091cb420);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091a5ff0);
    FUN_03f5c2a4(&DAT_091a62e8);
    FUN_03f5c2a4(&DAT_091a62f0);
    FUN_03f5c2a4(&DAT_091a5ff8);
    FUN_03f5c2a4(&DAT_091a62f8);
    FUN_03f5c2a4(&DAT_091a6000);
    FUN_03f5c2a4(&DAT_09178698);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_09179428);
    FUN_03f5c2a4(&DAT_091786b0);
    FUN_03f5c2a4(&DAT_091786f8);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_09178660);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_09179688);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a8328);
    FUN_03f5c2a4(&DAT_091a8300);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a400);
    FUN_03f5c2a4(&DAT_0917a448);
    FUN_03f5c2a4(&DAT_0917a470);
    FUN_03f5c2a4(&DAT_0917a440);
    FUN_03f5c2a4(&DAT_0917a468);
    FUN_03f5c2a4(&DAT_0917aae8);
    FUN_03f5c2a4(&DAT_0917aaa8);
    FUN_03f5c2a4(&DAT_0917ab18);
    FUN_03f5c2a4(&DAT_0917ab10);
    FUN_03f5c2a4(&DAT_0917aaf0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091a95d8);
    FUN_03f5c2a4(&DAT_091a95e0);
    FUN_03f5c2a4(&DAT_091a94c8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091ada78);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091d4b90);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6f50);
    FUN_03f5c2a4(&DAT_091e6f60);
    FUN_03f5c2a4(&DAT_091e6f68);
    FUN_03f5c2a4(&DAT_091e6f70);
    FUN_03f5c2a4(&DAT_091e6f78);
    FUN_03f5c2a4(&DAT_091e6f80);
    FUN_03f5c2a4(&DAT_091e6f88);
    FUN_03f5c2a4(&DAT_091e6f58);
    FUN_03f5c2a4(&DAT_091e6f90);
    FUN_03f5c2a4(&DAT_091e6f98);
    FUN_03f5c2a4(&DAT_091e6fa0);
    FUN_03f5c2a4(&DAT_091e6fa8);
    FUN_03f5c2a4(&DAT_0918f040);
    FUN_03f5c2a4(&DAT_091e6fe8);
    FUN_03f5c2a4(&DAT_0918f048);
    FUN_03f5c2a4(&DAT_091e6ff0);
    FUN_03f5c2a4(&DAT_0918f050);
    FUN_03f5c2a4(&DAT_091e6ff8);
    FUN_03f5c2a4(&DAT_0918f058);
    FUN_03f5c2a4(&DAT_091e7000);
    FUN_03f5c2a4(&DAT_0918f060);
    FUN_03f5c2a4(&DAT_091e7008);
    FUN_03f5c2a4(&DAT_0918f068);
    FUN_03f5c2a4(&DAT_091e7010);
    FUN_03f5c2a4(&DAT_0918f070);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_091fced0);
    FUN_03f5c2a4(&DAT_0921a028);
    FUN_03f5c2a4(&DAT_09221ea0);
    FUN_03f5c2a4(&DAT_0920c728);
    FUN_03f5c2a4(&DAT_09224100);
    DAT_09518232 = 1;
  }
  local_a8 = 0;
  local_b0 = (long *)0x0;
  local_b8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_100 = 0;
  local_f8 = (long *)0x0;
  pplStack_118 = (long **)0x0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_e8 = 0;
  local_f0 = (long *)0x0;
  local_d8 = 0;
  local_e0 = 0;
  local_130 = 0;
  local_128 = (long *)0x0;
  local_140 = (long *)0x0;
  local_138 = 0;
  local_150 = 0;
  uStack_14c = 0;
  local_148 = 0;
  uStack_98 = 0;
  local_a0 = (long **)0x0;
  local_160 = 0;
  local_158 = 0;
  local_170 = 0;
  local_168 = (long *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  lVar7 = thunk_FUN_03f9944c(DAT_0918f040);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_0___ctor(lVar7,0);
  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),param_4);
    *(long *)(param_4 + 0x3a0) = param_5;
    thunk_FUN_03f5d7b8(param_4 + 0x3a0,param_5);
    CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureCustomers(param_4,param_5);
    lVar8 = FUN_04b0462c(*(undefined8 *)(param_4 + 0x368),DAT_091cae30);
    uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
    if (lVar8 != 0) {
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar18 = 0;
        uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar18) goto LAB_044b6a00;
          CookOrder_Cooking_Implement_CookingGameplayPresentation__TryLeaveCustomer
                    (param_4,*(undefined4 *)(lVar8 + 0x20 + uVar18 * 4),param_5);
          uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
      if ((param_5 != 0) &&
         (uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240),
         *(long *)(param_5 + 0x10) != 0)) {
        uVar20 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        lVar8 = puVar14[0x1d];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          }
          uVar23 = *puVar14;
          lVar8 = thunk_FUN_03f9944c(DAT_09178748);
          FUN_05323c00(lVar8,uVar23,DAT_091e6f50,0);
          plVar9 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xe8);
          *plVar9 = lVar8;
          thunk_FUN_03f5d7b8(plVar9,lVar8);
        }
        uVar20 = FUN_04af73b4(uVar20,lVar8,DAT_091ca398);
        lVar8 = thunk_FUN_03f9944c(DAT_09179e20);
        FUN_053e1208(lVar8,uVar20,DAT_091a8300);
        uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
        if (*(long *)(param_5 + 0x10) != 0) {
          uVar20 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar14[0x1e];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar23 = *puVar14;
            lVar24 = thunk_FUN_03f9944c(DAT_09178730);
            FUN_05322d94(lVar24,uVar23,DAT_091e6f58,0);
            plVar9 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xf0);
            *plVar9 = lVar24;
            thunk_FUN_03f5d7b8(plVar9,lVar24);
          }
          uVar20 = FUN_04b0cafc(uVar20,lVar24,DAT_091cb460);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f030);
          }
          puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar14[0x1f];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f030);
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar23 = *puVar14;
            lVar24 = thunk_FUN_03f9944c(DAT_09178748);
            FUN_05323c00(lVar24,uVar23,DAT_091e6f90,0);
            plVar9 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xf8);
            *plVar9 = lVar24;
            thunk_FUN_03f5d7b8(plVar9,lVar24);
          }
          uVar20 = FUN_04af73b4(uVar20,lVar24,DAT_091ca398);
          uVar23 = thunk_FUN_03f9944c(DAT_09179e20);
          FUN_053e1208(uVar23,uVar20,DAT_091a8300);
          *(undefined8 *)(lVar7 + 0x18) = uVar23;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),uVar23);
          uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
          if ((((*(long *)(param_4 + 0x2d8) != 0) &&
               (lVar24 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120),
               uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240), lVar24 != 0)
               ) && (lVar24 = *(long *)(lVar24 + 0x18),
                    uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240),
                    lVar24 != 0)) &&
             ((lVar24 = *(long *)(lVar24 + 0x10),
              uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240), lVar24 != 0
              && (plVar9 = *(long **)(param_5 + 0x28),
                 uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240),
                 plVar9 != (long *)0x0)))) {
            lVar15 = *plVar9;
            iVar19 = *(int *)(lVar24 + 0x18);
            uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar18 != 0) {
              piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == DAT_0917a468) {
                  puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_044b4060;
                }
                uVar18 = uVar18 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar18 != 0);
            }
            puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a468,0);
LAB_044b4060:
            local_b0 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
            fVar29 = (float)(iVar19 + -1) / 2.0;
            local_1d8 = &local_b0;
            local_1e0 = 0;
            while (plVar9 = local_b0, local_b0 != (long *)0x0) {
              lVar24 = *local_b0;
              uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar18 != 0) {
                piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == DAT_09185b10) {
                    puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_044b4108;
                  }
                  uVar18 = uVar18 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185b10,0);
LAB_044b4108:
              uVar18 = (*(code *)*puVar14)(plVar9,puVar14[1]);
              plVar9 = local_b0;
              if ((uVar18 & 1) == 0) {
                if (local_b0 == (long *)0x0) goto LAB_044b45d4;
                lVar24 = *local_b0;
                uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar18 == 0) goto LAB_044b45ac;
                piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                goto LAB_044b4594;
              }
              lVar24 = thunk_FUN_03f9944c(DAT_0918f048);
              CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_1___ctor
                        (lVar24,0);
              plVar9 = local_b0;
              if (local_b0 == (long *)0x0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              lVar15 = *local_b0;
              uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar18 != 0) {
                piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == DAT_0917ab10) {
                    puVar14 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_044b4180;
                  }
                  uVar18 = uVar18 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_03f95da8(local_b0,DAT_0917ab10,0);
LAB_044b4180:
              lVar15 = (*(code *)*puVar14)(plVar9,puVar14[1]);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              plVar9 = (long *)(lVar24 + 0x10);
              *plVar9 = lVar15;
              thunk_FUN_03f5d7b8(plVar9);
              if (*plVar9 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              if (*(long *)(param_4 + 0x300) == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              uVar18 = FUN_06f54e88(*(long *)(param_4 + 0x300),*(undefined8 *)(*plVar9 + 0x10),
                                    &local_b8,DAT_0919e420);
              if ((uVar18 & 1) == 0) {
                uVar20 = *(undefined8 *)(param_4 + 0x1b8);
                uVar23 = *(undefined8 *)(param_4 + 0x130);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                local_b8 = FUN_04c35338(uVar20,uVar23,DAT_091d4b90);
                if (local_b8 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                lVar15 = UnityEngine_Component__get_gameObject(local_b8,0);
                if (lVar15 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                UnityEngine_GameObject__SetActive(lVar15,1,0);
                if (*plVar9 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                if (*(long *)(param_4 + 0x300) == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                FUN_06f533d0(*(long *)(param_4 + 0x300),*(undefined8 *)(*plVar9 + 0x10),local_b8,
                             DAT_0919e400);
                if (local_b8 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                lVar15 = UnityEngine_Component__get_transform(local_b8,0);
                lVar16 = *plVar9;
                if (lVar16 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                if (lVar15 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                UnityEngine_Transform__set_localPosition
                          (*(float *)(param_4 + 0x2a4) * ((float)*(int *)(lVar16 + 0x18) - fVar29),
                           *(float *)(param_4 + 0x2ac) -
                           *(float *)(param_4 + 0x2a8) * (float)*(int *)(lVar16 + 0x1c),0,lVar15,0);
              }
              lVar15 = *plVar9;
              if (lVar15 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              if (*(long *)(param_4 + 0x390) == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              param_3 = 0;
              FUN_06f56b00(*(float *)(param_4 + 0x2a4) * ((float)*(int *)(lVar15 + 0x18) - fVar29),
                           *(float *)(param_4 + 0x2ac) -
                           *(float *)(param_4 + 0x2a8) * (float)*(int *)(lVar15 + 0x1c),
                           *(long *)(param_4 + 0x390),*(undefined8 *)(lVar15 + 0x10),DAT_0919e5b8);
              if (local_b8 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              if (*(long *)(local_b8 + 0x88) != 0) {
                if (*plVar9 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                if (*(int *)(*plVar9 + 0x34) < *(int *)(*(long *)(local_b8 + 0x88) + 0x34)) {
                  lVar15 = UnityEngine_Component__get_transform(local_b8,0);
                  if (lVar15 == 0) {
                    uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  UnityEngine_Transform__get_position(lVar15,0);
                  CookOrder_Cooking_Implement_CookingFeedback__Particle(DAT_091fced0,0,0);
                  if (local_b8 == 0) {
                    uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                }
              }
              CookOrder_Cooking_Implement_CookingQueueTile__Bind
                        (local_b8,*(undefined8 *)(param_4 + 0x2d8),*plVar9,
                         *(undefined8 *)(param_4 + 0x2e0),0);
              lVar15 = local_b8;
              if (*(long *)(param_5 + 0x10) == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              uVar23 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
              uVar20 = thunk_FUN_03f9944c(DAT_09178730);
              FUN_05322d94(uVar20,lVar24,DAT_091e6fe8,0);
              uVar4 = FUN_04ab6f28(uVar23,uVar20,DAT_091c9458);
              if (lVar15 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              CookOrder_Cooking_Implement_CookingQueueTile__SetConsumed(lVar15,uVar4 & 1,0);
              CookOrder_Cooking_Implement_CookingGameplayPresentation__DrawQueueKey
                        (param_4,*plVar9,local_b8);
              if (local_b8 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              lVar24 = UnityEngine_Component__get_gameObject(local_b8,0);
              if (*plVar9 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              if (*(long *)(param_4 + 0x58) == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              uVar18 = FUN_053e1824(*(long *)(param_4 + 0x58),*(undefined8 *)(*plVar9 + 0x10),
                                    DAT_091a8318);
              if (((uVar18 & 1) == 0) && (*(char *)(param_4 + 0x2b4) == '\0')) {
                if (*plVar9 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                }
                else {
                  bVar12 = *(int *)(*plVar9 + 0x1c) < *(int *)(param_4 + 0x228);
                  if (lVar24 != 0) goto LAB_044b4418;
LAB_044b453c:
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                }
                goto LAB_044b7980;
              }
              bVar12 = true;
              if (lVar24 == 0) goto LAB_044b453c;
LAB_044b4418:
              UnityEngine_GameObject__SetActive(lVar24,bVar12,0);
              if (*plVar9 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              local_c0 = *(undefined8 *)(*plVar9 + 0x10);
              lVar24 = *(long *)(param_4 + 0x2f0);
              uVar20 = System_Int64__ToString(&local_c0,0);
              local_248 = 0;
              uStack_244 = 0;
              uStack_240._0_4_ = 0;
              uStack_240._4_4_ = 0;
              uStack_238 = 0;
              uStack_234 = 0;
              CookingGraph_Execution_CookingEndpoint___ctor(&local_248,0,uVar20,0,0,0);
              if (local_b8 == 0) {
                uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              uVar20 = *(undefined8 *)(local_b8 + 0x50);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar18 = UnityEngine_Object__op_Implicit(uVar20,0);
              if ((uVar18 & 1) == 0) {
                uStack_1a8 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                local_1b0 = CONCAT44(uStack_244,local_248);
                local_1a0 = CONCAT44(uStack_234,uStack_238);
                if (local_b8 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                uVar20 = UnityEngine_Component__get_transform(local_b8,0);
                puVar14 = &local_1b0;
              }
              else {
                uStack_188 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                local_190 = CONCAT44(uStack_244,local_248);
                local_180 = CONCAT44(uStack_234,uStack_238);
                if (local_b8 == 0) {
                  uStack_240 = (long **)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                uVar20 = *(undefined8 *)(local_b8 + 0x50);
                puVar14 = &local_190;
              }
              uStack_1c8 = puVar14[1];
              local_1d0 = *puVar14;
              local_1c0 = puVar14[2];
              if (lVar24 == 0) goto LAB_044b453c;
              local_200 = local_1d0;
              uStack_1f8 = uStack_1c8;
              local_1f0 = local_1c0;
              CookOrder_Cooking_Implement_CookingSceneBindings__BindEndpoint
                        (lVar24,&local_200,uVar20,0);
            }
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
        }
      }
    }
  }
  goto LAB_044b6944;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar21 = piVar21 + 4;
    if (uVar18 == 0) break;
LAB_044b4594:
    if (*(long *)(piVar21 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_044b45c8;
    }
  }
LAB_044b45ac:
  puVar14 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185a58,0);
LAB_044b45c8:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_044b45d4:
  uVar20 = *(undefined8 *)(param_5 + 0x28);
  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
  lVar24 = puVar14[0x20];
  if (lVar24 == 0) {
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    }
    uVar23 = *puVar14;
    lVar24 = thunk_FUN_03f9944c(DAT_091786f8);
    FUN_05323c00(lVar24,uVar23,DAT_091e6f98,0);
    lVar15 = *(long *)(DAT_0918f030 + 0xb8);
    *(long *)(lVar15 + 0x100) = lVar24;
    thunk_FUN_03f5d7b8(lVar15 + 0x100,lVar24);
  }
  uVar20 = FUN_04af73b4(uVar20,lVar24,DAT_091ca378);
  lVar24 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1208(lVar24,uVar20,DAT_091a8300);
  if (*(long *)(param_4 + 0x300) != 0) {
    uVar20 = FUN_06f53078(*(long *)(param_4 + 0x300),DAT_0919e430);
    lVar15 = FUN_04b0473c(uVar20,DAT_091cae38);
    if (lVar15 != 0) {
      if (0 < *(int *)(lVar15 + 0x18)) {
        uVar18 = 0;
        do {
          lVar16 = thunk_FUN_03f9944c(DAT_0918f050);
          CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_2___ctor
                    (lVar16,0);
          if (lVar16 == 0) goto LAB_044b6944;
          *(long *)(lVar16 + 0x18) = lVar7;
          thunk_FUN_03f5d7b8((long *)(lVar16 + 0x18),lVar7);
          if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_044b6a00;
          uVar20 = *(undefined8 *)(lVar15 + 0x20 + uVar18 * 8);
          puVar14 = (undefined8 *)(lVar16 + 0x10);
          *puVar14 = uVar20;
          if (lVar24 == 0) goto LAB_044b6944;
          uVar13 = FUN_053e1824(lVar24,uVar20,DAT_091a8318);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(param_5 + 0x10) == 0) goto LAB_044b6944;
            uVar23 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
            uVar20 = thunk_FUN_03f9944c(DAT_09178730);
            FUN_05322d94(uVar20,lVar16,DAT_091e6ff0,0);
            uVar13 = FUN_04ab6f28(uVar23,uVar20,DAT_091c9458);
            if ((uVar13 & 1) == 0) {
              CookOrder_Cooking_Implement_CookingGameplayPresentation__ReleaseQueueKey
                        (param_4,*puVar14,param_5);
              if (*(long *)(param_4 + 0x300) == 0) goto LAB_044b6944;
              lVar16 = FUN_06f53330(*(long *)(param_4 + 0x300),*puVar14,DAT_0919e428);
              if (lVar16 == 0) goto LAB_044b6944;
              uVar20 = UnityEngine_Component__get_gameObject(lVar16,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              UnityEngine_Object__Destroy(uVar20,0);
              if (*(long *)(param_4 + 0x300) == 0) goto LAB_044b6944;
              FUN_06f54860(*(long *)(param_4 + 0x300),*puVar14,DAT_0919e418);
              if (*(long *)(param_4 + 0x390) == 0) goto LAB_044b6944;
              FUN_06f57f70(*(long *)(param_4 + 0x390),*puVar14,DAT_0919e5a8);
              lVar16 = *(long *)(param_4 + 0x2f0);
              uVar20 = System_Int64__ToString(puVar14,0);
              local_248 = 0;
              uStack_244 = 0;
              uStack_240._0_4_ = 0;
              uStack_240._4_4_ = 0;
              uStack_238 = 0;
              uStack_234 = 0;
              CookingGraph_Execution_CookingEndpoint___ctor(&local_248,0,uVar20,0,0,0);
              if (lVar16 == 0) goto LAB_044b6944;
              uStack_218 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
              local_220 = CONCAT44(uStack_244,local_248);
              local_210 = CONCAT44(uStack_234,uStack_238);
              CookOrder_Cooking_Implement_CookingSceneBindings__UnbindEndpoint(lVar16,&local_220,0);
            }
          }
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)*(int *)(lVar15 + 0x18));
      }
      if (*(long *)(param_4 + 0x300) != 0) {
        FUN_06f53808(&local_248,*(long *)(param_4 + 0x300),DAT_0919e410);
        uStack_e8 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
        local_f0 = (long *)CONCAT44(uStack_244,local_248);
        local_d8 = CONCAT44(uStack_22c,uStack_230);
        local_e0 = CONCAT44(uStack_234,uStack_238);
        local_d0 = local_228;
        uStack_240 = &local_f0;
        local_248 = 0;
        uStack_244 = 0;
        while( true ) {
          uVar18 = FUN_0726677c(&local_f0,DAT_091a62f0);
          lVar15 = local_d8;
          if ((uVar18 & 1) == 0) break;
          if (lVar24 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          uVar18 = FUN_053e1824(lVar24,local_e0,DAT_091a8318);
          if ((uVar18 & 1) == 0) {
            if (lVar15 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            CookOrder_Cooking_Implement_CookingQueueTile__SetConsumed(lVar15,1,0);
            CookOrder_Cooking_Implement_CookingQueueTile__ShowTray(lVar15,0,0);
          }
        }
        FUN_0726689c(&local_f0,DAT_091a62e8);
        if (*(long *)(param_5 + 0x10) != 0) {
          lVar24 = *(long *)(param_4 + 0x318);
          uVar20 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar15 = puVar14[0x21];
          if (lVar15 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar23 = *puVar14;
            lVar15 = thunk_FUN_03f9944c(DAT_09178748);
            FUN_05323c00(lVar15,uVar23,DAT_091e6fa0,0);
            lVar16 = *(long *)(DAT_0918f030 + 0xb8);
            *(long *)(lVar16 + 0x108) = lVar15;
            thunk_FUN_03f5d7b8(lVar16 + 0x108,lVar15);
          }
          uVar20 = FUN_04af73b4(uVar20,lVar15,DAT_091ca398);
          if (lVar24 != 0) {
            FUN_053e261c(lVar24,uVar20,DAT_091a8328);
            plVar9 = *(long **)(param_5 + 0x40);
            if (plVar9 != (long *)0x0) {
              lVar24 = *plVar9;
              uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar18 != 0) {
                piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == DAT_0917a470) {
                    puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_044b4aa0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar18 != 0);
              }
              puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a470,0);
LAB_044b4aa0:
              plVar9 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
              uStack_240 = &local_f8;
              local_248 = 0;
              uStack_244 = 0;
              while (local_f8 = plVar9, plVar9 != (long *)0x0) {
                lVar24 = *plVar9;
                uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar18 != 0) {
                  piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == DAT_09185b10) {
                      puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                      goto LAB_044b4b1c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_044b4b1c:
                uVar18 = (*(code *)*puVar14)(plVar9,puVar14[1]);
                plVar9 = local_f8;
                if ((uVar18 & 1) == 0) {
                  if (local_f8 == (long *)0x0) goto LAB_044b4cac;
                  lVar24 = *local_f8;
                  uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                  if (uVar18 == 0) goto LAB_044b4c84;
                  piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  goto LAB_044b4c6c;
                }
                if (local_f8 == (long *)0x0) {
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                lVar24 = *local_f8;
                uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar18 != 0) {
                  piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == DAT_0917ab18) {
                      puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                      goto LAB_044b4b80;
                    }
                    uVar18 = uVar18 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar18 != 0);
                }
                puVar14 = (undefined8 *)FUN_03f95da8(local_f8,DAT_0917ab18,0);
LAB_044b4b80:
                lVar24 = (*(code *)*puVar14)(plVar9,puVar14[1]);
                if (lVar24 == 0) {
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                lVar15 = *(long *)(param_4 + 0x1c0);
                if (lVar15 == 0) {
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                uVar4 = *(uint *)(lVar24 + 0x10);
                plVar9 = local_f8;
                if ((int)uVar4 < (int)*(uint *)(lVar15 + 0x18)) {
                  if (*(uint *)(lVar15 + 0x18) <= uVar4) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    goto LAB_044b7980;
                  }
                  uVar20 = *(undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar18 = UnityEngine_Object__op_Implicit(uVar20,0);
                  plVar9 = local_f8;
                  if ((uVar18 & 1) != 0) {
                    lVar15 = *(long *)(param_4 + 0x1c0);
                    if (lVar15 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar24 + 0x10)) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      goto LAB_044b7980;
                    }
                    lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(lVar24 + 0x10) * 8 + 0x20);
                    if (lVar15 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    CookOrder_Cooking_Implement_CookingToolPresentation__Render
                              (lVar15,lVar24,*(undefined8 *)(param_4 + 0x2e0),0);
                    plVar9 = local_f8;
                  }
                }
              }
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
          }
        }
      }
    }
  }
  goto LAB_044b6944;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar21 = piVar21 + 4;
    if (uVar18 == 0) break;
LAB_044b4c6c:
    if (*(long *)(piVar21 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_044b4ca0;
    }
  }
LAB_044b4c84:
  puVar14 = (undefined8 *)FUN_03f95da8(local_f8,DAT_09185a58,0);
LAB_044b4ca0:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_044b4cac:
  if (*(long *)(param_4 + 0x358) != 0) {
    FUN_06ef0948(&local_248,*(long *)(param_4 + 0x358),DAT_0919d918);
    pplStack_118 = uStack_240;
    local_120 = (long *)CONCAT44(uStack_244,local_248);
    uStack_108 = CONCAT44(uStack_22c,uStack_230);
    uVar18 = CONCAT44(uStack_234,uStack_238);
    local_100 = local_228;
    uStack_240 = &local_120;
    local_248 = 0;
    uStack_244 = 0;
    local_110 = uVar18;
    while( true ) {
      uVar13 = FUN_072556b0(&local_120,DAT_091a5ff8);
      if ((uVar13 & 1) == 0) break;
      lVar24 = thunk_FUN_03f9944c(DAT_0918f058);
      CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_3___ctor
                (lVar24,0);
      if (lVar24 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_044b7980;
      }
      *(long *)(lVar24 + 0x20) = lVar7;
      thunk_FUN_03f5d7b8((long *)(lVar24 + 0x20),lVar7);
      *(undefined8 *)(lVar24 + 0x18) = uStack_108;
      *(ulong *)(lVar24 + 0x10) = local_110;
      thunk_FUN_03f5d7b8(lVar24 + 0x18,0);
      if (*(long *)(param_5 + 0x10) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_044b7980;
      }
      uVar23 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x28);
      uVar20 = thunk_FUN_03f9944c(DAT_091786b0);
      FUN_05322d94(uVar20,lVar24,DAT_091e6ff8,0);
      bVar3 = FUN_04ab6f28(uVar23,uVar20,DAT_091c9428);
      if ((bVar3 & *(char *)(param_4 + 0x3a8) != '\0') == 0) {
        if (*(long *)(lVar24 + 0x18) == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        CookOrder_Cooking_Implement_IngCellDisplay__SetDish(*(long *)(lVar24 + 0x18),bVar3 & 1,0);
      }
    }
    FUN_072557d4(&local_120,DAT_091a5ff0);
    *(undefined1 *)(param_4 + 0x3a8) = 1;
    plVar9 = *(long **)(param_5 + 0x48);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == DAT_0917a440) {
            puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_044b4e58;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a440,0);
LAB_044b4e58:
      plVar9 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
      local_1d8 = &local_128;
      local_1e0 = 0;
      while (local_128 = plVar9, plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == DAT_09185b10) {
              puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_044b4eec;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_044b4eec:
        uVar13 = (*(code *)*puVar14)(plVar9,puVar14[1]);
        plVar9 = local_128;
        if ((uVar13 & 1) == 0) {
          if (local_128 == (long *)0x0) goto LAB_044b55bc;
          lVar7 = *local_128;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 == 0) goto LAB_044b5594;
          piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_044b557c;
        }
        if (local_128 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        lVar7 = *local_128;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == DAT_0917aae8) {
              puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_044b4f50;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(local_128,DAT_0917aae8,0);
LAB_044b4f50:
        lVar7 = (*(code *)*puVar14)(plVar9,puVar14[1]);
        if (lVar7 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        if (*(long *)(param_4 + 0x358) == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        uVar13 = FUN_06ef1fe8(*(long *)(param_4 + 0x358),*(undefined4 *)(lVar7 + 0x10),&local_130,
                              DAT_0919d920);
        if ((uVar13 & 1) != 0) {
          uVar20 = *(undefined8 *)(lVar7 + 0x28);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar14[0x22];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar23 = *puVar14;
            lVar24 = thunk_FUN_03f9944c(DAT_09178698);
            FUN_05312dfc(lVar24,uVar23,DAT_091e6fa8,0);
            lVar15 = *(long *)(DAT_0918f030 + 0xb8);
            *(long *)(lVar15 + 0x110) = lVar24;
            thunk_FUN_03f5d7b8(lVar15 + 0x110,lVar24);
          }
          FUN_04ae5918(&local_248,uVar20,lVar24,DAT_091c9c80);
          uVar5 = uStack_230;
          iVar19 = local_248;
          uVar13 = CONCAT44((undefined4)uStack_240,uStack_244);
          uVar11 = CONCAT44(uStack_238,uStack_240._4_4_);
          if (*(char *)(lVar7 + 0x14) != '\0') {
            if (*(long *)(param_4 + 0xd0) == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            uVar10 = FUN_053d750c(*(long *)(param_4 + 0xd0),*(undefined4 *)(lVar7 + 0x10),
                                  DAT_091a82c0);
            if ((uVar10 & 1) != 0) {
              uVar20 = *(undefined8 *)(lVar7 + 0x28);
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              lVar24 = puVar14[0x23];
              if (lVar24 == 0) {
                if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                }
                uVar23 = *puVar14;
                lVar24 = thunk_FUN_03f9944c(DAT_09178698);
                FUN_05312dfc(lVar24,uVar23,DAT_091e6f60,0);
                lVar15 = *(long *)(DAT_0918f030 + 0xb8);
                *(long *)(lVar15 + 0x118) = lVar24;
                thunk_FUN_03f5d7b8(lVar15 + 0x118,lVar24);
              }
              FUN_04ae5918(&local_248,uVar20,lVar24,DAT_091c9c80);
              uVar13 = CONCAT44((undefined4)uStack_240,uStack_244);
              uVar11 = CONCAT44(uStack_238,uStack_240._4_4_);
              iVar19 = local_248;
              uVar5 = uStack_230;
            }
            if (*(char *)(lVar7 + 0x14) != '\0') {
              if (*(long *)(param_4 + 0xd0) == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              uVar10 = FUN_053d750c(*(long *)(param_4 + 0xd0),*(undefined4 *)(lVar7 + 0x10),
                                    DAT_091a82c0);
              lVar24 = local_130;
              if ((uVar10 & 1) == 0) {
                auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__get_Normal(0);
                if (lVar24 != 0) {
                  CookOrder_Cooking_Implement_IngCellDisplay__Apply
                            (lVar24,auVar30._0_8_,auVar30._8_8_,0);
                  goto LAB_044b5388;
                }
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
            }
          }
          lVar15 = thunk_FUN_03f9944c(DAT_0918f060);
          CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_4___ctor
                    (lVar15,0);
          lVar24 = local_130;
          if (iVar19 < 3) {
            if (iVar19 == 1) {
              auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__Blocked(0);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              CookOrder_Cooking_Implement_IngCellDisplay__Apply
                        (lVar24,auVar30._0_8_,auVar30._8_8_,0);
            }
            else if (iVar19 == 2) {
              auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__OrderLock(uVar5,0);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              CookOrder_Cooking_Implement_IngCellDisplay__Apply
                        (lVar24,auVar30._0_8_,auVar30._8_8_,0);
            }
            else {
LAB_044b5204:
              auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__get_Normal(0);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              CookOrder_Cooking_Implement_IngCellDisplay__Apply
                        (lVar24,auVar30._0_8_,auVar30._8_8_,0);
            }
          }
          else if (iVar19 == 3) {
            uVar20 = 0;
            if ((-1 < (long)uVar13) && ((uVar13 & 0xff) != 0)) {
              if (*(long *)(param_4 + 0x2e0) == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              lVar24 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x20);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              lVar24 = *(long *)(lVar24 + 0x30);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              lVar24 = *(long *)(lVar24 + 0x10);
              if (lVar24 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_044b7980;
              }
              if ((int)(uVar13 >> 0x20) < *(int *)(lVar24 + 0x18)) {
                uVar20 = FUN_057e0998(lVar24,uVar13 >> 0x20,DAT_091ada40);
              }
              else {
                uVar20 = 0;
              }
            }
            if (lVar15 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            *(undefined8 *)(lVar15 + 0x10) = uVar20;
            thunk_FUN_03f5d7b8();
            lVar24 = local_130;
            if (*(long *)(param_4 + 0x2e0) == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            uVar23 = *(undefined8 *)(*(long *)(param_4 + 0x2e0) + 0x28);
            uVar20 = thunk_FUN_03f9944c(DAT_09179428);
            FUN_05322d94(uVar20,lVar15,DAT_091e7000,0);
            lVar15 = FUN_04ae5fd0(uVar23,uVar20,DAT_091c9dd0);
            uVar20 = 0;
            if (lVar15 != 0) {
              uVar20 = *(undefined8 *)(lVar15 + 0x20);
            }
            auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__IngredientSlot
                                (uVar20,uVar5,0);
            if (lVar24 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            CookOrder_Cooking_Implement_IngCellDisplay__Apply(lVar24,auVar30._0_8_,auVar30._8_8_,0);
          }
          else {
            if (iVar19 != 4) goto LAB_044b5204;
            auVar30 = CookOrder_Cooking_Implement_IngCellOverlayStatus__ColorLock(uVar11 >> 0x20,0);
            if (lVar24 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            CookOrder_Cooking_Implement_IngCellDisplay__Apply(lVar24,auVar30._0_8_,auVar30._8_8_,0);
          }
        }
LAB_044b5388:
        if (*(int *)(lVar7 + 0x18) == 4) goto LAB_044b5498;
        if (*(long *)(param_4 + 0x348) == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        uVar13 = FUN_06ef1fe8(*(long *)(param_4 + 0x348),*(undefined4 *)(lVar7 + 0x10),&local_138,
                              DAT_0919de38);
        lVar24 = local_138;
        if ((uVar13 & 1) == 0) goto LAB_044b548c;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = UnityEngine_Object__op_Implicit(lVar24,0);
        if ((uVar13 & 1) != 0) {
          if (local_138 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          uVar20 = UnityEngine_Component__get_gameObject(local_138,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Object__Destroy(uVar20,0);
        }
        if (*(long *)(param_4 + 0x348) == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        FUN_06ef19b4(*(long *)(param_4 + 0x348),*(undefined4 *)(lVar7 + 0x10),DAT_0919de30);
        local_248 = 0;
        uStack_244 = 0;
        uStack_240._0_4_ = 0;
        uStack_240._4_4_ = 0;
        lVar24 = *(long *)(param_4 + 0x2f0);
        uStack_238 = 0;
        uStack_234 = 0;
        CookingGraph_Execution_CookingEndpoint___ctor
                  (&local_248,3,DAT_09221ea0,*(undefined4 *)(lVar7 + 0x10),0,0);
        if (lVar24 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_044b7980;
        }
        uStack_258 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
        local_260 = CONCAT44(uStack_244,local_248);
        local_250 = CONCAT44(uStack_234,uStack_238);
        CookOrder_Cooking_Implement_CookingSceneBindings__UnbindEndpoint(lVar24,&local_260,0);
LAB_044b548c:
        plVar9 = local_128;
        if (*(int *)(lVar7 + 0x18) == 4) {
LAB_044b5498:
          if (*(long *)(param_4 + 0x348) == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          uVar13 = FUN_06ef0700(*(long *)(param_4 + 0x348),*(undefined4 *)(lVar7 + 0x10),
                                DAT_0919de28);
          plVar9 = local_128;
          if ((uVar13 & 1) == 0) {
            lVar24 = *(long *)(param_4 + 0x1a0);
            if (lVar24 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar7 + 0x10)) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              goto LAB_044b7980;
            }
            uVar20 = CookOrder_Cooking_Implement_CookingGameplayPresentation__NewAnchor
                               (DAT_0920c728,
                                *(undefined8 *)
                                 (lVar24 + (long)(int)*(uint *)(lVar7 + 0x10) * 8 + 0x20));
            if (*(long *)(param_4 + 0x348) == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            FUN_06ef050c(*(long *)(param_4 + 0x348),*(undefined4 *)(lVar7 + 0x10),uVar20,
                         DAT_0919de20);
            CookOrder_Cooking_Implement_CookingGameplayPresentation__AttachBagArt(param_4,uVar20);
            plVar9 = local_128;
          }
        }
      }
      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_044b7980;
    }
  }
  goto LAB_044b6944;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar21 = piVar21 + 4;
    if (uVar13 == 0) break;
LAB_044b557c:
    if (*(long *)(piVar21 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_044b55b0;
    }
  }
LAB_044b5594:
  puVar14 = (undefined8 *)FUN_03f95da8(local_128,DAT_09185a58,0);
LAB_044b55b0:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_044b55bc:
  if ((*(long *)(param_4 + 0x2d8) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar7 != 0)) {
    iVar19 = *(int *)(lVar7 + 0x16c);
    if (iVar19 < 0) {
LAB_044b5810:
      lVar7 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1208(lVar7,lVar8,DAT_091a8300);
      if ((*(long *)(param_5 + 0x10) != 0) &&
         (plVar9 = *(long **)(*(long *)(param_5 + 0x10) + 0x28), plVar9 != (long *)0x0)) {
        lVar24 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == DAT_0917a448) {
              puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_044b5898;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a448,0);
LAB_044b5898:
        local_140 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
        local_1d8 = &local_140;
        local_1e0 = 0;
joined_r0x044b58b0:
        if (local_140 != (long *)0x0) {
LAB_044b58e8:
          plVar9 = local_140;
          lVar24 = *local_140;
          uVar13 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == DAT_09185b10) {
                puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_044b593c;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(local_140,DAT_09185b10,0);
LAB_044b593c:
          uVar13 = (*(code *)*puVar14)(plVar9,puVar14[1]);
          plVar9 = local_140;
          if ((uVar13 & 1) == 0) {
            plVar9 = *local_1d8;
            if (plVar9 == (long *)0x0) goto LAB_044b5d88;
            lVar24 = *plVar9;
            uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar18 == 0) goto LAB_044b5d60;
            piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            goto LAB_044b5d48;
          }
          if (local_140 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          lVar24 = *local_140;
          uVar13 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == DAT_0917aaf0) {
                puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_044b59a0;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(local_140,DAT_0917aaf0,0);
LAB_044b59a0:
          lVar24 = (*(code *)*puVar14)(plVar9,puVar14[1]);
          if (lVar24 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          piVar21 = (int *)(lVar24 + 0x10);
          if (*piVar21 != 0) {
            uStack_278 = *(undefined8 *)(lVar24 + 0x18);
            local_280 = *(undefined8 *)piVar21;
            local_270 = *(undefined8 *)(lVar24 + 0x20);
            uVar13 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                               (param_4,&local_280,&local_148);
            if ((uVar13 & 1) != 0) {
              plVar9 = *(long **)(lVar24 + 0x30);
              if (plVar9 != (long *)0x0) {
                iVar19 = 0;
                do {
                  lVar15 = *plVar9;
                  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar13 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == DAT_0917b328) {
                        puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_044b5a3c;
                      }
                      uVar13 = uVar13 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b328,0);
LAB_044b5a3c:
                  iVar6 = (*(code *)*puVar14)(plVar9,puVar14[1]);
                  if (iVar6 <= iVar19) goto LAB_044b5cf0;
                  plVar9 = *(long **)(lVar24 + 0x30);
                  if (plVar9 == (long *)0x0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  lVar15 = *plVar9;
                  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar13 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == DAT_0917b4c0) {
                        puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_044b5aac;
                      }
                      uVar13 = uVar13 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b4c0,0);
LAB_044b5aac:
                  (*(code *)*puVar14)(&local_248,plVar9,iVar19,puVar14[1]);
                  uStack_98 = CONCAT44(uStack_234,uStack_238);
                  local_a0 = uStack_240;
                  uVar20 = CONCAT44(uStack_244,local_248);
                  if (lVar7 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  FUN_053e230c(lVar7,uVar20,DAT_091a8308);
                  if (lVar8 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  uVar13 = FUN_053e1824(lVar8,uVar20,DAT_091a8318);
                  if ((uVar13 & 1) == 0) {
                    iVar6 = *piVar21;
                    uStack_14c = 0xffffffff;
                    if (iVar6 == 1) {
                      if (*(long *)(lVar24 + 0x18) == 0) {
                        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_044b7980;
                      }
                      uVar13 = System_String__StartsWith(*(long *)(lVar24 + 0x18),DAT_09224100,0);
                      if ((uVar13 & 1) == 0) {
LAB_044b5ba8:
                        bVar12 = true;
                      }
                      else {
                        if (*(long *)(lVar24 + 0x18) == 0) {
                          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_044b7980;
                        }
                        uVar23 = System_String__Substring(*(long *)(lVar24 + 0x18),5,0);
                        uVar13 = System_Int32__TryParse(uVar23,&uStack_14c,0);
                        if ((uVar13 & 1) == 0) goto LAB_044b5ba8;
                        if (*(long *)(param_4 + 800) == 0) {
                          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_044b7980;
                        }
                        FUN_06f4c418(*(long *)(param_4 + 800),uVar20,uStack_14c,DAT_0919e478);
                        if (*(long *)(param_4 + 0xb0) == 0) {
                          if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_044b7980;
                        }
                        FUN_06f4c418(*(long *)(param_4 + 0xb0),uVar20,*(undefined4 *)(lVar24 + 0x20)
                                     ,DAT_0919e478);
                        bVar12 = false;
                      }
                      iVar6 = *piVar21;
                    }
                    else {
                      bVar12 = true;
                    }
                    if (iVar6 != 3) {
                      if (local_148 == 0) {
                        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_044b7980;
                      }
                      UnityEngine_Transform__get_position(local_148,0);
                      uStack_288 = uStack_98;
                      local_290 = local_a0;
                      local_298 = uVar20;
                      lVar15 = CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureUnit
                                         (param_4,&local_298);
                      if (bVar12) {
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar13 = UnityEngine_Object__op_Implicit(lVar15,0);
                        fVar28 = (float)param_3;
                        fVar29 = (float)uVar18;
                        if ((uVar13 & 1) != 0) {
                          CookOrder_Cooking_Implement_CookingGameplayPresentation__RestoreHeldSorting
                                    (param_4,uVar20);
                          if (lVar15 == 0) {
                            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_044b7980;
                          }
                          lVar16 = UnityEngine_Component__get_gameObject(lVar15,0);
                          if (lVar16 == 0) {
                            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_044b7980;
                          }
                          UnityEngine_GameObject__SetActive(lVar16,1,0);
                          if (local_148 == 0) {
                            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_044b7980;
                          }
                          fVar27 = (float)UnityEngine_Transform__get_position(local_148,0);
                          uVar18 = (ulong)(uint)((float)iVar19 * 0.1 + fVar29);
                          param_3 = (ulong)(uint)((float)-iVar19 * 0.01 + fVar28);
                          UnityEngine_Transform__set_position(fVar27 + 0.0,uVar18,param_3,lVar15,0);
                          if (*(long *)(param_4 + 0xb8) == 0) {
                            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_044b7980;
                          }
                          uVar13 = FUN_06f58518(*(long *)(param_4 + 0xb8),uVar20,&local_158,
                                                DAT_0919e5b0);
                          if ((uVar13 & 1) != 0) {
                            uVar18 = local_158 >> 0x20;
                            param_3 = (ulong)local_150;
                            UnityEngine_Transform__set_localScale(local_158 & 0xffffffff,lVar15,0);
                          }
                        }
                      }
                      else {
                        CookOrder_Cooking_Implement_CookingGameplayPresentation__PlaceHeldOnTool
                                  (param_4,uVar20,lVar15,uStack_14c,*(undefined4 *)(lVar24 + 0x20));
                      }
                    }
                  }
                  plVar9 = *(long **)(lVar24 + 0x30);
                  iVar19 = iVar19 + 1;
                  if (plVar9 == (long *)0x0) break;
                } while( true );
              }
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
          }
          goto joined_r0x044b58b0;
        }
LAB_044b5d00:
        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_044b7980;
      }
    }
    else if (*(long *)(param_4 + 0x348) != 0) {
      uVar13 = FUN_06ef1fe8(*(long *)(param_4 + 0x348),iVar19,&local_a8,DAT_0919de38);
      if ((uVar13 & 1) == 0) goto LAB_044b5810;
      if (local_a8 != 0) {
        lVar7 = FUN_04a6a4f8(local_a8,1,DAT_091c55d8);
        if (*(long *)(param_5 + 0x10) != 0) {
          uVar20 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x28);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar14[0x24];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar23 = *puVar14;
            lVar24 = thunk_FUN_03f9944c(DAT_091786b0);
            FUN_05322d94(lVar24,uVar23,DAT_091e6f68,0);
            lVar15 = *(long *)(DAT_0918f030 + 0xb8);
            *(long *)(lVar15 + 0x120) = lVar24;
            thunk_FUN_03f5d7b8(lVar15 + 0x120,lVar24);
          }
          lVar24 = FUN_04ae5fd0(uVar20,lVar24,DAT_091c9c90);
          if (*(long *)(param_5 + 0x10) != 0) {
            uVar20 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x30);
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            lVar15 = puVar14[0x25];
            if (lVar15 == 0) {
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              }
              uVar23 = *puVar14;
              lVar15 = thunk_FUN_03f9944c(DAT_09178730);
              FUN_05322d94(lVar15,uVar23,DAT_091e6f70,0);
              lVar16 = *(long *)(DAT_0918f030 + 0xb8);
              *(long *)(lVar16 + 0x128) = lVar15;
              thunk_FUN_03f5d7b8(lVar16 + 0x128,lVar15);
            }
            uVar13 = FUN_04ab6f28(uVar20,lVar15,DAT_091c9458);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar11 = UnityEngine_Object__op_Implicit(lVar7,0);
            if ((uVar11 & 1) == 0) goto LAB_044b5810;
            uVar20 = *(undefined8 *)(param_4 + 0x2e0);
            if ((uVar13 & 1) == 0) {
              if ((*(long *)(param_4 + 0x2d8) == 0) ||
                 (lVar15 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar15 == 0))
              goto LAB_044b6944;
              uVar23 = CookingGraph_CookingLevelSimulation__get_BagPreviewIngredient(lVar15,0);
            }
            else {
              uVar23 = 0;
            }
            if (lVar24 == 0) {
              uVar5 = 0;
            }
            else {
              if (*(long *)(lVar24 + 0x30) == 0) goto LAB_044b6944;
              uVar5 = FUN_039afee4(0,DAT_0917b328);
            }
            if (lVar7 != 0) {
              CookOrder_Cooking_Implement_CookingSaveMeBagView__Render(lVar7,uVar20,uVar23,uVar5,0);
              goto LAB_044b5810;
            }
          }
        }
      }
    }
  }
  goto LAB_044b6944;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar21 = piVar21 + 4;
    if (uVar18 == 0) break;
LAB_044b5d48:
    if (*(long *)(piVar21 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_044b5d7c;
    }
  }
LAB_044b5d60:
  puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_044b5d7c:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_044b5d88:
  if (local_1e0 != 0) {
    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    goto LAB_044b7980;
  }
  CookOrder_Cooking_Implement_CookingGameplayPresentation__RefreshWaitingTransfers(param_4,param_5);
  if (*(long *)(param_4 + 0x310) != 0) {
    uVar20 = FUN_06f53078(*(long *)(param_4 + 0x310),DAT_0919e590);
    lVar24 = FUN_04b0473c(uVar20,DAT_091cae38);
    if (lVar24 != 0) {
      if (0 < (int)*(ulong *)(lVar24 + 0x18)) {
        uVar18 = 0;
        uVar13 = *(ulong *)(lVar24 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar18) goto LAB_044b6a00;
          if (*(long *)(param_4 + 800) == 0) goto LAB_044b6944;
          uVar20 = *(undefined8 *)(lVar24 + 0x20 + uVar18 * 8);
          uVar13 = FUN_06f4de70(*(long *)(param_4 + 800),uVar20,(long)&local_160 + 4,DAT_0919e470);
          if ((uVar13 & 1) == 0) {
LAB_044b5fac:
            if (lVar7 == 0) goto LAB_044b6944;
          }
          else {
            lVar15 = *(long *)(param_4 + 0x1c0);
            if (lVar15 == 0) goto LAB_044b6944;
            if (*(uint *)(lVar15 + 0x18) <= local_160._4_4_) goto LAB_044b6a00;
            uVar23 = *(undefined8 *)(lVar15 + (long)(int)local_160._4_4_ * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar13 = UnityEngine_Object__op_Implicit(uVar23,0);
            if ((uVar13 & 1) == 0) goto LAB_044b5fac;
            lVar15 = *(long *)(param_4 + 0x1c0);
            if (lVar15 == 0) goto LAB_044b6944;
            if (*(uint *)(lVar15 + 0x18) <= local_160._4_4_) goto LAB_044b6a00;
            lVar15 = *(long *)(lVar15 + (long)(int)local_160._4_4_ * 8 + 0x20);
            if (lVar15 == 0) goto LAB_044b6944;
            uVar13 = CookOrder_Cooking_Implement_CookingToolPresentation__get_IsCooking(lVar15,0);
            if ((uVar13 & 1) == 0) goto LAB_044b5fac;
            if (lVar8 == 0) goto LAB_044b6944;
            uVar13 = FUN_053e1824(lVar8,uVar20,DAT_091a8318);
            if ((uVar13 & 1) != 0) goto LAB_044b5fac;
            if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b6944;
            uVar23 = FUN_06f53330(*(long *)(param_4 + 0x310),uVar20,DAT_0919e588);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar13 = UnityEngine_Object__op_Implicit(uVar23,0);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b6944;
              uVar23 = FUN_06f53330(*(long *)(param_4 + 0x310),uVar20,DAT_0919e588);
              if (*(long *)(param_4 + 0xb0) == 0) goto LAB_044b6944;
              uVar2 = local_160._4_4_;
              uVar13 = FUN_06f4de70(*(long *)(param_4 + 0xb0),uVar20,&local_160,DAT_0919e470);
              uVar5 = (undefined4)local_160;
              if ((uVar13 & 1) == 0) {
                uVar5 = 0;
              }
              CookOrder_Cooking_Implement_CookingGameplayPresentation__PlaceHeldOnTool
                        (param_4,uVar20,uVar23,uVar2,uVar5);
            }
            lVar15 = *(long *)(param_4 + 0x1c0);
            if (lVar15 == 0) goto LAB_044b6944;
            if (*(uint *)(lVar15 + 0x18) <= local_160._4_4_) goto LAB_044b6a00;
            lVar15 = *(long *)(lVar15 + (long)(int)local_160._4_4_ * 8 + 0x20);
            if (lVar15 == 0) goto LAB_044b6944;
            uVar13 = CookOrder_Cooking_Implement_CookingToolPresentation__get_RepresentsIngredient
                               (lVar15,0);
            if ((uVar13 & 1) != 0) goto LAB_044b5fac;
            if (lVar7 == 0) goto LAB_044b6944;
            FUN_053e230c(lVar7,uVar20,DAT_091a8308);
          }
          uVar13 = FUN_053e1824(lVar7,uVar20,DAT_091a8318);
          if ((uVar13 & 1) == 0) {
            CookOrder_Cooking_Implement_CookingGameplayPresentation__RestoreHeldSorting
                      (param_4,uVar20);
            if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b6944;
            uVar23 = FUN_06f53330(*(long *)(param_4 + 0x310),uVar20,DAT_0919e588);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar13 = UnityEngine_Object__op_Implicit(uVar23,0);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b6944;
              lVar15 = FUN_06f53330(*(long *)(param_4 + 0x310),uVar20,DAT_0919e588);
              if (lVar15 == 0) goto LAB_044b6944;
              uVar23 = UnityEngine_Component__get_gameObject(lVar15,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              UnityEngine_Object__Destroy(uVar23,0);
            }
            if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b6944;
            FUN_06f54860(*(long *)(param_4 + 0x310),uVar20,DAT_0919e578);
            if (*(long *)(param_4 + 800) == 0) goto LAB_044b6944;
            FUN_06f4d858(*(long *)(param_4 + 800),uVar20,DAT_0919e468);
            if (*(long *)(param_4 + 0xb0) == 0) goto LAB_044b6944;
            FUN_06f4d858(*(long *)(param_4 + 0xb0),uVar20,DAT_0919e468);
            if (*(long *)(param_4 + 0xb8) == 0) goto LAB_044b6944;
            FUN_06f57f70(*(long *)(param_4 + 0xb8),uVar20,DAT_0919e5a8);
            if (*(long *)(param_4 + 0x2f0) == 0) goto LAB_044b6944;
            CookOrder_Cooking_Implement_CookingSceneBindings__UnbindUnit
                      (*(long *)(param_4 + 0x2f0),uVar20,0);
          }
          uVar13 = (ulong)*(uint *)(lVar24 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)(int)*(uint *)(lVar24 + 0x18));
      }
      if ((*(long *)(param_5 + 0x10) != 0) &&
         (plVar9 = *(long **)(*(long *)(param_5 + 0x10) + 0x38), plVar9 != (long *)0x0)) {
        lVar7 = *plVar9;
        uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar18 != 0) {
          piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == DAT_0917a400) {
              puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_044b6178;
            }
            uVar18 = uVar18 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar18 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a400,0);
LAB_044b6178:
        local_168 = (long *)(*(code *)*puVar14)(plVar9,puVar14[1]);
        uStack_240 = &local_168;
        local_248 = 0;
        uStack_244 = 0;
        while (plVar9 = local_168, local_168 != (long *)0x0) {
          lVar7 = *local_168;
          uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar18 != 0) {
            piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == DAT_09185b10) {
                puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_044b620c;
              }
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar18 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185b10,0);
LAB_044b620c:
          uVar18 = (*(code *)*puVar14)(plVar9,puVar14[1]);
          plVar9 = local_168;
          if ((uVar18 & 1) == 0) {
            if (local_168 == (long *)0x0) goto LAB_044b6880;
            lVar7 = *local_168;
            uVar18 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar18 == 0) goto LAB_044b6858;
            piVar21 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_044b6840;
          }
          lVar7 = thunk_FUN_03f9944c(DAT_0918f068);
          CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_5___ctor
                    (lVar7,0);
          plVar9 = local_168;
          if (local_168 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          lVar8 = *local_168;
          uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar18 != 0) {
            piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == DAT_0917aaa8) {
                puVar14 = (undefined8 *)(lVar8 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_044b6284;
              }
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar18 != 0);
          }
          puVar14 = (undefined8 *)FUN_03f95da8(local_168,DAT_0917aaa8,0);
LAB_044b6284:
          lVar8 = (*(code *)*puVar14)(plVar9,puVar14[1]);
          if (lVar7 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          plVar9 = (long *)(lVar7 + 0x10);
          *plVar9 = lVar8;
          thunk_FUN_03f5d7b8(plVar9);
          lVar8 = thunk_FUN_03f9944c(DAT_0918f070);
          CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass173_6___ctor
                    (lVar8,0);
          lVar24 = *plVar9;
          if (lVar24 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          uStack_2a8 = *(undefined8 *)(lVar24 + 0x18);
          local_2b0 = *(undefined8 *)(lVar24 + 0x10);
          local_2a0 = *(undefined8 *)(lVar24 + 0x20);
          uVar20 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_2b0);
          if (*(long *)(param_4 + 0x408) == 0) {
            if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_044b7980;
          }
          uVar18 = FUN_053ebc3c(*(long *)(param_4 + 0x408),uVar20,DAT_091a86c8);
          if ((uVar18 & 1) == 0) {
            if (*(long *)(param_4 + 0x328) == 0) {
              if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              goto LAB_044b7980;
            }
            uVar18 = FUN_06fd9fbc(*(long *)(param_4 + 0x328),uVar20,&local_170,DAT_091a0038);
            lVar24 = local_170;
            if ((uVar18 & 1) != 0) {
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar18 = UnityEngine_Object__op_Implicit(lVar24,0);
              if ((uVar18 & 1) != 0) {
                if (*(long *)(param_4 + 0x338) == 0) {
                  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  goto LAB_044b7980;
                }
                uVar18 = FUN_053ebc3c(*(long *)(param_4 + 0x338),uVar20,DAT_091a86c8);
                if ((uVar18 & 1) == 0) {
                  if (*plVar9 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  if (DAT_0921a028 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  lVar24 = *(long *)(*plVar9 + 0x18);
                  if (lVar24 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  uVar20 = System_String__Substring(lVar24,*(undefined4 *)(DAT_0921a028 + 0x10),0);
                  uVar5 = System_Int32__Parse(uVar20,0);
                  if (lVar8 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  *(undefined4 *)(lVar8 + 0x10) = uVar5;
                  uVar23 = *(undefined8 *)(param_5 + 0x30);
                  uVar20 = thunk_FUN_03f9944c(DAT_09178660);
                  FUN_05322d94(uVar20,lVar8,DAT_091e7010,0);
                  lVar8 = FUN_04ae5fd0(uVar23,uVar20,DAT_091c9c70);
                  if (*plVar9 == 0) {
                    if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    goto LAB_044b7980;
                  }
                  uVar23 = *(undefined8 *)(*plVar9 + 0x28);
                  uVar20 = thunk_FUN_03f9944c(DAT_09179688);
                  FUN_0533040c(uVar20,lVar7,DAT_091e7008,0);
                  uVar20 = FUN_04b0ce00(uVar23,uVar20,DAT_091cb420);
                  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                  lVar7 = puVar14[0x26];
                  if (lVar7 == 0) {
                    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                    }
                    uVar23 = *puVar14;
                    lVar7 = thunk_FUN_03f9944c(DAT_09178620);
                    FUN_053239c8(lVar7,uVar23,DAT_091e6f78,0);
                    lVar24 = *(long *)(DAT_0918f030 + 0xb8);
                    *(long *)(lVar24 + 0x130) = lVar7;
                    thunk_FUN_03f5d7b8(lVar24 + 0x130,lVar7);
                  }
                  uVar20 = FUN_04af6d6c(uVar20,lVar7,DAT_091ca340);
                  uVar20 = FUN_04b0462c(uVar20,DAT_091cae30);
                  if (lVar8 != 0) {
                    if (local_170 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    lVar7 = FUN_04a6a14c(local_170,DAT_091c5330);
                    if (*plVar9 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    plVar25 = *(long **)(lVar8 + 0x48);
                    if (plVar25 == (long *)0x0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    uVar23 = *(undefined8 *)(param_4 + 0x2e0);
                    lVar24 = *plVar25;
                    uVar5 = *(undefined4 *)(*plVar9 + 0x20);
                    uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == DAT_0917b510) {
                          puVar14 = (undefined8 *)(lVar24 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_044b657c;
                        }
                        uVar18 = uVar18 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar14 = (undefined8 *)FUN_03f95da8(plVar25,DAT_0917b510,0);
LAB_044b657c:
                    uVar5 = (*(code *)*puVar14)(plVar25,uVar5,puVar14[1]);
                    if (*plVar9 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    uVar26 = *(undefined8 *)(*plVar9 + 0x30);
                    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                    lVar24 = puVar14[0x27];
                    if (lVar24 == 0) {
                      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                      }
                      uVar22 = *puVar14;
                      lVar24 = thunk_FUN_03f9944c(DAT_09178468);
                      FUN_05311eac(lVar24,uVar22,DAT_091e6f80,0);
                      lVar15 = *(long *)(DAT_0918f030 + 0xb8);
                      *(long *)(lVar15 + 0x138) = lVar24;
                      thunk_FUN_03f5d7b8(lVar15 + 0x138,lVar24);
                    }
                    uVar4 = FUN_04ab20f8(uVar26,lVar24,DAT_091c9258);
                    if (*plVar9 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    uVar26 = *(undefined8 *)(*plVar9 + 0x28);
                    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                    lVar24 = puVar14[0x28];
                    if (lVar24 == 0) {
                      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar14 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                      }
                      uVar22 = *puVar14;
                      lVar24 = thunk_FUN_03f9944c(DAT_09178620);
                      FUN_053239c8(lVar24,uVar22,DAT_091e6f88,0);
                      lVar15 = *(long *)(DAT_0918f030 + 0xb8);
                      *(long *)(lVar15 + 0x140) = lVar24;
                      thunk_FUN_03f5d7b8(lVar15 + 0x140,lVar24);
                    }
                    uVar26 = FUN_04af6d6c(uVar26,lVar24,DAT_091ca340);
                    uVar26 = FUN_04b0462c(uVar26,DAT_091cae30);
                    if (lVar7 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    CookOrder_Cooking_Implement_CookingDishRenderer__Draw
                              (lVar7,uVar23,uVar5,uVar20,0,0,uVar4 & 1,uVar26,0);
                    if (*plVar9 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    plVar25 = *(long **)(lVar8 + 0x48);
                    if (plVar25 == (long *)0x0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    lVar8 = *plVar25;
                    uVar5 = *(undefined4 *)(*plVar9 + 0x20);
                    uVar20 = *(undefined8 *)(param_4 + 0x2e0);
                    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == DAT_0917b510) {
                          puVar14 = (undefined8 *)(lVar8 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_044b67cc;
                        }
                        uVar18 = uVar18 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar14 = (undefined8 *)FUN_03f95da8(plVar25,DAT_0917b510,0);
LAB_044b67cc:
                    uVar5 = (*(code *)*puVar14)(plVar25,uVar5,puVar14[1]);
                    if (*(long *)(param_4 + 0x2d8) == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    lVar8 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x128);
                    if (lVar8 == 0) {
                      if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_044b7980;
                    }
                    CookOrder_Cooking_Implement_CookingDishRenderer__RenderMerge
                              (lVar7,uVar20,uVar5,*plVar9,*(undefined1 *)(lVar8 + 0x28),0);
                  }
                }
              }
            }
          }
        }
        if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_044b7980;
      }
    }
  }
  goto LAB_044b6944;
LAB_044b6a00:
  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_044b7980;
LAB_044b5cf0:
  if (local_140 == (long *)0x0) goto LAB_044b5d00;
  goto LAB_044b58e8;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar21 = piVar21 + 4;
    if (uVar18 == 0) break;
LAB_044b6840:
    if (*(long *)(piVar21 + -2) == DAT_09185a58) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_044b6874;
    }
  }
LAB_044b6858:
  puVar14 = (undefined8 *)FUN_03f95da8(local_168,DAT_09185a58,0);
LAB_044b6874:
  (*(code *)*puVar14)(plVar9,puVar14[1]);
LAB_044b6880:
  lVar7 = *(long *)(param_4 + 0x360);
  if (lVar7 != 0) {
    iVar19 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar19) {
        CookOrder_Cooking_Implement_CookingGameplayPresentation__DrawQueueConnections(param_4);
        if (*(long *)(lVar1 + 0x28) == local_88) {
          return;
        }
        goto LAB_044b7980;
      }
      uVar20 = FUN_057e0998(lVar7,iVar19,DAT_091acd88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar18 = UnityEngine_Object__op_Implicit(uVar20,0);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(param_4 + 0x360) == 0) break;
        lVar7 = FUN_057e0998(*(long *)(param_4 + 0x360),iVar19,DAT_091acd88);
        if (*(long *)(param_4 + 0x100) == 0) break;
        uVar4 = FUN_053d750c(*(long *)(param_4 + 0x100),iVar19,DAT_091a82c0);
        if (lVar7 == 0) break;
        UnityEngine_GameObject__SetActive(lVar7,uVar4 & 1,0);
      }
      lVar7 = *(long *)(param_4 + 0x360);
      iVar19 = iVar19 + 1;
    } while (lVar7 != 0);
  }
LAB_044b6944:
  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_044b7980:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

