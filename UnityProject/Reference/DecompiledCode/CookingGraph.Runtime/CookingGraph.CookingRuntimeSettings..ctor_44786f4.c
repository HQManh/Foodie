// rea decompile_all
// name: CookingGraph.CookingRuntimeSettings$$.ctor
// address: 0x44786f4
// body: available
// range: 0x44786f4-0x44793bf inclusive
// range: 0x44793c4-0x44793c7 inclusive
// range: 0x44793cc-0x4479447 inclusive
// range: 0x447944c-0x447944f inclusive
// range: 0x4479454-0x4479457 inclusive
// range: 0x447945c-0x447945f inclusive
// range: 0x44794cc-0x4479c9b inclusive
// range: 0x4479ca0-0x4479cab inclusive
// range: 0x4479d1c-0x4479d53 inclusive
// range: 0x4479d58-0x4479d5f inclusive
// range: 0x4479d64-0x4479d67 inclusive
// range: 0x4479d6c-0x4479d6f inclusive
// range: 0x4479d74-0x4479d77 inclusive
// range: 0x4479df8-0x447a033 inclusive
// range: 0x447a080-0x447a477 inclusive
// range: 0x447a4fc-0x447a743 inclusive
// range: 0x447a790-0x447a923 inclusive
// range: 0x447ab6c-0x447ab73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4478ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44793bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44793c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479444 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447944c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447945c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479c98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479d5c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4479d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0447a7d8) */
/* WARNING: Removing unreachable block (ram,0x04479080) */
/* WARNING: Removing unreachable block (ram,0x0447a6d4) */
/* WARNING: Removing unreachable block (ram,0x0447a3b0) */
/* WARNING: Removing unreachable block (ram,0x04479fd4) */
/* WARNING: Removing unreachable block (ram,0x04479370) */
/* WARNING: Removing unreachable block (ram,0x04479374) */
/* WARNING: Removing unreachable block (ram,0x0447a8a8) */
/* WARNING: Removing unreachable block (ram,0x0447a850) */
/* WARNING: Removing unreachable block (ram,0x0447a83c) */
/* WARNING: Removing unreachable block (ram,0x04479d58) */
/* WARNING: Removing unreachable block (ram,0x0447a910) */
/* WARNING: Removing unreachable block (ram,0x0447a528) */
/* WARNING: Removing unreachable block (ram,0x04479c0c) */
/* WARNING: Removing unreachable block (ram,0x04479508) */
/* WARNING: Removing unreachable block (ram,0x04479d48) */
/* WARNING: Removing unreachable block (ram,0x04479d4c) */
/* WARNING: Removing unreachable block (ram,0x04479e20) */

void CookingGraph_CookingRuntimeSettings___ctor
               (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ushort uVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ushort uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  ulong local_1e0;
  ulong local_1c0;
  ulong local_1b8;
  long **local_1b0;
  long local_1a8;
  long **local_1a0;
  long *local_198;
  long **pplStack_190;
  long local_188;
  long *local_180;
  long **pplStack_178;
  long local_170;
  long *local_160;
  long **pplStack_158;
  long local_150;
  long *local_140;
  long **pplStack_138;
  long local_130;
  long *local_120;
  long **pplStack_118;
  long local_110;
  long *local_100;
  long **pplStack_f8;
  long local_f0;
  long *local_e0;
  long **pplStack_d8;
  long local_d0;
  long *local_c0;
  long **pplStack_b8;
  long local_b0;
  long *local_a0;
  long **pplStack_98;
  long local_90;
  long *local_78;
  
  if ((DAT_095180a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d90);
    FUN_03f5c2a4(&DAT_091a0908);
    FUN_03f5c2a4(&DAT_0919c0e8);
    FUN_03f5c2a4(&DAT_0919c9d0);
    FUN_03f5c2a4(&DAT_0919fe08);
    FUN_03f5c2a4(&DAT_0919ece0);
    FUN_03f5c2a4(&DAT_0919fe18);
    FUN_03f5c2a4(&DAT_0919fe00);
    FUN_03f5c2a4(&DAT_0919c9c8);
    FUN_03f5c2a4(&DAT_0919ecd8);
    FUN_03f5c2a4(&DAT_0919c0e0);
    FUN_03f5c2a4(&DAT_091a0900);
    FUN_03f5c2a4(&DAT_09176130);
    FUN_03f5c2a4(&DAT_09175f38);
    FUN_03f5c2a4(&DAT_09176e40);
    FUN_03f5c2a4(&DAT_09176860);
    FUN_03f5c2a4(&DAT_09176c10);
    FUN_03f5c2a4(&DAT_091c9c38);
    FUN_03f5c2a4(&DAT_091c9cc8);
    FUN_03f5c2a4(&DAT_091c9cf8);
    FUN_03f5c2a4(&DAT_091c9d10);
    FUN_03f5c2a4(&DAT_091c9d48);
    FUN_03f5c2a4(&DAT_091c9d80);
    FUN_03f5c2a4(&DAT_091ca350);
    FUN_03f5c2a4(&DAT_091ca360);
    FUN_03f5c2a4(&DAT_091a2738);
    FUN_03f5c2a4(&DAT_091a2600);
    FUN_03f5c2a4(&DAT_091a2888);
    FUN_03f5c2a4(&DAT_091a48e0);
    FUN_03f5c2a4(&DAT_091a2a08);
    FUN_03f5c2a4(&DAT_091a3db8);
    FUN_03f5c2a4(&DAT_091a2768);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a2a10);
    FUN_03f5c2a4(&DAT_091a2608);
    FUN_03f5c2a4(&DAT_091a3dc0);
    FUN_03f5c2a4(&DAT_091a2770);
    FUN_03f5c2a4(&DAT_091a48e8);
    FUN_03f5c2a4(&DAT_091a2890);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a2740);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_091a3dc8);
    FUN_03f5c2a4(&DAT_091a2610);
    FUN_03f5c2a4(&DAT_091a2898);
    FUN_03f5c2a4(&DAT_091a48f0);
    FUN_03f5c2a4(&DAT_091a2748);
    FUN_03f5c2a4(&DAT_091a2778);
    FUN_03f5c2a4(&DAT_091a2a18);
    FUN_03f5c2a4(&DAT_09179150);
    FUN_03f5c2a4(&DAT_091787f8);
    FUN_03f5c2a4(&DAT_09178ad0);
    FUN_03f5c2a4(&DAT_09178658);
    FUN_03f5c2a4(&DAT_09178690);
    FUN_03f5c2a4(&DAT_09178dc8);
    FUN_03f5c2a4(&DAT_09178f28);
    FUN_03f5c2a4(&DAT_091785b0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a650);
    FUN_03f5c2a4(&DAT_0917ad30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b0fd0);
    FUN_03f5c2a4(&DAT_091abbf0);
    FUN_03f5c2a4(&DAT_091ac5a8);
    FUN_03f5c2a4(&DAT_091abf68);
    FUN_03f5c2a4(&DAT_091abef8);
    FUN_03f5c2a4(&DAT_091ac218);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091af280);
    FUN_03f5c2a4(&DAT_091abf00);
    FUN_03f5c2a4(&DAT_091abf08);
    FUN_03f5c2a4(&DAT_091b73f8);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b73f0);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b7400);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091dbbe0);
    FUN_03f5c2a4(&DAT_091e7fa0);
    FUN_03f5c2a4(&DAT_091e7fa8);
    FUN_03f5c2a4(&DAT_091e7fb0);
    FUN_03f5c2a4(&DAT_091e7fb8);
    FUN_03f5c2a4(&DAT_091e7fc0);
    FUN_03f5c2a4(&DAT_091e7fc8);
    FUN_03f5c2a4(&DAT_091e7fd0);
    FUN_03f5c2a4(&DAT_091e7fd8);
    FUN_03f5c2a4(&DAT_0918f708);
    FUN_03f5c2a4(&DAT_091e7fe0);
    FUN_03f5c2a4(&DAT_0918f710);
    FUN_03f5c2a4(&DAT_091e7fe8);
    FUN_03f5c2a4(&DAT_0918f718);
    FUN_03f5c2a4(&DAT_091e7ff0);
    FUN_03f5c2a4(&DAT_091e7ff8);
    FUN_03f5c2a4(&DAT_0918f720);
    FUN_03f5c2a4(&DAT_091e8000);
    FUN_03f5c2a4(&DAT_0918f728);
    FUN_03f5c2a4(&DAT_0918f700);
    FUN_03f5c2a4(&DAT_09218448);
    FUN_03f5c2a4(&DAT_0921a010);
    FUN_03f5c2a4(&DAT_0921ac10);
    FUN_03f5c2a4(&DAT_0921a008);
    DAT_095180a5 = 1;
  }
  local_78 = (long *)0x0;
  local_a0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_90 = 0;
  local_c0 = (long *)0x0;
  pplStack_b8 = (long **)0x0;
  local_b0 = 0;
  local_e0 = (long *)0x0;
  pplStack_d8 = (long **)0x0;
  local_d0 = 0;
  local_100 = (long *)0x0;
  pplStack_f8 = (long **)0x0;
  local_f0 = 0;
  local_120 = (long *)0x0;
  pplStack_118 = (long **)0x0;
  local_110 = 0;
  local_140 = (long *)0x0;
  pplStack_138 = (long **)0x0;
  local_130 = 0;
  local_160 = (long *)0x0;
  pplStack_158 = (long **)0x0;
  local_150 = 0;
  local_180 = (long *)0x0;
  pplStack_178 = (long **)0x0;
  local_170 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09175f38);
  FUN_06fe1d68(lVar3,DAT_0919c0e0);
  plVar4 = (long *)(param_1 + 0x10);
  *plVar4 = lVar3;
  thunk_FUN_03f5d7b8(plVar4,lVar3);
  lVar3 = thunk_FUN_03f9944c(DAT_09176e40);
  FUN_06fe1d68(lVar3,DAT_091a0900);
  plVar5 = (long *)(param_1 + 0x18);
  *plVar5 = lVar3;
  thunk_FUN_03f5d7b8(plVar5,lVar3);
  lVar3 = thunk_FUN_03f9944c(DAT_09176860);
  FUN_06fb79ec(lVar3,DAT_0919ecd8);
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = lVar3;
  thunk_FUN_03f5d7b8(plVar6,lVar3);
  lVar3 = thunk_FUN_03f9944c(DAT_09176130);
  FUN_06fc96ac(lVar3,DAT_0919c9c8);
  plVar7 = (long *)(param_1 + 0x28);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7,lVar3);
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517140 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09517140 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar18 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18);
  lVar3 = thunk_FUN_03f9944c(DAT_09176c10);
  FUN_06fe1d94(lVar3,uVar18,DAT_0919fe00);
  plVar24 = (long *)(param_1 + 0x30);
  *plVar24 = lVar3;
  thunk_FUN_03f5d7b8(plVar24,lVar3);
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
  lVar3 = puVar12[1];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
    }
    uVar18 = *puVar12;
    lVar3 = thunk_FUN_03f9944c(DAT_09178658);
    FUN_05324070(lVar3,uVar18,DAT_091e7fd0,0);
    plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 8);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
  }
  plVar8 = (long *)FUN_04af8044(param_5,lVar3,DAT_091ca350);
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_0917a650) {
          puVar12 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_04478ee8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a650,0);
LAB_04478ee8:
    plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    pplStack_190 = &local_78;
    local_198 = (long *)0x0;
    do {
      local_78 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_09185b10) {
            puVar12 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04478f6c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04478f6c:
      uVar14 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      plVar8 = local_78;
      if ((uVar14 & 1) == 0) {
        if (local_78 == (long *)0x0) goto LAB_04479074;
        lVar3 = *local_78;
        uVar14 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar14 == 0) goto LAB_0447904c;
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04479034;
      }
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *local_78;
      uVar14 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_0917ad30) {
            puVar12 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04478fd0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ad30,0);
LAB_04478fd0:
      lVar3 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      plVar8 = local_78;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) != '\0')) {
        CookingGraph_CookingRuntimeSettings__RequireSpeed
                  (*(undefined4 *)(lVar3 + 0x14),DAT_0921ac10);
        plVar8 = local_78;
      }
    } while( true );
  }
  goto LAB_0447a848;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_04479034:
    if (*(long *)(piVar16 + -2) == DAT_09185a58) {
      puVar12 = (undefined8 *)(lVar3 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_04479068;
    }
  }
LAB_0447904c:
  puVar12 = (undefined8 *)FUN_03f95da8(local_78,DAT_09185a58,0);
LAB_04479068:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_04479074:
  if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
  lVar3 = puVar12[2];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
    }
    uVar18 = *puVar12;
    lVar3 = thunk_FUN_03f9944c(DAT_09178658);
    FUN_05324070(lVar3,uVar18,DAT_091e7fa0,0);
    plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x10);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
  }
  uVar18 = FUN_04af8044(param_5,lVar3,DAT_091ca350);
  if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f700);
  }
  puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
  lVar3 = puVar12[3];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f700);
      puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
    }
    uVar22 = *puVar12;
    lVar3 = thunk_FUN_03f9944c(DAT_09178dc8);
    FUN_05322d94(lVar3,uVar22,DAT_091e7fa8,0);
    plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x18);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
  }
  lVar3 = FUN_04ae5fd0(uVar18,lVar3,DAT_091c9d10);
  if (lVar3 == 0) {
    uVar31 = 0x3f800000;
  }
  else {
    uVar31 = *(undefined4 *)(lVar3 + 0x14);
  }
  if (param_5 != 0) {
    FUN_057e185c(&local_198,param_5,DAT_091abef8);
    local_90 = local_188;
    local_1a0 = &local_a0;
    pplStack_98 = pplStack_190;
    local_a0 = local_198;
    local_1a8 = 0;
    while (uVar14 = FUN_071bd28c(&local_a0,DAT_091a2740), lVar10 = local_90, lVar3 = local_1a8,
          (uVar14 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CookingGraph_Execution_CookingExecution__RequireTime
                ((double)*(float *)(local_90 + 0x28),DAT_0921a008,0);
      CookingGraph_Execution_CookingExecution__RequireTime
                ((double)*(float *)(lVar10 + 0x2c),DAT_09218448,0);
      if (*(long *)(lVar10 + 0x30) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar18 = thunk_FUN_03f9944c();
        uVar22 = thunk_FUN_03fc39d4(&DAT_091ffa88);
        System_ArgumentException___ctor(uVar18,uVar22,0);
        uVar22 = thunk_FUN_03fc39d4(&DAT_091c68e8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar18,uVar22);
      }
      FUN_057e185c(&local_198,*(long *)(lVar10 + 0x30),DAT_091ac218);
      local_c0 = local_198;
      local_198 = (long *)0x0;
      pplStack_b8 = pplStack_190;
      local_b0 = local_188;
      pplStack_190 = &local_c0;
      while (uVar14 = FUN_071bd28c(&local_c0,DAT_091a2890), lVar3 = local_b0, (uVar14 & 1) != 0) {
        if (local_b0 == 0) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar18 = thunk_FUN_03f9944c();
          uVar22 = thunk_FUN_03fc39d4(&DAT_09209118);
          System_ArgumentException___ctor(uVar18,uVar22,0);
          uVar22 = thunk_FUN_03fc39d4(&DAT_091c68e8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar18,uVar22);
        }
        if (*(char *)(local_b0 + 0x10) != '\0') {
          uVar14 = System_String__IsNullOrEmpty(*(undefined8 *)(local_b0 + 0x18),0);
          if ((uVar14 & 1) != 0) {
            uVar18 = UnityEngine_Object__GetName(lVar10,0);
            uVar22 = thunk_FUN_03fc39d4(&DAT_091ffa80);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f8f68);
            uVar18 = System_String__Concat(uVar22,uVar18,uVar9,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar22 = thunk_FUN_03f9944c();
            System_ArgumentException___ctor(uVar22,uVar18,0);
            uVar18 = thunk_FUN_03fc39d4(&DAT_091c68e8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar22,uVar18);
          }
          CookingGraph_Execution_CookingExecution__RequireTime
                    ((double)*(float *)(lVar3 + 0x20),DAT_0921a010,0);
          if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar19 = *plVar24;
          uVar18 = System_String__Trim(*(long *)(lVar3 + 0x18),0);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar18,uVar18);
          }
          uVar14 = FUN_06fe2cf4(lVar19,uVar18,DAT_0919fe18);
          if ((uVar14 & 1) == 0) {
            if (*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar19 = *plVar24;
            uVar18 = System_String__Trim(*(long *)(lVar3 + 0x18),0);
            CookingGraph_CookingRuntimeSettings__AtSpeed(*(undefined4 *)(lVar3 + 0x20),uVar31);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fe2afc(lVar19,uVar18,DAT_0919fe08);
          }
        }
      }
      FUN_071bd288(&local_c0,DAT_091a2888);
    }
    FUN_071bd288(local_1a0,DAT_091a2738);
    if (lVar3 != 0) goto LAB_0447ab6c;
    if (*(int *)(param_5 + 0x18) < 1) {
      uVar27 = 0;
    }
    else {
      lVar3 = FUN_057e0998(param_5,0,DAT_091abf08);
      if (lVar3 == 0) goto LAB_0447a848;
      uVar27 = CookingGraph_CookingRuntimeSettings__AtSpeed(*(undefined4 *)(lVar3 + 0x28),uVar31);
    }
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x38) = uVar27;
      if (*(int *)(param_5 + 0x18) < 1) {
        uVar31 = 0;
      }
      else {
        lVar3 = FUN_057e0998(param_5,0,DAT_091abf08);
        if (lVar3 == 0) goto LAB_0447a848;
        uVar31 = CookingGraph_CookingRuntimeSettings__AtSpeed(*(undefined4 *)(lVar3 + 0x2c),uVar31);
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar31;
      if (param_3 != 0) {
        uVar18 = CookingGraph_CookingExecutionProfile__CreateConfig(param_3,0);
        *(undefined8 *)(param_1 + 0x40) = uVar18;
        thunk_FUN_03f5d7b8();
        lVar3 = thunk_FUN_03f9944c(DAT_09182d90);
        CookingGraph_CookingGameplayDefaults___ctor(lVar3,param_3);
        plVar24 = (long *)(param_1 + 0x48);
        *plVar24 = lVar3;
        thunk_FUN_03f5d7b8(plVar24,lVar3);
        if (param_4 != 0) {
          FUN_057e185c(&local_198,param_4,DAT_091abf68);
          pplStack_d8 = pplStack_190;
          local_e0 = local_198;
          local_d0 = local_188;
          local_198 = (long *)0x0;
          pplStack_190 = &local_e0;
          while (uVar14 = FUN_071bd28c(&local_e0,DAT_091a2770), (uVar14 & 1) != 0) {
            CookingGraph_CookingRuntimeSettings__ValidateLayer(param_2,local_d0);
          }
          FUN_071bd288(&local_e0,DAT_091a2768);
          if (param_2 != 0) {
            if (*(long *)(param_2 + 0x28) == 0) {
              fVar28 = 1.0;
            }
            else {
              fVar28 = *(float *)(*(long *)(param_2 + 0x28) + 0x34);
              if (fVar28 <= 0.0 || 0xfe < ((uint)fVar28 >> 0x17 & 0xff)) {
                fVar28 = 1.0;
              }
            }
            if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
            lVar3 = puVar12[4];
            if (lVar3 == 0) {
              if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
              }
              uVar18 = *puVar12;
              lVar3 = thunk_FUN_03f9944c(DAT_09178690);
              FUN_05324070(lVar3,uVar18,DAT_091e7fb0,0);
              plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x20);
              *plVar8 = lVar3;
              thunk_FUN_03f5d7b8(plVar8,lVar3);
            }
            uVar18 = FUN_04af8044(param_4,lVar3,DAT_091ca360);
            if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f700);
            }
            puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
            lVar3 = puVar12[5];
            if (lVar3 == 0) {
              if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f700);
                puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
              }
              uVar22 = *puVar12;
              lVar3 = thunk_FUN_03f9944c(DAT_09178dc8);
              FUN_05322d94(lVar3,uVar22,DAT_091e7fb8,0);
              plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x28);
              *plVar8 = lVar3;
              thunk_FUN_03f5d7b8(plVar8,lVar3);
            }
            lVar3 = FUN_04ae5fd0(uVar18,lVar3,DAT_091c9d10);
            fVar29 = 1.0;
            fVar32 = 1.0;
            if (lVar3 != 0) {
              fVar32 = *(float *)(lVar3 + 0x14);
            }
            if ((*(long *)(param_2 + 0x28) != 0) &&
               (fVar29 = *(float *)(*(long *)(param_2 + 0x28) + 0x30),
               fVar29 <= 0.0 || 0xfe < ((uint)fVar29 >> 0x17 & 0xff))) {
              fVar29 = 1.0;
            }
            if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
            lVar3 = puVar12[6];
            if (lVar3 == 0) {
              if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
              }
              uVar18 = *puVar12;
              lVar3 = thunk_FUN_03f9944c(DAT_09178690);
              FUN_05324070(lVar3,uVar18,DAT_091e7fc0,0);
              plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x30);
              *plVar8 = lVar3;
              thunk_FUN_03f5d7b8(plVar8,lVar3);
            }
            uVar18 = FUN_04af8044(param_4,lVar3,DAT_091ca360);
            if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f700);
            }
            puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
            lVar3 = puVar12[7];
            if (lVar3 == 0) {
              if (*(int *)(DAT_0918f700 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f700);
                puVar12 = *(undefined8 **)(DAT_0918f700 + 0xb8);
              }
              uVar22 = *puVar12;
              lVar3 = thunk_FUN_03f9944c(DAT_09178dc8);
              FUN_05322d94(lVar3,uVar22,DAT_091e7fc8,0);
              plVar8 = (long *)(*(long *)(DAT_0918f700 + 0xb8) + 0x38);
              *plVar8 = lVar3;
              thunk_FUN_03f5d7b8(plVar8,lVar3);
            }
            lVar3 = FUN_04ae5fd0(uVar18,lVar3,DAT_091c9d10);
            if (lVar3 == 0) {
              fVar30 = 1.0;
            }
            else {
              fVar30 = *(float *)(lVar3 + 0x14);
            }
            if (*(long *)(param_2 + 0x50) != 0) {
              FUN_057e185c(&local_198,*(long *)(param_2 + 0x50),DAT_091abbf0);
              local_f0 = local_188;
              local_1a0 = &local_100;
              pplStack_f8 = pplStack_190;
              local_100 = local_198;
              local_1a8 = 0;
              while (uVar14 = FUN_071bd28c(&local_100,DAT_091a2608), lVar3 = local_1a8,
                    (uVar14 & 1) != 0) {
                lVar3 = thunk_FUN_03f9944c(DAT_0918f708);
                System_Object___ctor(lVar3,0);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                *(long *)(lVar3 + 0x10) = local_f0;
                thunk_FUN_03f5d7b8();
                if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_057e185c(&local_198,*(long *)(param_2 + 0x38),DAT_091ada18);
                local_110 = local_188;
                local_1b0 = &local_120;
                pplStack_118 = pplStack_190;
                local_120 = local_198;
                local_1b8 = 0;
                while (uVar14 = FUN_071bd28c(&local_120,DAT_091a3388), (uVar14 & 1) != 0) {
                  lVar10 = thunk_FUN_03f9944c(DAT_0918f710);
                  System_Object___ctor(lVar10,0);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar8 = (long *)(lVar10 + 0x18);
                  *plVar8 = lVar3;
                  thunk_FUN_03f5d7b8(plVar8,lVar3);
                  plVar25 = (long *)(lVar10 + 0x10);
                  *plVar25 = local_110;
                  thunk_FUN_03f5d7b8(plVar25);
                  FUN_057e185c(&local_198,param_4,DAT_091abf68);
                  uVar14 = 0;
                  local_d0 = local_188;
                  pplStack_d8 = pplStack_190;
                  local_e0 = local_198;
                  local_198 = (long *)0x0;
                  pplStack_190 = &local_e0;
                  do {
                    uVar17 = (uint)uVar14;
                    uVar2 = FUN_071bd28c(&local_e0,DAT_091a2770);
                    lVar19 = local_d0;
                    if ((uVar2 & 1) == 0) break;
                    if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar20 = *(long *)(lVar10 + 0x20);
                    uVar18 = *(undefined8 *)(local_d0 + 0x40);
                    if (lVar20 == 0) {
                      lVar20 = thunk_FUN_03f9944c(DAT_09178ad0);
                      FUN_05322d94(lVar20,lVar10,DAT_091e7fe0,0);
                      *(long *)(lVar10 + 0x20) = lVar20;
                      thunk_FUN_03f5d7b8(lVar10 + 0x20,lVar20);
                    }
                    lVar20 = FUN_04ae5fd0(uVar18,lVar20,DAT_091c9cf8);
                    if (lVar20 == 0) {
                      lVar20 = *plVar8;
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar18 = *(undefined8 *)(lVar19 + 0x38);
                      plVar23 = (long *)(lVar20 + 0x18);
                      lVar19 = *plVar23;
                      if (lVar19 == 0) {
                        lVar19 = thunk_FUN_03f9944c(DAT_091785b0);
                        FUN_05322d94(lVar19,lVar20,DAT_091e7fd8,0);
                        *plVar23 = lVar19;
                        thunk_FUN_03f5d7b8(plVar23,lVar19);
                      }
                      lVar19 = FUN_04ae5fd0(uVar18,lVar19,DAT_091c9c38);
                      if (lVar19 != 0) {
                        local_1c0 = 0;
                        FUN_05c37590(*(undefined4 *)(lVar19 + 0x20),&local_1c0,DAT_091b73f0);
                        goto LAB_04479bbc;
                      }
                      uVar11 = 0;
                      uVar15 = 0;
                    }
                    else {
                      local_1c0 = 0;
                      FUN_05c37590(*(undefined4 *)(lVar20 + 0x28),&local_1c0,DAT_091b73f0);
LAB_04479bbc:
                      uVar15 = local_1c0 & 0xffffffff00000000;
                      uVar11 = local_1c0;
                    }
                    uVar14 = uVar15 >> 0x20;
                    uVar17 = (uint)(uVar15 >> 0x20);
                  } while ((uVar11 & 0xff) == 0);
                  FUN_071bd288(&local_e0,DAT_091a2768);
                  if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *plVar4;
                  uVar18 = FUN_04d8cbc0(*plVar25,*(undefined8 *)(*plVar8 + 0x10),DAT_091dbbe0);
                  if (((uVar2 ^ 1) & 1) == 0) {
                    uVar14 = (ulong)uVar17;
                  }
                  else {
                    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar14 = CookingGraph_CookingGraphAsset__AuthoredMergeDurationFor
                                       (param_2,*plVar25,*(undefined8 *)(*plVar8 + 0x10),0);
                  }
                  CookingGraph_CookingRuntimeSettings__AtSpeed(uVar14,fVar28 * fVar32);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fe2afc(lVar10,uVar18,DAT_0919c0e8);
                }
                FUN_071bd288(local_1b0,DAT_091a3380);
                if (local_1b8 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c548();
                }
              }
              FUN_071bd288(local_1a0,DAT_091a2600);
              if (lVar3 != 0) {
LAB_0447ab6c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c548(lVar3);
              }
              if (*(long *)(param_2 + 0x40) != 0) {
                FUN_057e185c(&local_198,*(long *)(param_2 + 0x40),DAT_091b0fd0);
                pplStack_138 = pplStack_190;
                local_140 = local_198;
                local_130 = local_188;
                local_1a0 = &local_140;
                local_1a8 = 0;
                while (uVar14 = FUN_071bd28c(&local_140,DAT_091a48e8), lVar3 = local_1a8,
                      (uVar14 & 1) != 0) {
                  lVar3 = thunk_FUN_03f9944c(DAT_0918f718);
                  System_Object___ctor(lVar3,0);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar4 = (long *)(lVar3 + 0x10);
                  *plVar4 = local_130;
                  thunk_FUN_03f5d7b8(plVar4);
                  FUN_057e185c(&local_198,param_4,DAT_091abf68);
                  local_e0 = local_198;
                  uVar14 = 0;
                  local_198 = (long *)0x0;
                  pplStack_d8 = pplStack_190;
                  local_d0 = local_188;
                  pplStack_190 = &local_e0;
                  do {
                    uVar31 = (undefined4)(uVar14 >> 0x18);
                    uVar14 = FUN_071bd28c(&local_e0,DAT_091a2770);
                    if ((uVar14 & 1) == 0) {
                      uVar11 = 0;
                      break;
                    }
                    if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar10 = *(long *)(lVar3 + 0x18);
                    uVar18 = *(undefined8 *)(local_d0 + 0x48);
                    if (lVar10 == 0) {
                      lVar10 = thunk_FUN_03f9944c(DAT_09179150);
                      FUN_05322d94(lVar10,lVar3,DAT_091e7fe8,0);
                      *(long *)(lVar3 + 0x18) = lVar10;
                      thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar10);
                    }
                    lVar10 = FUN_04ae5fd0(uVar18,lVar10,DAT_091c9d80);
                    if (lVar10 == 0) {
                      uVar11 = 0;
                      uVar15 = 0;
                    }
                    else {
                      local_1b8 = 0;
                      FUN_05c37590(*(undefined4 *)(lVar10 + 0x20),&local_1b8,DAT_091b73f0);
                      uVar15 = local_1b8 & 0xffffffff00000000;
                      uVar11 = local_1b8;
                    }
                    uVar14 = uVar15 >> 8;
                    uVar31 = (undefined4)(uVar15 >> 0x20);
                  } while ((uVar11 & 0xff) == 0);
                  FUN_071bd288(&local_e0,DAT_091a2768);
                  lVar3 = *plVar4;
                  lVar10 = *plVar5;
                  if ((uVar11 & 0xff) == 0) {
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar31 = *(undefined4 *)(lVar3 + 0x44);
                  }
                  CookingGraph_CookingRuntimeSettings__AtSpeed(uVar31,fVar29 * fVar30);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_06fe2afc(lVar10,lVar3,DAT_091a0908);
                }
                FUN_071bd288(local_1a0,DAT_091a48e0);
                if (lVar3 != 0) goto LAB_0447ab6c;
                if (*(long *)(param_2 + 0x80) != 0) {
                  FUN_057e185c(&local_198,*(long *)(param_2 + 0x80),DAT_091af280);
                  local_150 = local_188;
                  local_1a0 = &local_160;
                  pplStack_158 = pplStack_190;
                  local_160 = local_198;
                  local_1a8 = 0;
                  while (uVar14 = FUN_071bd28c(&local_160,DAT_091a3dc0), lVar3 = local_1a8,
                        (uVar14 & 1) != 0) {
                    lVar3 = thunk_FUN_03f9944c(DAT_0918f720);
                    System_Object___ctor(lVar3,0);
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    plVar4 = (long *)(lVar3 + 0x10);
                    *plVar4 = local_150;
                    thunk_FUN_03f5d7b8();
                    FUN_057e185c(&local_198,param_4,DAT_091abf68);
                    uVar17 = 0;
                    uVar14 = 0;
                    uVar26 = 0;
                    uVar21 = 0;
                    local_d0 = local_188;
                    uVar2 = 0;
                    local_1e0 = 0;
                    pplStack_d8 = pplStack_190;
                    local_e0 = local_198;
                    local_198 = (long *)0x0;
                    pplStack_190 = &local_e0;
                    while (uVar11 = FUN_071bd28c(&local_e0,DAT_091a2770), lVar10 = local_d0,
                          (uVar11 & 1) != 0) {
                      if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar19 = *(long *)(lVar3 + 0x18);
                      uVar18 = *(undefined8 *)(local_d0 + 0x50);
                      if (lVar19 == 0) {
                        lVar19 = thunk_FUN_03f9944c(DAT_09178f28);
                        FUN_05322d94(lVar19,lVar3,DAT_091e7ff0,0);
                        *(long *)(lVar3 + 0x18) = lVar19;
                        thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar19);
                      }
                      lVar19 = FUN_04ae5fd0(uVar18,lVar19,DAT_091c9d48);
                      if (uVar17 == 0) {
                        if (((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x30), lVar20 == 0)) ||
                           (*(char *)(lVar20 + 0x10) == '\0')) {
                          uVar18 = *(undefined8 *)(lVar10 + 0x48);
                          lVar10 = *(long *)(lVar3 + 0x20);
                          if (lVar10 == 0) {
                            lVar10 = thunk_FUN_03f9944c(DAT_09179150);
                            FUN_05322d94(lVar10,lVar3,DAT_091e7ff8,0);
                            *(long *)(lVar3 + 0x20) = lVar10;
                            thunk_FUN_03f5d7b8(lVar3 + 0x20,lVar10);
                          }
                          lVar10 = FUN_04ae5fd0(uVar18,lVar10,DAT_091c9d80);
                          if (lVar10 != 0) {
                            local_1b8 = 0;
                            FUN_05c37590(*(undefined4 *)(lVar10 + 0x20),&local_1b8,DAT_091b73f0);
                            goto LAB_0447a2dc;
                          }
                          uVar11 = 0;
                          uVar14 = 0;
                        }
                        else {
                          local_1b8 = 0;
                          FUN_05c37590(*(undefined4 *)(lVar20 + 0x14),&local_1b8,DAT_091b73f0);
LAB_0447a2dc:
                          uVar14 = local_1b8 & 0xffffffff00000000;
                          uVar11 = local_1b8;
                        }
                        uVar14 = uVar14 >> 8;
                        uVar17 = (uint)uVar11 & 0xff;
                      }
                      if ((uVar26 == 0) && (lVar19 != 0)) {
                        if (*(char *)(lVar19 + 0x38) == '\0') {
                          uVar26 = 0;
                        }
                        else {
                          local_1b8 = local_1b8 & 0xffffffffffff0000;
                          FUN_05c290f8(&local_1b8,*(undefined1 *)(lVar19 + 0x39),DAT_091b6a48);
                          uVar21 = (ushort)local_1b8 >> 8;
                          uVar26 = (ushort)local_1b8 & 0xff;
                        }
                      }
                      if ((uVar2 == 0) && (lVar19 != 0)) {
                        lVar10 = *(long *)(lVar19 + 0x40);
                        uVar2 = 0;
                        if ((lVar10 != 0) && (uVar2 = 0, *(char *)(lVar10 + 0x10) != '\0')) {
                          local_1b8 = 0;
                          FUN_05c3078c(&local_1b8,*(undefined4 *)(lVar10 + 0x14),DAT_091b6f98);
                          local_1e0 = local_1b8 >> 0x20;
                          uVar2 = (uint)local_1b8 & 0xff;
                        }
                      }
                    }
                    FUN_071bd288(&local_e0,DAT_091a2768);
                    lVar3 = *plVar4;
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar10 = *(long *)(lVar3 + 0x38);
                    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x10) == '\0')) {
                      if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      puVar1 = (undefined4 *)(*(long *)(lVar3 + 0x10) + 0x44);
                    }
                    else {
                      puVar1 = (undefined4 *)(lVar10 + 0x14);
                    }
                    if (uVar2 == 0) {
                      local_1e0 = (ulong)*(uint *)(lVar3 + 0x28);
                    }
                    if ((int)local_1e0 < 1) {
                      thunk_FUN_03fc39d4(&DAT_09181548);
                      uVar18 = thunk_FUN_03f9944c();
                      uVar22 = thunk_FUN_03fc39d4(&DAT_0920b6d8);
                      System_ArgumentException___ctor(uVar18,uVar22,0);
                      uVar22 = thunk_FUN_03fc39d4(&DAT_091c68e8);
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar18,uVar22);
                    }
                    lVar10 = *plVar6;
                    uVar31 = *puVar1;
                    if (uVar17 != 0) {
                      uVar31 = (int)(uVar14 >> 0x18);
                    }
                    uVar31 = CookingGraph_CookingRuntimeSettings__AtSpeed(uVar31,fVar29 * fVar30);
                    if (uVar26 == 0) {
                      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar21 = (ushort)*(byte *)(*plVar4 + 0x2c);
                    }
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_06fb878c(lVar10,lVar3,(ulong)CONCAT14(uVar21 != 0,uVar31),local_1e0,
                                 DAT_0919ece0);
                  }
                  FUN_071bd288(local_1a0,DAT_091a3db8);
                  if (lVar3 != 0) goto LAB_0447ab6c;
                  if (*(long *)(param_2 + 0x58) != 0) {
                    FUN_057e185c(&local_198,*(long *)(param_2 + 0x58),DAT_091ac5a8);
                    pplStack_178 = pplStack_190;
                    local_180 = local_198;
                    local_170 = local_188;
                    local_1a0 = &local_180;
                    local_1a8 = 0;
                    do {
                      uVar14 = FUN_071bd28c(&local_180,DAT_091a2a10);
                      lVar3 = local_1a8;
                      if ((uVar14 & 1) == 0) {
                        FUN_071bd288(local_1a0,DAT_091a2a08);
                        if (lVar3 == 0) {
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c548(lVar3);
                      }
                      lVar3 = thunk_FUN_03f9944c(DAT_0918f728);
                      System_Object___ctor(lVar3,0);
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      plVar4 = (long *)(lVar3 + 0x10);
                      *plVar4 = local_170;
                      thunk_FUN_03f5d7b8(plVar4);
                      FUN_057e185c(&local_198,param_4,DAT_091abf68);
                      local_e0 = local_198;
                      uVar14 = 0;
                      local_198 = (long *)0x0;
                      pplStack_d8 = pplStack_190;
                      local_d0 = local_188;
                      pplStack_190 = &local_e0;
                      do {
                        uVar11 = FUN_071bd28c(&local_e0,DAT_091a2770);
                        if ((uVar11 & 1) == 0) {
                          uVar11 = 0;
                          break;
                        }
                        if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar10 = *(long *)(lVar3 + 0x18);
                        uVar18 = *(undefined8 *)(local_d0 + 0x58);
                        if (lVar10 == 0) {
                          lVar10 = thunk_FUN_03f9944c(DAT_091787f8);
                          FUN_05322d94(lVar10,lVar3,DAT_091e8000,0);
                          *(long *)(lVar3 + 0x18) = lVar10;
                          thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar10);
                        }
                        lVar10 = FUN_04ae5fd0(uVar18,lVar10,DAT_091c9cc8);
                        if (lVar10 == 0) {
                          uVar11 = 0;
                        }
                        else {
                          local_1b8 = 0;
                          FUN_05c3078c(&local_1b8,*(undefined4 *)(lVar10 + 0x20),DAT_091b6f98);
                          uVar11 = local_1b8;
                        }
                        uVar14 = uVar11 >> 8;
                      } while ((uVar11 & 0xff) == 0);
                      FUN_071bd288(&local_e0,DAT_091a2768);
                      if ((uVar11 & 0xff) == 0) {
                        if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar3 = *(long *)(*plVar4 + 0x38);
                        if ((lVar3 == 0) || (*(char *)(lVar3 + 0x10) == '\0')) {
                          if (*plVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          puVar13 = (uint *)(*plVar24 + 0x34);
                        }
                        else {
                          puVar13 = (uint *)(lVar3 + 0x14);
                        }
                        uVar14 = (ulong)*puVar13;
                      }
                      else {
                        uVar14 = uVar14 >> 0x18;
                      }
                      if ((int)uVar14 < 1) {
                        thunk_FUN_03fc39d4(&DAT_09181548);
                        uVar18 = thunk_FUN_03f9944c();
                        uVar22 = thunk_FUN_03fc39d4(&DAT_09200990);
                        System_ArgumentException___ctor(uVar18,uVar22,0);
                        uVar22 = thunk_FUN_03fc39d4(&DAT_091c68e8);
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c414(uVar18,uVar22);
                      }
                      if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      FUN_06fca448(*plVar7,*plVar4,uVar14,DAT_0919c9d0);
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0447a848:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

