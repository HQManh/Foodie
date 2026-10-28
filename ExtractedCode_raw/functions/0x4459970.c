// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RouteProcess
// address: 0x4459970
// body: available
// range: 0x4459970-0x445aa47 inclusive
// range: 0x445aacc-0x445aacf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445aa2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445aa44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445aacc to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__RouteProcess
               (char *param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
               undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int extraout_var;
  undefined8 extraout_x1;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  int local_170;
  int local_16c;
  int local_15c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  char local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_b0 = param_5;
  local_a8 = param_6;
  if ((DAT_0951804a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c800);
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_091c92d8);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_091c9a18);
    FUN_03f5c2a4(&DAT_091ca0d0);
    FUN_03f5c2a4(&DAT_091cb0c0);
    FUN_03f5c2a4(&DAT_091a2020);
    FUN_03f5c2a4(&DAT_091a2028);
    FUN_03f5c2a4(&DAT_091a2030);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091782f0);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_091aab70);
    FUN_03f5c2a4(&DAT_091aab78);
    FUN_03f5c2a4(&DAT_091aab68);
    FUN_03f5c2a4(&DAT_091b2560);
    FUN_03f5c2a4(&DAT_091aab80);
    FUN_03f5c2a4(&DAT_091aab88);
    FUN_03f5c2a4(&DAT_0917bb60);
    FUN_03f5c2a4(&DAT_091b76b8);
    FUN_03f5c2a4(&DAT_091b6978);
    FUN_03f5c2a4(&DAT_091b76c8);
    FUN_03f5c2a4(&DAT_091b6980);
    FUN_03f5c2a4(&DAT_091b6968);
    FUN_03f5c2a4(&DAT_091b6970);
    FUN_03f5c2a4(&DAT_091b6988);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_091e79a0);
    FUN_03f5c2a4(&DAT_091e79a8);
    FUN_03f5c2a4(&DAT_091e79b0);
    FUN_03f5c2a4(&DAT_091e7bc8);
    FUN_03f5c2a4(&DAT_091e7bd0);
    FUN_03f5c2a4(&DAT_091e7bd8);
    FUN_03f5c2a4(&DAT_0918f3b0);
    FUN_03f5c2a4(&DAT_091e7be0);
    FUN_03f5c2a4(&DAT_0918f3b8);
    FUN_03f5c2a4(&DAT_091e7be8);
    FUN_03f5c2a4(&DAT_0918f3c0);
    FUN_03f5c2a4(&DAT_091e7bf0);
    FUN_03f5c2a4(&DAT_0918f3c8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    FUN_03f5c2a4(&DAT_091bedc8);
    FUN_03f5c2a4(&DAT_091beee0);
    DAT_0951804a = 1;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  lVar10 = thunk_FUN_03f9944c(DAT_0918f3b0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass149_0___ctor(lVar10,0);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar10 + 0x10),param_2);
    *(uint *)(lVar10 + 0x18) = param_3;
    if ((*(long *)(param_2 + 0x78) != 0) &&
       (lVar19 = *(long *)(*(long *)(param_2 + 0x78) + 0x28), lVar19 != 0)) {
      if (*(uint *)(lVar19 + 0x18) <= param_3) {
LAB_0445aa30:
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_0445aacc;
      }
      lVar19 = *(long *)(lVar19 + (long)(int)param_3 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_0445aa18;
      if (*(long *)(lVar19 + 0x18) == 0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        if (*(long *)(lVar3 + 0x28) == local_68) {
          param_1[0] = '\0';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          param_1[8] = '\0';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          param_1[0x10] = '\0';
          param_1[0x11] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
          return;
        }
        goto LAB_0445aacc;
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      lVar11 = thunk_FUN_03f9944c(DAT_0917bb60);
      FUN_056bb2c0(lVar11,DAT_091aab68);
      lVar12 = thunk_FUN_03f9944c(DAT_0917bb60);
      FUN_056bb2c0(lVar12,DAT_091aab68);
      if (*(int *)(lVar19 + 0x18) < 1) {
LAB_0445a728:
        if (lVar11 == 0) goto LAB_0445aa18;
        if (0 < *(int *)(lVar11 + 0x18)) {
          uVar18 = thunk_FUN_03f9944c(DAT_091782f0);
          FUN_0530e66c(uVar18,lVar10,DAT_091e7bc8,0);
          if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar18 = FUN_04aeadf8(lVar11,uVar18,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca0d0);
          auVar26 = FUN_04adf58c(uVar18,DAT_091c9a18);
          goto LAB_0445a7b4;
        }
        CookingGraph_CookingLevelSimulation__ToolBoundEntry
                  (&local_a0,param_2,*(undefined4 *)(lVar10 + 0x18),param_4,local_b0,local_a8);
        local_80 = CONCAT17(uStack_98,uStack_9f);
        uStack_78 = uStack_97;
        uStack_71 = uStack_90;
        uStack_70 = uStack_8f;
        if (local_a0 == '\0') {
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) == 0) {
              local_e0 = 0;
              uStack_d8 = 0;
              local_d0 = 0;
              param_1[8] = '\0';
              param_1[9] = '\0';
              param_1[10] = '\0';
              param_1[0xb] = '\0';
              param_1[0xc] = '\0';
              param_1[0xd] = '\0';
              param_1[0xe] = '\0';
              param_1[0xf] = '\0';
              param_1[0x10] = '\0';
              param_1[0x11] = '\0';
              param_1[0x12] = '\0';
              param_1[0x13] = '\0';
              param_1[0x14] = '\0';
              param_1[0x15] = '\0';
              param_1[0x16] = '\0';
              param_1[0x17] = '\0';
              param_1[0] = '\0';
              param_1[1] = '\0';
              param_1[2] = '\0';
              param_1[3] = '\0';
              param_1[4] = '\0';
              param_1[5] = '\0';
              param_1[6] = '\0';
              param_1[7] = '\0';
              goto LAB_0445a7e4;
            }
            uVar18 = thunk_FUN_03f9944c(DAT_091782f0);
            FUN_0530e66c(uVar18,lVar10,DAT_091e7bd0,0);
            if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar18 = FUN_04aeadf8(lVar12,uVar18,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca0d0)
            ;
            lVar10 = FUN_04b08478(uVar18,DAT_091cb0c0);
            if (lVar10 != 0) {
              FUN_056bc7b0(&local_120,lVar10,DAT_091aab78);
              do {
                uVar23 = FUN_07188bd8(&local_120,DAT_091a2028);
                if ((uVar23 & 1) == 0) {
                  FUN_07188bd4(&local_120,DAT_091a2020);
                  auVar26 = FUN_056bb858(lVar10,0,DAT_091aab88);
                  goto LAB_0445a7b4;
                }
              } while ((int)local_108 < 0);
              auVar26 = CookingGraph_CookingLevelSimulation__<RouteProcess>g__Route_149_0(local_110)
              ;
              local_a0 = '\0';
              uStack_9f = 0;
              uStack_98 = 0;
              uStack_97 = 0;
              uStack_90 = 0;
              uStack_8f = 0;
              FUN_05c3c1c8(&local_a0,auVar26._0_8_,auVar26._8_8_,DAT_091b76b8);
              uStack_d8 = CONCAT71(uStack_97,uStack_98);
              local_e0 = CONCAT71(uStack_9f,local_a0);
              local_d0 = CONCAT71(uStack_8f,uStack_90);
              FUN_07188bd4(&local_120,DAT_091a2020);
              *(undefined8 *)(param_1 + 8) = uStack_d8;
              *(undefined8 *)param_1 = local_e0;
              uVar18 = local_d0;
              goto LAB_0445a890;
            }
          }
          goto LAB_0445aa18;
        }
        *param_1 = local_a0;
        *(ulong *)(param_1 + 9) = CONCAT17(uStack_90,uStack_97);
        *(undefined8 *)(param_1 + 1) = local_80;
        uVar18 = CONCAT71(uStack_8f,uStack_90);
LAB_0445a890:
        *(undefined8 *)(param_1 + 0x10) = uVar18;
      }
      else {
        uVar23 = 0;
        do {
          lVar13 = thunk_FUN_03f9944c(DAT_0918f3b8);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass149_1___ctor(lVar13,0);
          if (lVar13 == 0) goto LAB_0445aa18;
          *(long *)(lVar13 + 0x18) = lVar10;
          thunk_FUN_03f5d7b8((long *)(lVar13 + 0x18),lVar10);
          if (*(uint *)(lVar19 + 0x18) <= uVar23) goto LAB_0445aa30;
          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar19 + uVar23 * 8 + 0x20);
          thunk_FUN_03f5d7b8();
          lVar14 = thunk_FUN_03f9944c(DAT_0918f3c0);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass149_2___ctor(lVar14,0);
          if (lVar14 == 0) goto LAB_0445aa18;
          plVar25 = (long *)(lVar14 + 0x18);
          *plVar25 = lVar13;
          thunk_FUN_03f5d7b8(plVar25,lVar13);
          lVar13 = *plVar25;
          if ((lVar13 == 0) || (lVar15 = *(long *)(lVar13 + 0x10), lVar15 == 0)) goto LAB_0445aa18;
          if (*(long *)(lVar15 + 0x20) == 0) {
            if (*(char *)(lVar15 + 0x1d) != '\0') {
              if (*(long *)(lVar15 + 0x30) == 0) goto LAB_0445aa18;
              if (1 < *(int *)(*(long *)(lVar15 + 0x30) + 0x18)) goto LAB_04459d78;
            }
            *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(lVar15 + 0x10);
            if (*(long *)(lVar13 + 0x18) == 0) goto LAB_0445aa18;
            uVar7 = CookingGraph_CookingLevelSimulation__Point
                              (lVar15,*(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x18));
            *(undefined4 *)(lVar14 + 0x14) = uVar7;
            lVar13 = thunk_FUN_03f9944c(DAT_0918f3c8);
            CookingGraph_CookingLevelSimulation_<>c__DisplayClass149_3___ctor(lVar13,0);
            if (lVar13 == 0) goto LAB_0445aa18;
            plVar22 = (long *)(lVar13 + 0x18);
            *plVar22 = lVar14;
            thunk_FUN_03f5d7b8(plVar22,lVar14);
            *(undefined4 *)(lVar13 + 0x10) = 0;
            lVar14 = *(long *)(param_2 + 0x78);
            if (lVar14 == 0) goto LAB_0445aa18;
            iVar9 = 0;
            local_15c = -1;
            local_16c = -1;
            bVar4 = false;
            local_170 = -1;
            while( true ) {
              lVar15 = *plVar22;
              if ((lVar15 == 0) || (lVar21 = *(long *)(lVar14 + 0x20), lVar21 == 0))
              goto LAB_0445aa18;
              if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar15 + 0x10)) goto LAB_0445aa30;
              lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(lVar15 + 0x10) * 8 + 0x20);
              if (lVar21 == 0) goto LAB_0445aa18;
              if (*(int *)(lVar21 + 0x18) <= iVar9) break;
              if ((*(long *)(lVar15 + 0x18) == 0) ||
                 (lVar14 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar14 == 0))
              goto LAB_0445aa18;
              uVar24 = *(undefined8 *)(lVar14 + 0x30);
              uVar18 = thunk_FUN_03f9944c(DAT_09178290);
              FUN_0530cf38(uVar18,lVar13,DAT_091e7bf0,0);
              uVar16 = FUN_04ab46c8(uVar24,uVar18,DAT_091c9390);
              iVar9 = local_170;
              iVar5 = local_16c;
              iVar6 = local_15c;
              if ((uVar16 & 1) == 0) {
                if (((*(long *)(param_2 + 0x78) == 0) || (lVar14 = *plVar22, lVar14 == 0)) ||
                   (lVar15 = *(long *)(*(long *)(param_2 + 0x78) + 0x20), lVar15 == 0))
                goto LAB_0445aa18;
                if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar14 + 0x10)) goto LAB_0445aa30;
                lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(lVar14 + 0x10) * 8 + 0x20);
                if (lVar15 == 0) goto LAB_0445aa18;
                iVar8 = CookingGraph_CookingGraphIndex_Tool__Flat
                                  (lVar15,*(undefined4 *)(lVar14 + 0x14),
                                   *(undefined4 *)(lVar13 + 0x10),0);
                if (*(long *)(lVar13 + 0x18) == 0) goto LAB_0445aa18;
                CookingGraph_CookingLevelSimulation__ToolAddress
                          (&local_f8,*(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x10),iVar8);
                if (((param_7 & 1) == 0) || ((char)local_b0 == '\0')) {
LAB_04459f58:
                  uStack_138 = uStack_f0;
                  local_140 = local_f8;
                  local_130 = local_e8;
                  uVar16 = CookingGraph_CookingLevelSimulation__Occupied(param_2,&local_140);
                  if ((uVar16 & 1) == 0) {
                    if (*plVar22 == 0) goto LAB_0445aa18;
                    lVar14 = *(long *)(param_2 + 0xb0);
                    local_a0 = '\0';
                    uStack_9f = 0;
                    FUN_066c1fdc(&local_a0,*(undefined4 *)(*plVar22 + 0x10),
                                 *(undefined4 *)(lVar13 + 0x10),DAT_091bec98);
                    if (lVar14 == 0) goto LAB_0445aa18;
                    uVar16 = FUN_06e4c14c(lVar14,CONCAT71(uStack_9f,local_a0),DAT_0919c190);
                    if ((uVar16 & 1) == 0) {
                      uVar7 = 0;
                      goto LAB_04459fc8;
                    }
                  }
                }
                else {
                  uVar18 = FUN_05c25e54(&local_b0,DAT_091b6970);
                  if (*plVar22 == 0) goto LAB_0445aa18;
                  if ((*(int *)(*plVar22 + 0x10) != (int)uVar18) ||
                     (*(int *)(lVar13 + 0x10) != (int)((ulong)uVar18 >> 0x20))) goto LAB_04459f58;
                  uVar7 = 1;
LAB_04459fc8:
                  if (param_4 != 0) {
                    if (*(long *)(param_4 + 0x10) == 0) goto LAB_0445aa18;
                    uStack_98 = (undefined1)uStack_f0;
                    uStack_97 = (undefined7)((ulong)uStack_f0 >> 8);
                    local_a0 = (char)local_f8;
                    uStack_9f = (undefined7)((ulong)local_f8 >> 8);
                    uStack_90 = (undefined1)local_e8;
                    uStack_8f = (undefined7)((ulong)local_e8 >> 8);
                    uVar16 = FUN_06e8248c(*(long *)(param_4 + 0x10),&local_a0,DAT_0919c800);
                    if ((uVar16 & 1) != 0) goto LAB_0445a470;
                  }
                  if ((*plVar22 == 0) ||
                     (lVar14 = CookingGraph_CookingLevelSimulation__LaneOccupants
                                         (param_2,*(undefined4 *)(*plVar22 + 0x10),
                                          *(undefined4 *)(lVar13 + 0x10),param_4,uVar7), lVar14 == 0
                     )) goto LAB_0445aa18;
                  if (*(int *)(lVar14 + 0x18) == 0) {
                    iVar6 = iVar8;
                    if (-1 < local_15c) {
                      iVar6 = local_15c;
                    }
                  }
                  else {
                    lVar15 = *plVar22;
                    if (lVar15 == 0) goto LAB_0445aa18;
                    lVar21 = *(long *)(lVar15 + 0x20);
                    if (lVar21 == 0) {
                      lVar21 = thunk_FUN_03f9944c(DAT_091793e8);
                      FUN_0532a53c(lVar21,lVar15,DAT_091e7be8,0);
                      *(long *)(lVar15 + 0x20) = lVar21;
                      thunk_FUN_03f5d7b8((long *)(lVar15 + 0x20),lVar21);
                    }
                    uVar16 = FUN_04ab36f8(lVar14,lVar21,DAT_091c92d8);
                    if ((uVar16 & 1) != 0) {
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      lVar15 = puVar20[0x84];
                      if (lVar15 == 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        }
                        uVar18 = *puVar20;
                        lVar15 = thunk_FUN_03f9944c(DAT_091793e8);
                        FUN_0532a53c(lVar15,uVar18,DAT_091e79a0,0);
                        lVar21 = *(long *)(DAT_0918f298 + 0xb8);
                        *(long *)(lVar21 + 0x420) = lVar15;
                        thunk_FUN_03f5d7b8(lVar21 + 0x420,lVar15);
                      }
                      uVar17 = FUN_04ab36f8(lVar14,lVar15,DAT_091c92d8);
                      if ((uVar17 & 1) != 0) {
                        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                        lVar15 = puVar20[0x85];
                        if (lVar15 == 0) {
                          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                            FUN_03f5c424();
                            puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                          }
                          uVar18 = *puVar20;
                          lVar15 = thunk_FUN_03f9944c(DAT_091793e8);
                          FUN_0532a53c(lVar15,uVar18,DAT_091e79a8,0);
                          lVar21 = *(long *)(DAT_0918f298 + 0xb8);
                          *(long *)(lVar21 + 0x428) = lVar15;
                          thunk_FUN_03f5d7b8(lVar21 + 0x428,lVar15);
                        }
                        uVar16 = FUN_04ab36f8(lVar14,lVar15,DAT_091c92d8);
                        if ((uVar16 & 1) == 0) {
                          iVar5 = iVar8;
                          if (-1 < local_16c) {
                            iVar5 = local_16c;
                          }
                        }
                        else {
                          bVar4 = true;
                        }
                        goto LAB_0445a470;
                      }
                    }
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    lVar15 = puVar20[0x86];
                    if (lVar15 == 0) {
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar20 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      }
                      uVar18 = *puVar20;
                      lVar15 = thunk_FUN_03f9944c(DAT_091793e8);
                      FUN_0532a53c(lVar15,uVar18,DAT_091e79b0,0);
                      lVar21 = *(long *)(DAT_0918f298 + 0xb8);
                      *(long *)(lVar21 + 0x430) = lVar15;
                      thunk_FUN_03f5d7b8(lVar21 + 0x430,lVar15);
                    }
                    uVar17 = FUN_04ab36f8(lVar14,lVar15,DAT_091c92d8);
                    if (((uVar17 & 1) == 0) && ((uVar16 & 1) != 0)) {
                      if ((*plVar22 == 0) ||
                         (((lVar15 = *(long *)(*plVar22 + 0x18), lVar15 == 0 ||
                           (*(long *)(lVar15 + 0x10) == 0)) ||
                          (lVar21 = *(long *)(*(long *)(lVar15 + 0x10) + 0x30), lVar21 == 0))))
                      goto LAB_0445aa18;
                      uVar1 = *(uint *)(lVar14 + 0x18);
                      iVar2 = *(int *)(lVar21 + 0x18);
                      lVar21 = *(long *)(lVar15 + 0x20);
                      if (lVar21 == 0) {
                        lVar21 = thunk_FUN_03f9944c(DAT_091793e8);
                        FUN_0532a53c(lVar21,lVar15,DAT_091e7be0,0);
                        *(long *)(lVar15 + 0x20) = lVar21;
                        thunk_FUN_03f5d7b8((long *)(lVar15 + 0x20),lVar21);
                      }
                      iVar2 = iVar2 + ~uVar1;
                      uVar16 = FUN_04ab36f8(lVar14,lVar21,DAT_091c92d8);
                      if ((uVar16 & 1) == 0) {
                        if ((local_170 < 0) && (iVar2 == 0)) {
                          if (*plVar22 == 0) goto LAB_0445aa18;
                          uVar16 = CookingGraph_CookingLevelSimulation__LaneMayHandOver
                                             (param_2,*(undefined4 *)(*plVar22 + 0x10),lVar14);
                          iVar9 = iVar8;
                          if ((uVar16 & 1) == 0) {
                            iVar9 = local_170;
                          }
                        }
                      }
                      else if (((char)local_c8 == '\0') ||
                              (FUN_05c26248(&local_c8,DAT_091b6988), iVar2 < extraout_var)) {
                        if ((*plVar22 == 0) || (lVar14 = *(long *)(*plVar22 + 0x18), lVar14 == 0))
                        goto LAB_0445aa18;
                        local_a0 = '\0';
                        uStack_9f = 0;
                        uStack_98 = 0;
                        uStack_97 = 0;
                        FUN_066eb114(&local_a0,*(undefined8 *)(lVar14 + 0x10),iVar8,iVar2,
                                     DAT_091beee0);
                        FUN_05c26218(&local_c8,CONCAT71(uStack_9f,local_a0),
                                     CONCAT71(uStack_97,uStack_98),DAT_091b6978);
                      }
                    }
                  }
                }
              }
LAB_0445a470:
              local_15c = iVar6;
              local_16c = iVar5;
              local_170 = iVar9;
              iVar9 = *(int *)(lVar13 + 0x10) + 1;
              *(int *)(lVar13 + 0x10) = iVar9;
              lVar14 = *(long *)(param_2 + 0x78);
              if (lVar14 == 0) goto LAB_0445aa18;
            }
            if ((*plVar25 == 0) || (lVar13 = *(long *)(*plVar25 + 0x18), lVar13 == 0))
            goto LAB_0445aa18;
            iVar9 = CookingGraph_CookingGraphIndex__Uses(lVar14,*(undefined4 *)(lVar13 + 0x18),0);
            lVar13 = *plVar25;
            if (iVar9 == 1) {
              if (lVar13 == 0) goto LAB_0445aa18;
              uVar16 = CookingGraph_CookingLevelSimulation__AutoStep
                                 (param_2,*(undefined8 *)(lVar13 + 0x10));
              if ((uVar16 & 1) == 0) goto LAB_0445a558;
            }
            else {
              if (lVar13 == 0) goto LAB_0445aa18;
              uVar16 = CookingGraph_CookingLevelSimulation__AutoStep
                                 (param_2,*(undefined8 *)(lVar13 + 0x10));
              if ((uVar16 & 1) != 0) {
                lVar13 = *plVar25;
                if (((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) ||
                   (lVar14 = *(long *)(lVar13 + 0x18), lVar14 == 0)) goto LAB_0445aa18;
                uVar18 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x30);
                lVar13 = *(long *)(lVar14 + 0x20);
                if (lVar13 == 0) {
                  lVar13 = thunk_FUN_03f9944c(DAT_09178290);
                  FUN_0530cf38(lVar13,lVar14,DAT_091e7bd8,0);
                  *(long *)(lVar14 + 0x20) = lVar13;
                  thunk_FUN_03f5d7b8((long *)(lVar14 + 0x20),lVar13);
                }
                uVar16 = FUN_04ab46c8(uVar18,lVar13,DAT_091c9390);
                if ((uVar16 & 1) != 0) goto LAB_04459d78;
              }
LAB_0445a558:
              if (*plVar25 == 0) goto LAB_0445aa18;
              uVar16 = CookingGraph_CookingLevelSimulation__OutputNeeded
                                 (param_2,*(undefined8 *)(*plVar25 + 0x10),param_4,local_b0);
              if ((uVar16 & 1) == 0) goto LAB_04459d78;
            }
            if (*plVar25 == 0) goto LAB_0445aa18;
            if (bVar4) {
              local_15c = -1;
            }
            if (-1 < local_16c) {
              local_15c = local_16c;
            }
            local_a0 = '\0';
            uStack_9f = 0;
            uStack_98 = 0;
            uStack_97 = 0;
            FUN_066ce094(&local_a0,*(undefined8 *)(*plVar25 + 0x10),local_15c,DAT_091bedc8);
            lVar13 = DAT_091aab70;
            if (lVar12 == 0) goto LAB_0445aa18;
            lVar14 = *(long *)(lVar12 + 0x10);
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_0445aa18;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              puVar20 = (undefined8 *)(lVar14 + 0x20);
              *puVar20 = CONCAT71(uStack_9f,local_a0);
              *(ulong *)(lVar14 + 0x28) = CONCAT71(uStack_97,uStack_98);
              thunk_FUN_03f5d7b8(puVar20,0);
            }
            else {
              FUN_056bbb6c(lVar12,CONCAT71(uStack_9f,local_a0),CONCAT71(uStack_97,uStack_98),
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (-1 < local_170) {
              if (*plVar25 == 0) goto LAB_0445aa18;
              local_a0 = '\0';
              uStack_9f = 0;
              uStack_98 = 0;
              uStack_97 = 0;
              FUN_066ce094(&local_a0,*(undefined8 *)(*plVar25 + 0x10),local_170,DAT_091bedc8);
              lVar13 = DAT_091aab70;
              if (lVar11 == 0) goto LAB_0445aa18;
              lVar14 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_0445aa18;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                puVar20 = (undefined8 *)(lVar14 + 0x20);
                *puVar20 = CONCAT71(uStack_9f,local_a0);
                *(ulong *)(lVar14 + 0x28) = CONCAT71(uStack_97,uStack_98);
                thunk_FUN_03f5d7b8(puVar20,0);
              }
              else {
                FUN_056bbb6c(lVar11,CONCAT71(uStack_9f,local_a0),CONCAT71(uStack_97,uStack_98),
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
LAB_04459d78:
          uVar23 = uVar23 + 1;
        } while ((long)uVar23 < (long)*(int *)(lVar19 + 0x18));
        if ((char)local_c8 == '\0') goto LAB_0445a728;
        uVar18 = FUN_05c26248(&local_c8,DAT_091b6988);
        FUN_05c26248(&local_c8,DAT_091b6988);
        local_a0 = '\0';
        uStack_9f = 0;
        uStack_98 = 0;
        uStack_97 = 0;
        FUN_066ce094(&local_a0,uVar18,extraout_x1,DAT_091bedc8);
        auVar26._1_7_ = uStack_9f;
        auVar26[0] = local_a0;
        auVar26._9_7_ = uStack_97;
        auVar26[8] = uStack_98;
LAB_0445a7b4:
        auVar26 = CookingGraph_CookingLevelSimulation__<RouteProcess>g__Route_149_0
                            (auVar26._0_8_,auVar26._8_8_);
        uVar18 = DAT_091b76b8;
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        FUN_05c3c1c8(param_1,auVar26._0_8_,auVar26._8_8_,uVar18);
      }
LAB_0445a7e4:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_0445aacc;
    }
  }
LAB_0445aa18:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0445aacc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

