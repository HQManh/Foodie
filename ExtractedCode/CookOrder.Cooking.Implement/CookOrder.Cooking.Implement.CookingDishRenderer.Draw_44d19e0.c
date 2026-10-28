// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingDishRenderer$$Draw
// address: 0x44d19e0
// body: available
// range: 0x44d19e0-0x44d3387 inclusive
// range: 0x44d3410-0x44d369f inclusive
// range: 0x44d3708-0x44d373f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d2bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3340 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d334c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3358 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d335c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044d2c70) */
/* WARNING: Removing unreachable block (ram,0x044d29d4) */
/* WARNING: Removing unreachable block (ram,0x044d3374) */

void CookOrder_Cooking_Implement_CookingDishRenderer__Draw
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5,
               undefined4 param_6,long param_7,char param_8,char param_9,undefined1 param_10,
               long param_11)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 extraout_d0_07;
  undefined8 extraout_d0_08;
  undefined8 extraout_d0_09;
  undefined8 extraout_d0_10;
  undefined8 extraout_d0_11;
  undefined8 extraout_d0_12;
  float fVar24;
  undefined8 extraout_d0_13;
  undefined8 extraout_d0_14;
  undefined8 extraout_d0_15;
  undefined8 extraout_d0_16;
  undefined8 extraout_d0_17;
  undefined8 extraout_d0_18;
  undefined8 extraout_d0_19;
  undefined8 extraout_d0_20;
  undefined8 extraout_d0_21;
  undefined8 extraout_d0_22;
  undefined8 extraout_d0_23;
  float fVar25;
  float fVar27;
  ulong uVar26;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  long local_2c0;
  long *plStack_2b8;
  ulong local_2b0;
  undefined8 uStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  long local_270;
  long *plStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  ulong local_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  long local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  ulong local_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 local_168;
  long **pplStack_160;
  long *local_158;
  long local_150;
  long *plStack_148;
  long local_140;
  undefined8 local_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long *local_108;
  long local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined1 local_e0 [4];
  char local_dc [4];
  char local_d8 [4];
  undefined4 local_d4;
  long local_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  
  local_e0[0] = param_10;
  local_dc[0] = param_9;
  local_d8[0] = param_8;
  local_d4 = param_6;
  if ((DAT_095182e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c57b0);
    FUN_03f5c2a4(&DAT_091ca078);
    FUN_03f5c2a4(&DAT_091ca570);
    FUN_03f5c2a4(&DAT_091cae18);
    FUN_03f5c2a4(&DAT_091cb490);
    FUN_03f5c2a4(&DAT_091a2d38);
    FUN_03f5c2a4(&DAT_091a27b0);
    FUN_03f5c2a4(&DAT_091a27b8);
    FUN_03f5c2a4(&DAT_091a2d40);
    FUN_03f5c2a4(&DAT_091a27c0);
    FUN_03f5c2a4(&DAT_091a2d48);
    FUN_03f5c2a4(&DAT_09179020);
    FUN_03f5c2a4(&DAT_09178940);
    FUN_03f5c2a4(&DAT_09178bc8);
    FUN_03f5c2a4(&DAT_091cd688);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_091cd8d0);
    FUN_03f5c2a4(&DAT_091cd978);
    FUN_03f5c2a4(&DAT_091cda68);
    FUN_03f5c2a4(&DAT_091cdbe8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4f0);
    FUN_03f5c2a4(&DAT_0917a740);
    FUN_03f5c2a4(&DAT_0917aba0);
    FUN_03f5c2a4(&DAT_0917ae20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091ac020);
    FUN_03f5c2a4(&DAT_091ac028);
    FUN_03f5c2a4(&DAT_091ac030);
    FUN_03f5c2a4(&DAT_091acd60);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091ac038);
    FUN_03f5c2a4(&DAT_091ac040);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091b6b10);
    FUN_03f5c2a4(&DAT_091d4b70);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09172998);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091da200);
    FUN_03f5c2a4(&DAT_09173220);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e6b08);
    FUN_03f5c2a4(&DAT_091e6b10);
    FUN_03f5c2a4(&DAT_091e6b18);
    FUN_03f5c2a4(&DAT_0918eed8);
    FUN_03f5c2a4(&DAT_0918eed0);
    FUN_03f5c2a4(&DAT_09200a20);
    FUN_03f5c2a4(&DAT_091f9f58);
    FUN_03f5c2a4(&DAT_091f86d8);
    DAT_095182e9 = 1;
  }
  uStack_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_108 = (long *)0x0;
  plStack_148 = (long *)0x0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_158 = (long *)0x0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918eed8);
  uVar23 = System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_044d3184;
  plVar17 = (long *)(lVar4 + 0x10);
  *plVar17 = param_5;
  thunk_FUN_03f5d7b8(plVar17,param_5);
  lVar8 = param_7;
  if (param_11 != 0) {
    lVar8 = param_11;
  }
  lVar5 = FUN_03f5c394(DAT_091805f8,0xb);
  uVar6 = System_Int32__ToString(&local_d4,0);
  uVar23 = extraout_d0;
  if (lVar5 == 0) goto LAB_044d3184;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_044d3340:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar6);
  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x28) = DAT_091f9f58;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28));
  uVar23 = FUN_04d648f8(DAT_091f86d8,param_7,DAT_091da200);
  if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x30) = uVar23;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x30),uVar23);
  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x38) = DAT_091f9f58;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_09535400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar23 = System_Boolean__ToString(local_d8,0);
  if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x40) = uVar23;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x40),uVar23);
  if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x48) = DAT_091f9f58;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x48));
  uVar23 = System_Boolean__ToString(local_dc,0);
  if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x50) = uVar23;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x50),uVar23);
  if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) == 0) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x58) = DAT_091f9f58;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x58));
  uVar23 = System_Boolean__ToString(local_e0,0);
  if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x60) = uVar23;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x60),uVar23);
  if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x68) = DAT_091f9f58;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x68));
  uVar23 = FUN_04d648f8(DAT_091f86d8,lVar8,DAT_091da200);
  if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_044d3340;
  *(undefined8 *)(lVar5 + 0x70) = uVar23;
  thunk_FUN_03f5d7b8();
  uVar23 = System_String__Concat(lVar5,0);
  puVar16 = (undefined8 *)(param_4 + 0x30);
  uVar7 = System_String__op_Equality(*puVar16,uVar23,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  *puVar16 = uVar23;
  uVar23 = thunk_FUN_03f5d7b8(puVar16,uVar23);
  if (*plVar17 == 0) goto LAB_044d3184;
  lVar8 = CookOrder_Cooking_Implement_CookingMapPresentation__ResolveComposite
                    (*plVar17,local_d4,lVar8);
  uVar23 = extraout_d0_00;
  if (lVar8 == 0) goto LAB_044d3184;
  uVar6 = UnityEngine_Component__get_gameObject(lVar8,0);
  uVar23 = thunk_FUN_03f9944c(DAT_09178bc8);
  FUN_0531612c(uVar23,lVar4,DAT_091e6b18,0);
  uVar23 = FUN_04af36b8(param_7,uVar23,DAT_091ca570);
  lVar4 = FUN_04b049e4(uVar23,DAT_091cae18);
  uVar23 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar23,uVar6,0);
  if ((uVar7 & 1) != 0) {
    plVar17 = (long *)(param_4 + 0x38);
    lVar5 = *plVar17;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar7 & 1) != 0) {
      uVar23 = extraout_d0_01;
      if (*plVar17 == 0) goto LAB_044d3184;
      UnityEngine_GameObject__SetActive(*plVar17,0,0);
      lVar5 = *plVar17;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Object__Destroy(lVar5,0);
    }
    plVar18 = (long *)(param_4 + 0x50);
    lVar5 = *plVar18;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar7 & 1) != 0) {
      uVar23 = extraout_d0_02;
      if (*plVar18 == 0) goto LAB_044d3184;
      lVar5 = UnityEngine_Component__get_gameObject(*plVar18,0);
      uVar23 = extraout_d0_03;
      if (lVar5 == 0) goto LAB_044d3184;
      uVar23 = UnityEngine_GameObject__SetActive(lVar5,0,0);
      if (*plVar18 == 0) goto LAB_044d3184;
      uVar23 = UnityEngine_Component__get_gameObject(*plVar18,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar23,0);
    }
    *(undefined8 *)(param_4 + 0x38) = 0;
    thunk_FUN_03f5d7b8(plVar17,0);
    *(undefined8 *)(param_4 + 0x48) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x48),0);
    *(undefined8 *)(param_4 + 0x50) = 0;
    thunk_FUN_03f5d7b8(plVar18,0);
    *(undefined8 *)(param_4 + 0x40) = uVar6;
    uVar23 = thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x40),uVar6);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_044d3184;
    FUN_057e185c(&local_1b0,*(long *)(param_4 + 0x28),DAT_091acd60);
    uStack_f8 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
    local_f0 = CONCAT44(fStack_19c,fStack_1a0);
    uStack_1a8 = (long **)&local_100;
    local_100 = local_1b0;
    local_1b0 = 0;
    while( true ) {
      uVar7 = FUN_071bd28c(&local_100,DAT_091a2d40);
      if ((uVar7 & 1) == 0) break;
      if (local_f0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(local_f0,0,0);
    }
    FUN_071bd288(&local_100,DAT_091a2d38);
  }
  if (local_d8[0] != '\0') {
    uVar23 = *(undefined8 *)(lVar8 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar23,0);
    if ((uVar7 & 1) != 0) {
      plVar17 = (long *)(param_4 + 0x50);
      lVar5 = *plVar17;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(lVar5,0);
      uVar23 = extraout_d0_04;
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(lVar8 + 0x28);
        uVar23 = UnityEngine_Component__get_transform(param_4,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar8 = FUN_04c35338(uVar6,uVar23,DAT_091d4b70);
        *plVar17 = lVar8;
        uVar23 = thunk_FUN_03f5d7b8(plVar17,lVar8);
        if (*plVar17 == 0) goto LAB_044d3184;
        lVar8 = UnityEngine_Component__get_gameObject(*plVar17,0);
        uVar23 = extraout_d0_05;
        if (lVar8 == 0) goto LAB_044d3184;
        uVar23 = UnityEngine_GameObject__SetActive(lVar8,1,0);
        if (*plVar17 == 0) goto LAB_044d3184;
        lVar8 = UnityEngine_Component__get_transform(*plVar17,0);
        uVar23 = extraout_d0_06;
        if (DAT_09515ce6 == '\0') {
          uVar23 = FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar8 == 0) goto LAB_044d3184;
        puVar12 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        param_3 = (ulong)(uint)puVar12[2];
        uVar23 = UnityEngine_Transform__set_localPosition(*puVar12,puVar12[1],param_3,lVar8,0);
        if (*plVar17 == 0) goto LAB_044d3184;
        plVar18 = (long *)UnityEngine_Component__get_transform(*plVar17,0);
        uVar23 = extraout_d0_07;
        if (plVar18 == (long *)0x0) goto LAB_044d3184;
        if (*plVar18 != DAT_09189c98) goto LAB_044d337c;
        UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar18,0);
        UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar18,0);
        UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar18,0);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        param_2 = (ulong)(uint)(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
        uVar23 = UnityEngine_RectTransform__set_anchoredPosition
                           (**(undefined4 **)(DAT_0918cb68 + 0xb8),param_2,plVar18,0);
      }
      plVar18 = (long *)*plVar17;
      if (plVar18 == (long *)0x0) goto LAB_044d3184;
      uVar23 = (**(code **)(*plVar18 + 0x178))
                         (plVar18,lVar4,local_e0[0],*(undefined8 *)(*plVar18 + 0x180));
      if (local_dc[0] != '\0') {
        if (*plVar17 == 0) goto LAB_044d3184;
        lVar4 = FUN_04a6abf4(*plVar17,DAT_091c57b0);
        uVar23 = extraout_d0_08;
        if (lVar4 == 0) goto LAB_044d3184;
        uVar11 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar11) {
          lVar8 = 0;
          do {
            fVar35 = (float)param_3;
            fVar34 = (float)param_2;
            if (uVar11 <= (uint)lVar8) goto LAB_044d3340;
            plVar18 = *(long **)(lVar4 + 0x20 + lVar8 * 8);
            if (plVar18 == (long *)0x0) goto LAB_044d3184;
            fVar19 = (float)(**(code **)(*plVar18 + 0x298))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
            (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
            (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
            (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
            param_2 = (ulong)(uint)(fVar34 * 0.55);
            param_3 = (ulong)(uint)(fVar35 * 0.55);
            uVar23 = (**(code **)(*plVar18 + 0x2a8))
                               (fVar19 * 0.55,param_2,param_3,plVar18,
                                *(undefined8 *)(*plVar18 + 0x2b0));
            uVar11 = *(uint *)(lVar4 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar11);
        }
      }
      if (*plVar17 != 0) {
        plVar18 = (long *)UnityEngine_Component__get_transform(*plVar17,0);
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187680);
        }
        if ((plVar18 == (long *)0x0) || (*plVar18 == DAT_09189c98)) {
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(plVar18,0);
          return;
        }
LAB_044d337c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar18);
      }
      goto LAB_044d3184;
    }
  }
  plVar17 = (long *)(param_4 + 0x38);
  lVar8 = *plVar17;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar8,0);
  uVar23 = extraout_d0_09;
  if ((uVar7 & 1) == 0) {
    uVar23 = UnityEngine_Component__get_transform(param_4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar8 = FUN_04c35338(uVar6,uVar23,DAT_091d4bc0);
    *plVar17 = lVar8;
    uVar23 = thunk_FUN_03f5d7b8(plVar17,lVar8);
    if (*plVar17 == 0) goto LAB_044d3184;
    lVar8 = UnityEngine_GameObject__get_transform(*plVar17,0);
    uVar23 = extraout_d0_10;
    if (DAT_09515ce6 == '\0') {
      uVar23 = FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar8 == 0) goto LAB_044d3184;
    puVar12 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    param_2 = (ulong)(uint)puVar12[1];
    param_3 = (ulong)(uint)puVar12[2];
    uVar23 = UnityEngine_Transform__set_localPosition(*puVar12,lVar8,0);
    if (*plVar17 == 0) goto LAB_044d3184;
    uVar23 = UnityEngine_GameObject__SetActive(*plVar17,1,0);
    if (*plVar17 == 0) goto LAB_044d3184;
    uVar23 = FUN_04b7c324(*plVar17,DAT_091cd8d0);
    *(undefined8 *)(param_4 + 0x48) = uVar23;
    uVar23 = thunk_FUN_03f5d7b8();
  }
  if (local_d8[0] == '\0') {
    if (lVar4 == 0) goto LAB_044d3184;
    bVar2 = *(int *)(lVar4 + 0x18) != 0;
  }
  else {
    bVar2 = true;
  }
  if (*plVar17 != 0) {
    uVar23 = UnityEngine_GameObject__SetActive(*plVar17,bVar2,0);
    plVar18 = *(long **)(param_4 + 0x48);
    if (plVar18 != (long *)0x0) {
      uVar23 = (**(code **)(*plVar18 + 0x188))
                         (plVar18,lVar4,local_e0[0],*(undefined8 *)(*plVar18 + 400));
      if (local_d8[0] == '\0') {
        return;
      }
      lVar4 = *(long *)(param_4 + 0x20);
      if (lVar4 != 0) {
        iVar15 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar15) {
          uVar23 = System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar15,0);
        }
        if (*plVar17 != 0) {
          uVar23 = FUN_04b7ceb4(*plVar17,1,DAT_091cdbe8);
          if (*(int *)(DAT_0918eed0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eed0);
          }
          puVar16 = *(undefined8 **)(DAT_0918eed0 + 0xb8);
          lVar4 = puVar16[1];
          if (lVar4 == 0) {
            if (*(int *)(DAT_0918eed0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918eed0);
              puVar16 = *(undefined8 **)(DAT_0918eed0 + 0xb8);
            }
            uVar6 = *puVar16;
            lVar4 = thunk_FUN_03f9944c(DAT_09179020);
            FUN_053239c8(lVar4,uVar6,DAT_091e6b08,0);
            plVar17 = (long *)(*(long *)(DAT_0918eed0 + 0xb8) + 8);
            *plVar17 = lVar4;
            thunk_FUN_03f5d7b8(plVar17,lVar4);
          }
          plVar17 = (long *)FUN_04aeab54(uVar23,lVar4,DAT_091ca078);
          uVar23 = extraout_d0_11;
          if (plVar17 != (long *)0x0) {
            lVar4 = *plVar17;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_0917a740) {
                  puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_044d2750;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar16 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917a740,0);
LAB_044d2750:
            plVar17 = (long *)(*(code *)*puVar16)(plVar17,puVar16[1]);
            pplStack_160 = &local_108;
            local_168 = 0;
joined_r0x044d2768:
            do {
              do {
                local_108 = plVar17;
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar4 = *plVar17;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                      puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_044d27dc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar7 != 0);
                }
                puVar16 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185b10,0);
LAB_044d27dc:
                uVar7 = (*(code *)*puVar16)(plVar17,puVar16[1]);
                plVar17 = local_108;
                if ((uVar7 & 1) == 0) {
                  uVar23 = extraout_d0_12;
                  if (local_108 == (long *)0x0) goto LAB_044d2c64;
                  lVar4 = *local_108;
                  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar7 == 0) goto LAB_044d2c08;
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_044d2bf0;
                }
                if (local_108 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar4 = *local_108;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_0917ae20) {
                      puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_044d2840;
                    }
                    uVar7 = uVar7 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar7 != 0);
                }
                puVar16 = (undefined8 *)FUN_03f95da8(local_108,DAT_0917ae20,0);
LAB_044d2840:
                lVar4 = (*(code *)*puVar16)(plVar17,puVar16[1]);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_Renderer__set_enabled(lVar4,0,0);
                lVar8 = UnityEngine_Component__get_gameObject(lVar4,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar7 = UnityEngine_GameObject__get_activeInHierarchy(lVar8,0);
                plVar17 = local_108;
              } while ((uVar7 & 1) == 0);
              uVar23 = UnityEngine_SpriteRenderer__get_sprite(lVar4,0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = UnityEngine_Object__op_Implicit(uVar23,0);
              plVar17 = local_108;
            } while ((uVar7 & 1) == 0);
            lVar8 = UnityEngine_Component__get_transform(param_4,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__get_worldToLocalMatrix(&local_1f0,lVar8,0);
            uStack_1a8._0_4_ = SUB84(uStack_1e8,0);
            uStack_1a8._4_4_ = (float)((ulong)uStack_1e8 >> 0x20);
            local_1b0 = local_1f0;
            local_198 = local_1d8;
            fStack_1a0 = (float)local_1e0;
            fStack_19c = (float)(local_1e0 >> 0x20);
            uStack_188 = uStack_1c8;
            local_190 = local_1d0;
            uStack_178 = uStack_1b8;
            uStack_180 = local_1c0;
            lVar8 = UnityEngine_Component__get_transform(lVar4,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__get_localToWorldMatrix(&local_1f0,lVar8,0);
            plStack_268 = uStack_1e8;
            local_270 = local_1f0;
            uStack_258 = local_1d8;
            uStack_260 = local_1e0;
            uStack_248 = uStack_1c8;
            local_250 = local_1d0;
            uStack_238 = uStack_1b8;
            uStack_240 = local_1c0;
            uStack_228 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
            uStack_220 = CONCAT44(fStack_19c,fStack_1a0);
            local_230 = local_1b0;
            uStack_218 = local_198;
            uStack_208 = uStack_188;
            local_210 = local_190;
            uStack_1f8 = uStack_178;
            uStack_200 = uStack_180;
            uVar29 = local_190;
            FUN_04125f68(&local_1f0,&local_230,&local_270,0);
            uVar10 = local_1c0;
            uVar26 = local_1d0;
            uVar7 = local_1e0;
            lVar8 = local_1f0;
            fVar30 = (float)uVar29;
            fVar34 = (float)uStack_1e8;
            fVar35 = uStack_1e8._4_4_;
            fVar19 = (float)local_1d8;
            fVar33 = local_1d8._4_4_;
            lVar5 = *(long *)(param_4 + 0x20);
            uVar23 = UnityEngine_SpriteRenderer__get_sprite(lVar4,0);
            if (DAT_09515ce6 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515ce6 = '\x01';
            }
            pfVar13 = *(float **)(DAT_0918cbd0 + 0xb8);
            fVar20 = *pfVar13;
            fVar21 = pfVar13[1];
            fVar22 = pfVar13[2];
            if (DAT_09518307 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09518307 = '\x01';
            }
            if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09518307 == '\0')) {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09518307 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Renderer__get_sortingOrder(lVar4,0);
            lVar9 = UnityEngine_Component__get_transform(lVar4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__get_eulerAngles(lVar9,0);
            fVar25 = fVar30;
            lVar9 = UnityEngine_Component__get_transform(param_4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__get_eulerAngles(lVar9,0);
            UnityEngine_SpriteRenderer__get_color(lVar4,0);
            local_288 = 0;
            uStack_280 = 0;
            local_278 = 0;
            FUN_05c2aa48(&local_288,DAT_091b6b10);
            fVar27 = (float)lVar8;
            fVar28 = (float)((ulong)lVar8 >> 0x20);
            uStack_2d8 = uStack_280;
            local_2e0 = local_288;
            local_2d0 = local_278;
            uStack_2a8 = 0;
            local_2b0 = 0;
            uStack_298 = 0;
            local_2a0 = 0;
            plStack_2b8 = (long *)0x0;
            local_2c0 = 0;
            fVar31 = (float)uVar7;
            fVar32 = (float)(uVar7 >> 0x20);
            fVar24 = (float)(uVar10 >> 0x20) +
                     fVar28 * fVar20 + fVar32 * fVar21 + (float)(uVar26 >> 0x20) * fVar22;
            CookOrder_Cooking_Implement_CookingSpriteLayer___ctor
                      (CONCAT44(fVar24,(float)uVar10 +
                                       fVar27 * fVar20 + fVar31 * fVar21 + (float)uVar26 * fVar22),
                       fVar24,SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar34 * fVar34 +
                                   fVar35 * fVar35),
                       SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar19 * fVar19 + fVar33 * fVar33),
                       fVar30 - fVar25,&local_2c0,uVar23,uVar3,&local_2e0,0);
            if (lVar5 != 0) {
              lVar4 = *(long *)(lVar5 + 0x10);
              uStack_a8 = uStack_298;
              local_b0 = local_2a0;
              plStack_c8 = plStack_2b8;
              local_d0 = local_2c0;
              uStack_b8 = uStack_2a8;
              uStack_c0 = local_2b0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar11 = *(uint *)(lVar5 + 0x18);
                param_2 = local_2b0;
                param_3 = local_2a0;
                if (uVar11 < *(uint *)(lVar4 + 0x18)) {
                  lVar4 = lVar4 + (long)(int)uVar11 * 0x30;
                  *(uint *)(lVar5 + 0x18) = uVar11 + 1;
                  *(long **)(lVar4 + 0x28) = plStack_2b8;
                  *(long *)(lVar4 + 0x20) = local_2c0;
                  *(undefined8 *)(lVar4 + 0x38) = uStack_2a8;
                  *(ulong *)(lVar4 + 0x30) = local_2b0;
                  *(ulong *)(lVar4 + 0x48) = uStack_298;
                  *(ulong *)(lVar4 + 0x40) = local_2a0;
                  thunk_FUN_03f5d7b8(lVar4 + 0x20,0);
                  plVar17 = local_108;
                }
                else {
                  uStack_1e8 = plStack_2b8;
                  local_1f0 = local_2c0;
                  local_1d8 = uStack_2a8;
                  local_1e0 = local_2b0;
                  uStack_1c8 = uStack_298;
                  local_1d0 = local_2a0;
                  FUN_0574246c(lVar5,&local_1f0,
                               *(undefined8 *)
                                (*(long *)(*(long *)(DAT_091ac020 + 0x20) + 0xc0) + 0x70));
                  plVar17 = local_108;
                }
                goto joined_r0x044d2768;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
LAB_044d3184:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar23);
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_044d2bf0:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_044d2c58;
    }
  }
LAB_044d2c08:
  puVar16 = (undefined8 *)FUN_03f95da8(local_108,DAT_09185a58,0);
LAB_044d2c58:
  uVar23 = (*(code *)*puVar16)(plVar17,puVar16[1]);
LAB_044d2c64:
  lVar4 = *(long *)(param_4 + 0x20);
  if (lVar4 != 0) {
    iVar15 = 0;
    uVar23 = 0x3f0ccccd;
    do {
      iVar1 = *(int *)(lVar4 + 0x18);
      lVar4 = *(long *)(param_4 + 0x28);
      if (iVar1 <= iVar15) goto joined_r0x044d314c;
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x18) <= iVar15) {
        plVar17 = (long *)FUN_03f5c394(DAT_09180748,1);
        uVar6 = DAT_09200a20;
        if (local_d8[0] == '\0') {
          puVar16 = &DAT_09173220;
        }
        else {
          puVar16 = &DAT_09172998;
        }
        uVar23 = *puVar16;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        lVar4 = System_Type__GetTypeFromHandle(uVar23,0);
        uVar23 = extraout_d0_13;
        if (plVar17 == (long *)0x0) break;
        if (lVar4 != 0) {
          lVar8 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar17 + 0x40));
          if (lVar8 == 0) {
            uVar23 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar23,0);
          }
        }
        if ((int)plVar17[3] == 0) goto LAB_044d3340;
        plVar17[4] = lVar4;
        thunk_FUN_03f5d7b8(plVar17 + 4,lVar4);
        lVar4 = thunk_FUN_03f9944c(DAT_09184b68);
        uVar23 = UnityEngine_GameObject___ctor(lVar4,uVar6,plVar17,0);
        if (lVar4 == 0) break;
        lVar8 = UnityEngine_GameObject__get_transform(lVar4,0);
        uVar6 = UnityEngine_Component__get_transform(param_4,0);
        uVar23 = extraout_d0_14;
        if (lVar8 == 0) break;
        UnityEngine_Transform__SetParent(lVar8,uVar6,0,0);
        if (local_d8[0] == '\0') {
          uVar23 = FUN_04b7c294(lVar4,DAT_091cd7c0);
        }
        else {
          plVar17 = (long *)FUN_04b7c294(lVar4,DAT_091cd688);
          uVar23 = extraout_d0_15;
          if (plVar17 == (long *)0x0) break;
          (**(code **)(*plVar17 + 0x2c8))(plVar17,0,*(undefined8 *)(*plVar17 + 0x2d0));
          uVar23 = UnityEngine_UI_Image__set_preserveAspect(plVar17,1,0);
        }
        lVar8 = DAT_091acd50;
        lVar5 = *(long *)(param_4 + 0x28);
        if (lVar5 == 0) break;
        lVar9 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (uVar11 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar11 + 1;
          plVar17 = (long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
          *plVar17 = lVar4;
          uVar23 = thunk_FUN_03f5d7b8(plVar17,lVar4);
        }
        else {
          uVar23 = FUN_057e0c68(lVar5,lVar4,
                                *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (*(long *)(param_4 + 0x20) == 0) break;
      uVar23 = FUN_057420dc(&local_1b0,*(long *)(param_4 + 0x20),iVar15,DAT_091ac040);
      uVar26 = uStack_188;
      uVar7 = local_190;
      fVar33 = fStack_19c;
      fVar19 = fStack_1a0;
      lVar4 = local_1b0;
      fVar35 = uStack_1a8._4_4_;
      fVar34 = (float)uStack_1a8;
      if (*(long *)(param_4 + 0x28) == 0) break;
      fVar30 = (float)local_198;
      fVar20 = local_198._4_4_;
      iVar1 = uStack_188._4_4_;
      lVar8 = FUN_057e0998(*(long *)(param_4 + 0x28),iVar15,DAT_091acd88);
      uVar23 = extraout_d0_16;
      if (lVar8 == 0) break;
      UnityEngine_GameObject__SetActive(lVar8,1,0);
      lVar5 = UnityEngine_GameObject__get_transform(lVar8,0);
      uVar23 = extraout_d0_17;
      if (lVar5 == 0) break;
      fVar21 = 1.0;
      if (local_d8[0] != '\0') {
        fVar21 = 100.0;
      }
      UnityEngine_Transform__set_localPosition(fVar34 * fVar21,fVar35 * fVar21,0,lVar5,0);
      lVar5 = UnityEngine_GameObject__get_transform(lVar8,0);
      local_1b0 = 0;
      uStack_1a8._0_4_ = fVar30 * 0.017453292;
      uVar23 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_1b0,0);
      if (lVar5 == 0) break;
      UnityEngine_Transform__set_localRotation(lVar5,0);
      lVar5 = UnityEngine_GameObject__get_transform(lVar8,0);
      uVar23 = extraout_d0_18;
      if (lVar5 == 0) break;
      UnityEngine_Transform__set_localScale(fVar19,fVar33,0x3f800000,lVar5,0);
      bVar2 = local_dc[0] == '\0';
      param_2 = CONCAT44((float)(uVar7 >> 0x20) * 0.55,(float)uVar7 * 0.55);
      if (!bVar2) {
        fVar20 = fVar20 * 0.55;
      }
      param_2 = param_2 ^ (param_2 ^ uVar7) &
                          CONCAT44(-(uint)((int)((uint)bVar2 << 0x1f) < 0),
                                   -(uint)((int)((uint)bVar2 << 0x1f) < 0));
      if (local_d8[0] == '\0') {
        lVar8 = FUN_04b7c324(lVar8,DAT_091cda68);
        uVar23 = extraout_d0_21;
        if (lVar8 == 0) break;
        UnityEngine_SpriteRenderer__set_sprite(lVar8,lVar4,0);
        param_3 = param_2 >> 0x20;
        UnityEngine_SpriteRenderer__set_color(fVar20,param_2,param_3,uVar26 & 0xffffffff,lVar8,0);
        uVar23 = UnityEngine_Renderer__set_sortingOrder(lVar8,iVar1 + 10,0);
      }
      else {
        plVar17 = (long *)FUN_04b7c324(lVar8,DAT_091cd978);
        uVar23 = extraout_d0_19;
        if (plVar17 == (long *)0x0) break;
        UnityEngine_UI_Image__set_sprite(plVar17,lVar4,0);
        param_3 = param_2 >> 0x20;
        (**(code **)(*plVar17 + 0x2a8))
                  (fVar20,param_2,param_3,uVar26 & 0xffffffff,plVar17,
                   *(undefined8 *)(*plVar17 + 0x2b0));
        lVar8 = UnityEngine_UI_Graphic__get_rectTransform(plVar17,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar4,0);
        if ((uVar7 & 1) == 0) {
          if (DAT_09515ce9 == '\0') {
            FUN_03f5c2a4(&DAT_0918cb68);
            DAT_09515ce9 = '\x01';
          }
          uVar23 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 8);
        }
        else {
          uVar23 = extraout_d0_20;
          if (lVar4 == 0) break;
          UnityEngine_Sprite__get_bounds(&local_1b0,lVar4,0);
          uVar23 = CONCAT44(fStack_1a0 + fStack_1a0,uStack_1a8._4_4_ + uStack_1a8._4_4_);
        }
        if (lVar8 == 0) break;
        param_2 = (ulong)(uint)((float)((ulong)uVar23 >> 0x20) * 100.0);
        uVar23 = UnityEngine_RectTransform__set_sizeDelta(lVar8,0);
      }
      lVar4 = *(long *)(param_4 + 0x20);
      iVar15 = iVar15 + 1;
    } while (lVar4 != 0);
  }
  goto LAB_044d3184;
joined_r0x044d314c:
  if (lVar4 == 0) goto LAB_044d3184;
  fVar35 = (float)param_3;
  fVar34 = (float)param_2;
  if (*(int *)(lVar4 + 0x18) <= iVar1) {
    if (local_d8[0] == '\0') {
      return;
    }
    lVar4 = *(long *)(param_4 + 0x20);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) < 1) {
        return;
      }
      FUN_057420dc(&local_1b0,lVar4,0,DAT_091ac040);
      plVar17 = (long *)uStack_1a8;
      uVar23 = FUN_043b2d5c(0);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar35 = fVar35 * 0.5;
        fVar33 = (float)uVar23 * 0.5;
        fVar34 = fVar34 * 0.5;
        FUN_057432a4(&local_1b0,*(long *)(param_4 + 0x20),DAT_091ac030);
        plStack_148 = (long *)uStack_1a8;
        local_140 = CONCAT44(fStack_19c,fStack_1a0);
        plStack_2b8 = &local_150;
        fVar19 = 0.0;
        local_150 = local_1b0;
        local_138 = local_198;
        uStack_128 = uStack_188;
        local_130 = local_190;
        uStack_118 = uStack_178;
        uStack_120 = uStack_180;
        local_2c0 = 0;
        uVar7 = uStack_180;
        while( true ) {
          fVar20 = (float)((ulong)plVar17 >> 0x20);
          fVar30 = SUB84(plVar17,0);
          uVar10 = FUN_07199e78(&local_150,DAT_091a27b8);
          uVar26 = local_130;
          uVar23 = local_138;
          lVar4 = local_140;
          if ((uVar10 & 1) == 0) break;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar10 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Sprite__get_bounds(&local_1b0,lVar4,0);
            uVar7 = CONCAT44(fVar20 - fVar34,fVar30 - fVar33);
            fVar22 = (fStack_19c + fStack_19c) * 0.0 * 0.5;
            fVar21 = (float)uVar26 * (uStack_1a8._4_4_ + uStack_1a8._4_4_) * 0.5;
            fVar24 = (float)(uVar26 >> 0x20) * (fStack_1a0 + fStack_1a0) * 0.5;
            fVar28 = 0.0 - fVar22;
            fVar22 = fVar22 + 0.0;
            fVar25 = (float)uVar23;
            fVar31 = fVar25 - fVar21;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar32 = fVar27 - fVar24;
            fVar25 = fVar25 + fVar21;
            fVar27 = fVar27 + fVar24;
            uVar26 = CONCAT44(fVar27,fVar25);
            fVar21 = fVar19 - fVar35;
            if (fVar28 <= fVar19 - fVar35) {
              fVar21 = fVar28;
            }
            uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(fVar32,fVar31)) &
                            ~CONCAT44(-(uint)(fVar20 - fVar34 < fVar32),
                                      -(uint)(fVar30 - fVar33 < fVar31));
            fVar24 = fVar19 + fVar35;
            if (fVar19 + fVar35 <= fVar28) {
              fVar24 = fVar28;
            }
            uVar10 = CONCAT44(fVar32,fVar31) ^
                     (CONCAT44(fVar32,fVar31) ^ CONCAT44(fVar20 + fVar34,fVar30 + fVar33)) &
                     CONCAT44(-(uint)(fVar32 < fVar20 + fVar34),-(uint)(fVar31 < fVar30 + fVar33));
            fVar35 = (float)uVar7;
            fVar30 = (float)(uVar7 >> 0x20);
            fVar34 = (fVar24 - fVar21) * 0.5;
            fVar33 = ((float)uVar10 - fVar35) * 0.5;
            fVar20 = ((float)(uVar10 >> 0x20) - fVar30) * 0.5;
            fVar35 = fVar35 + fVar33;
            fVar30 = fVar30 + fVar20;
            fVar19 = (fVar21 + fVar34) - fVar34;
            fVar34 = fVar34 + fVar21 + fVar34;
            fVar21 = fVar35 - fVar33;
            fVar24 = fVar30 - fVar20;
            fVar33 = fVar33 + fVar35;
            fVar20 = fVar20 + fVar30;
            if (fVar22 <= fVar19) {
              fVar19 = fVar22;
            }
            if (fVar34 <= fVar22) {
              fVar34 = fVar22;
            }
            uVar7 = uVar26 ^ (uVar26 ^ CONCAT44(fVar24,fVar21)) &
                             CONCAT44(-(uint)(fVar24 < fVar27),-(uint)(fVar21 < fVar25));
            uVar26 = uVar26 ^ (uVar26 ^ CONCAT44(fVar20,fVar33)) &
                              CONCAT44(-(uint)(fVar27 < fVar20),-(uint)(fVar25 < fVar33));
            fVar30 = (float)(uVar7 >> 0x20);
            fVar35 = (fVar34 - fVar19) * 0.5;
            fVar33 = ((float)uVar26 - (float)uVar7) * 0.5;
            fVar34 = ((float)(uVar26 >> 0x20) - fVar30) * 0.5;
            fVar19 = fVar19 + fVar35;
            plVar17 = (long *)CONCAT44(fVar30 + fVar34,(float)uVar7 + fVar33);
          }
        }
        FUN_039b9e50(&local_2c0);
        uVar23 = *(undefined8 *)(param_4 + 0x28);
        fVar35 = fVar33 + fVar33;
        if (fVar33 + fVar33 <= fVar34 + fVar34) {
          fVar35 = fVar34 + fVar34;
        }
        fVar34 = 0.01;
        if (0.01 <= fVar35) {
          fVar34 = fVar35;
        }
        if (*(int *)(DAT_0918eed0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar16 = *(undefined8 **)(DAT_0918eed0 + 0xb8);
        lVar4 = puVar16[2];
        if (lVar4 == 0) {
          if (*(int *)(DAT_0918eed0 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar16 = *(undefined8 **)(DAT_0918eed0 + 0xb8);
          }
          uVar6 = *puVar16;
          lVar4 = thunk_FUN_03f9944c(DAT_09178940);
          FUN_05322d94(lVar4,uVar6,DAT_091e6b10,0);
          plVar17 = (long *)(*(long *)(DAT_0918eed0 + 0xb8) + 0x10);
          *plVar17 = lVar4;
          thunk_FUN_03f5d7b8(plVar17,lVar4);
        }
        lVar4 = FUN_04b0cafc(uVar23,lVar4,DAT_091cb490);
        uVar23 = extraout_d0_23;
        if (lVar4 != 0) {
          fVar34 = 1.3 / fVar34;
          local_158 = (long *)FUN_039afee4(0,DAT_0917a4f0,lVar4);
          uVar26 = 0x42c80000;
          uStack_1a8 = &local_158;
          local_1b0 = 0;
          do {
            plVar17 = local_158;
            fVar33 = (float)uVar7;
            fVar35 = (float)uVar26;
            if (local_158 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *local_158;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                  puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_044d357c;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar16 = (undefined8 *)FUN_03f95da8(local_158,DAT_09185b10,0);
LAB_044d357c:
            uVar7 = (*(code *)*puVar16)(plVar17,puVar16[1]);
            plVar17 = local_158;
            if ((uVar7 & 1) == 0) {
              FUN_039aeef4(&local_1b0);
              return;
            }
            if (local_158 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *local_158;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_0917aba0) {
                  puVar16 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_044d35e0;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar16 = (undefined8 *)FUN_03f95da8(local_158,DAT_0917aba0,0);
LAB_044d35e0:
            lVar4 = (*(code *)*puVar16)(plVar17,puVar16[1]);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = UnityEngine_GameObject__get_transform(lVar4,0);
            lVar5 = UnityEngine_GameObject__get_transform(lVar4,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar21 = (float)UnityEngine_Transform__get_localPosition(lVar5,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar35 = (fVar35 - fVar20 * 100.0) * fVar34;
            fVar33 = fVar34 * (fVar33 - fVar19 * 100.0);
            UnityEngine_Transform__set_localPosition
                      (CONCAT44(fVar35,(fVar21 - fVar30 * 100.0) * fVar34),fVar35,fVar33,lVar8,0);
            lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar21 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
            uVar26 = (ulong)(uint)(fVar34 * fVar35);
            uVar7 = (ulong)(uint)(fVar34 * fVar33);
            UnityEngine_Transform__set_localScale(fVar34 * fVar21,lVar4,0);
          } while( true );
        }
      }
    }
    goto LAB_044d3184;
  }
  lVar4 = FUN_057e0998(lVar4,iVar1,DAT_091acd88);
  uVar23 = extraout_d0_22;
  if (lVar4 == 0) goto LAB_044d3184;
  uVar23 = UnityEngine_GameObject__SetActive(lVar4,0,0);
  lVar4 = *(long *)(param_4 + 0x28);
  iVar1 = iVar1 + 1;
  goto joined_r0x044d314c;
}

