// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$TryDispatch
// address: 0x449a6e4
// body: available
// range: 0x449a6e4-0x449b9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449b930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449b934 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449b9b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_Execution_CookingExecution__TryDispatch
               (long param_1,long param_2,uint param_3,undefined8 *param_4,int param_5,
               undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  bool bVar24;
  int iVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  int local_ac;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_a0 = param_6;
  if ((DAT_095181bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c118);
    FUN_03f5c2a4(&DAT_0919c808);
    FUN_03f5c2a4(&DAT_0919c120);
    FUN_03f5c2a4(&DAT_0919c890);
    FUN_03f5c2a4(&DAT_0919c110);
    FUN_03f5c2a4(&DAT_0919c7f0);
    FUN_03f5c2a4(&DAT_0919c818);
    FUN_03f5c2a4(&DAT_091760d8);
    FUN_03f5c2a4(&DAT_09175f48);
    FUN_03f5c2a4(&DAT_091c92c8);
    FUN_03f5c2a4(&DAT_091c9450);
    FUN_03f5c2a4(&DAT_091c9538);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9828);
    FUN_03f5c2a4(&DAT_091c9888);
    FUN_03f5c2a4(&DAT_091cadb0);
    FUN_03f5c2a4(&DAT_091cb5f8);
    FUN_03f5c2a4(&DAT_0918efa8);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178720);
    FUN_03f5c2a4(&DAT_091a8308);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_091ac0d8);
    FUN_03f5c2a4(&DAT_091b2468);
    FUN_03f5c2a4(&DAT_091b23e0);
    FUN_03f5c2a4(&DAT_091ac0e8);
    FUN_03f5c2a4(&DAT_091ac0d0);
    FUN_03f5c2a4(&DAT_091b2418);
    FUN_03f5c2a4(&DAT_091ac110);
    FUN_03f5c2a4(&DAT_091ac118);
    FUN_03f5c2a4(&DAT_0917bf80);
    FUN_03f5c2a4(&DAT_091b6be0);
    FUN_03f5c2a4(&DAT_091b6be8);
    FUN_03f5c2a4(&DAT_091b6bf0);
    FUN_03f5c2a4(&DAT_0917df88);
    FUN_03f5c2a4(&DAT_091dbc00);
    FUN_03f5c2a4(&DAT_091e6c80);
    FUN_03f5c2a4(&DAT_091e6ce0);
    FUN_03f5c2a4(&DAT_091e6ce8);
    FUN_03f5c2a4(&DAT_091e6cf0);
    FUN_03f5c2a4(&DAT_091e6cf8);
    FUN_03f5c2a4(&DAT_091e6d00);
    FUN_03f5c2a4(&DAT_091e6d08);
    FUN_03f5c2a4(&DAT_0918ef40);
    FUN_03f5c2a4(&DAT_091e6d10);
    FUN_03f5c2a4(&DAT_0918ef48);
    FUN_03f5c2a4(&DAT_091e6d18);
    FUN_03f5c2a4(&DAT_0918ef50);
    FUN_03f5c2a4(&DAT_0918ef00);
    FUN_03f5c2a4(&DAT_0918efc0);
    FUN_03f5c2a4(&DAT_0920d4d0);
    FUN_03f5c2a4(&DAT_09200828);
    FUN_03f5c2a4(&DAT_09212420);
    FUN_03f5c2a4(&DAT_09200a48);
    FUN_03f5c2a4(&DAT_0920b2b0);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_0920d4f8);
    DAT_095181bc = 1;
  }
  local_a8 = 0;
  local_ac = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (param_5 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar32 = thunk_FUN_03f9944c();
    uVar15 = thunk_FUN_03fc39d4(&DAT_092256f0);
    System_ArgumentOutOfRangeException___ctor(uVar32,uVar15,0);
  }
  else {
    if (param_2 != 0) {
      lVar9 = FUN_04b04494(param_2,DAT_091cadb0);
      lVar10 = thunk_FUN_03f9944c(DAT_0917bf80);
      FUN_05747954(lVar10,DAT_091ac0d0);
      lVar11 = thunk_FUN_03f9944c(DAT_09179e20);
      FUN_053e1118(lVar11,DAT_091a82f8);
      lVar12 = thunk_FUN_03f9944c(DAT_091760d8);
      FUN_06e813a0(lVar12,DAT_0919c7f0);
      if (lVar9 != 0) {
        bVar24 = *(int *)(lVar9 + 0x18) < 1;
        if (0 < *(int *)(lVar9 + 0x18)) {
          uVar30 = 0;
          lVar26 = 0x20;
          do {
            lVar13 = thunk_FUN_03f9944c(DAT_0918ef40);
            System_Object___ctor(lVar13,0);
            if (*(uint *)(lVar9 + 0x18) <= uVar30) goto LAB_0449b934;
            if (lVar13 == 0) goto LAB_0449b930;
            puVar20 = (undefined8 *)(lVar9 + lVar26);
            uVar34 = puVar20[3];
            uVar33 = puVar20[2];
            uVar32 = puVar20[5];
            uVar15 = puVar20[4];
            uVar27 = puVar20[1];
            uVar16 = *puVar20;
            *(undefined8 *)(lVar13 + 0x40) = puVar20[6];
            *(undefined8 *)(lVar13 + 0x28) = uVar34;
            *(undefined8 *)(lVar13 + 0x20) = uVar33;
            *(undefined8 *)(lVar13 + 0x38) = uVar32;
            *(undefined8 *)(lVar13 + 0x30) = uVar15;
            *(undefined8 *)(lVar13 + 0x18) = uVar27;
            *(undefined8 *)(lVar13 + 0x10) = uVar16;
            thunk_FUN_03f5d7b8(lVar13 + 0x18,0);
            plVar29 = (long *)(lVar13 + 0x28);
            if (*(int *)(lVar13 + 0x10) == *(int *)plVar29) {
              iVar25 = *(int *)(lVar13 + 0x38);
              iVar2 = *(int *)(lVar13 + 0x3c);
              iVar1 = *(int *)(lVar13 + 0x20);
              iVar3 = *(int *)(lVar13 + 0x24);
              uVar14 = System_String__op_Equality
                                 (*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x30),0);
              if ((((uVar14 & 1) == 0) || (iVar1 != iVar25)) || (iVar3 != iVar2)) goto LAB_0449ab68;
LAB_0449b8d4:
              puVar20 = &DAT_09212420;
LAB_0449b8f4:
              uVar15 = *puVar20;
              goto LAB_0449b900;
            }
LAB_0449ab68:
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_0449b930;
            uStack_e8 = *(undefined8 *)(lVar13 + 0x18);
            local_f0 = *(long *)(lVar13 + 0x10);
            local_e0 = *(undefined8 *)(lVar13 + 0x20);
            local_80 = local_f0;
            uStack_78 = uStack_e8;
            local_70 = local_e0;
            uVar14 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_80,&local_a8,DAT_0919c890);
            if ((uVar14 & 1) == 0) goto LAB_0449b8d4;
            if (local_a8 == 0) goto LAB_0449b930;
            lVar28 = *(long *)(local_a8 + 0x18);
            uVar15 = thunk_FUN_03f9944c(DAT_0917df88);
            FUN_05d75e70(uVar15,lVar13,DAT_091e6ce0,0);
            if (lVar28 == 0) goto LAB_0449b930;
            FUN_057489dc(&local_80,lVar28,uVar15,DAT_091ac0e8);
            uVar32 = local_70;
            uVar15 = uStack_78;
            lVar28 = local_80;
            if ((local_80 == 0) || (iVar25 = uStack_78._4_4_, uStack_78._4_4_ == 2)) {
LAB_0449b8b0:
              puVar20 = &DAT_0920d4f8;
              goto LAB_0449b8f4;
            }
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0449b930;
            iVar1 = (int)uStack_78;
            uVar14 = FUN_053e1824(*(long *)(param_1 + 0x28),local_80,DAT_091a8318);
            if ((uVar14 & 1) != 0) goto LAB_0449b8b0;
            if (lVar11 == 0) goto LAB_0449b930;
            uVar14 = FUN_053e230c(lVar11,lVar28,DAT_091a8308);
            if ((uVar14 & 1) == 0) goto LAB_0449b8b0;
            uVar27 = *(undefined8 *)(param_1 + 0x38);
            uVar16 = thunk_FUN_03f9944c(DAT_09179320);
            FUN_05322d94(uVar16,lVar13,DAT_091e6ce8,0);
            uVar14 = FUN_04ab6f28(uVar27,uVar16,DAT_091c9538);
            if ((uVar14 & 1) != 0) {
              if (*(long *)(param_1 + 0x88) != 0) {
                uVar8 = *(uint *)(lVar13 + 0x10);
                if (*(char *)(*(long *)(param_1 + 0x88) + 0x62) == '\0') {
                  if ((uVar8 | 2) == 3) goto LAB_0449ace0;
                }
                else {
                  if (uVar8 != 1) {
                    if (uVar8 != 3) goto LAB_0449b8ec;
                    goto LAB_0449adf0;
                  }
LAB_0449ace0:
                  if (*(int *)plVar29 == 4) {
                    uVar27 = *(undefined8 *)(param_1 + 0x38);
                    uVar16 = thunk_FUN_03f9944c(DAT_09179320);
                    FUN_05322d94(uVar16,lVar13,DAT_091e6cf0,0);
                    uVar16 = FUN_04b0cafc(uVar27,uVar16,DAT_091cb5f8);
                    if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_0918ef00);
                    }
                    puVar20 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
                    lVar18 = puVar20[6];
                    if (lVar18 == 0) {
                      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_0918ef00);
                        puVar20 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
                      }
                      uVar27 = *puVar20;
                      lVar18 = thunk_FUN_03f9944c(DAT_09179320);
                      FUN_05322d94(lVar18,uVar27,DAT_091e6c80,0);
                      plVar17 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x30);
                      *plVar17 = lVar18;
                      thunk_FUN_03f5d7b8(plVar17,lVar18);
                    }
                    uVar14 = FUN_04ab300c(uVar16,lVar18,DAT_091c92c8);
                    if ((uVar14 & 1) != 0) goto LAB_0449adf0;
                  }
                }
LAB_0449b8ec:
                puVar20 = &DAT_0920d4d0;
                goto LAB_0449b8f4;
              }
              goto LAB_0449b930;
            }
LAB_0449adf0:
            if ((*(int *)(lVar13 + 0x10) == 0) && ((param_3 & 1) == 0)) {
              puVar20 = &DAT_0920b2b0;
              goto LAB_0449b8f4;
            }
            if (lVar12 == 0) goto LAB_0449b930;
            uStack_78 = *(undefined8 *)(lVar13 + 0x30);
            local_80 = *plVar29;
            local_70 = *(undefined8 *)(lVar13 + 0x38);
            uVar14 = FUN_06e84024(lVar12,&local_80,&local_ac,DAT_0919c808);
            iVar2 = local_ac;
            if ((uVar14 & 1) == 0) {
              iVar2 = 0;
            }
            if (*(int *)plVar29 != 4) {
              if (*(long *)(param_1 + 0x10) != 0) {
                uStack_78 = *(undefined8 *)(lVar13 + 0x30);
                local_80 = *plVar29;
                local_70 = *(undefined8 *)(lVar13 + 0x38);
                uVar14 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_80,&local_b8,DAT_0919c890);
                if (((uVar14 & 1) != 0) && (*(int *)plVar29 != 0)) {
                  uVar27 = *(undefined8 *)(param_1 + 0x38);
                  uVar16 = thunk_FUN_03f9944c(DAT_09179320);
                  FUN_05322d94(uVar16,lVar13,DAT_091e6cf8,0);
                  uVar14 = FUN_04ab6f28(uVar27,uVar16,DAT_091c9538);
                  if ((uVar14 & 1) == 0) {
                    if ((local_b8 == 0) || (*(long *)(local_b8 + 0x18) == 0)) goto LAB_0449b930;
                    iVar3 = *(int *)(*(long *)(local_b8 + 0x18) + 0x18);
                    uVar16 = thunk_FUN_03f9944c(DAT_09178720);
                    FUN_0531308c(uVar16,lVar13,DAT_091e6d00,0);
                    iVar6 = FUN_04adb4c4(lVar9,uVar16,DAT_091c9828);
                    uVar27 = *(undefined8 *)(param_1 + 0x38);
                    uVar16 = thunk_FUN_03f9944c(DAT_09179320);
                    FUN_05322d94(uVar16,lVar13,DAT_091e6d08,0);
                    iVar7 = FUN_04adc4d0(uVar27,uVar16,DAT_091c9888);
                    if (local_b8 == 0) goto LAB_0449b930;
                    if (((iVar3 + iVar2) - iVar6) + iVar7 < *(int *)(local_b8 + 0x10))
                    goto LAB_0449b104;
                  }
                }
                puVar20 = &DAT_09200828;
                goto LAB_0449b8f4;
              }
              goto LAB_0449b930;
            }
            lVar18 = thunk_FUN_03f9944c(DAT_0918ef48);
            System_Object___ctor(lVar18,0);
            if (iVar25 != 0) {
LAB_0449b8bc:
              puVar20 = &DAT_09200a48;
              goto LAB_0449b8f4;
            }
            if (lVar18 == 0) goto LAB_0449b930;
            uStack_108 = *(undefined8 *)(lVar13 + 0x30);
            local_110 = *plVar29;
            local_100 = *(undefined8 *)(lVar13 + 0x38);
            uVar14 = CookingGraph_Execution_CookingExecution__TryDish
                               (param_1,&local_110,lVar18 + 0x10);
            if ((uVar14 & 1) == 0) goto LAB_0449b8bc;
            lVar21 = *(long *)(lVar18 + 0x10);
            if ((lVar21 == 0) || (lVar23 = *(long *)(lVar21 + 0x10), lVar23 == 0))
            goto LAB_0449b930;
            uVar8 = *(uint *)(lVar13 + 0x3c);
            if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_0449b934;
            lVar23 = *(long *)(lVar23 + (long)(int)uVar8 * 8 + 0x20);
            if (lVar23 == 0) goto LAB_0449b930;
            if (*(int *)(lVar23 + 0x10) != iVar1) goto LAB_0449b8bc;
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 == 0) goto LAB_0449b930;
            if (*(uint *)(lVar21 + 0x18) <= uVar8) goto LAB_0449b934;
            if (*(char *)(lVar21 + (int)uVar8 + 0x20) != '\0') goto LAB_0449b8bc;
            uStack_128 = *(undefined8 *)(lVar13 + 0x30);
            local_130 = *plVar29;
            local_120 = *(undefined8 *)(lVar13 + 0x38);
            uVar14 = CookingGraph_Execution_CookingExecution__Claimed(param_1,&local_130);
            if (((uVar14 & 1) != 0) || (iVar2 != 0)) goto LAB_0449b8bc;
            if ((*(long *)(lVar18 + 0x10) == 0) ||
               (lVar21 = *(long *)(*(long *)(lVar18 + 0x10) + 0x10), lVar21 == 0))
            goto LAB_0449b930;
            if (*(uint *)(lVar21 + 0x18) <= *(uint *)(lVar13 + 0x3c)) goto LAB_0449b934;
            lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(lVar13 + 0x3c) * 8 + 0x20);
            if (lVar21 == 0) goto LAB_0449b930;
            uVar27 = *(undefined8 *)(lVar21 + 0x28);
            uVar16 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar16,lVar18,DAT_091e6d10,0);
            uVar14 = FUN_04ab6928(uVar27,uVar16,DAT_091c9498);
            if ((uVar14 & 1) != 0) {
              if (*(long *)(param_1 + 0x88) == 0) goto LAB_0449b930;
              if (*(int *)(*(long *)(param_1 + 0x88) + 0x5c) != 1) goto LAB_0449b8bc;
            }
LAB_0449b104:
            uStack_78 = *(undefined8 *)(lVar13 + 0x30);
            local_80 = *plVar29;
            local_70 = *(undefined8 *)(lVar13 + 0x38);
            FUN_06e821bc(lVar12,&local_80,iVar2 + 1,DAT_0919c818);
            if (lVar10 == 0) goto LAB_0449b930;
            lVar13 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_0449b930;
            uVar8 = *(uint *)(lVar10 + 0x18);
            if (uVar8 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
              *(uint *)(lVar10 + 0x18) = uVar8 + 1;
              *(int *)(lVar13 + 0x28) = iVar1;
              *(int *)(lVar13 + 0x2c) = iVar25;
              *(long *)(lVar13 + 0x20) = lVar28;
              *(undefined8 *)(lVar13 + 0x30) = uVar32;
            }
            else {
              local_80 = lVar28;
              uStack_78 = uVar15;
              local_70 = uVar32;
              FUN_0574825c(lVar10,&local_80,
                           *(undefined8 *)(*(long *)(*(long *)(DAT_091ac0d8 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar30 = uVar30 + 1;
            lVar26 = lVar26 + 0x38;
            bVar24 = (long)*(int *)(lVar9 + 0x18) <= (long)uVar30;
          } while ((long)uVar30 < (long)*(int *)(lVar9 + 0x18));
        }
        if ((param_3 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x88);
          if (lVar11 == 0) goto LAB_0449b930;
          if (*(char *)(lVar11 + 0x2b) != '\0') {
            *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x80) + *(double *)(lVar11 + 0x30);
          }
        }
        lVar11 = thunk_FUN_03f9944c(DAT_09175f48);
        FUN_06fd76bc(lVar11,DAT_0919c110);
        if (0 < *(int *)(lVar9 + 0x18)) {
          uVar30 = 0;
          iVar25 = 0;
          lVar12 = 0x20;
          do {
            lVar26 = thunk_FUN_03f9944c(DAT_0918ef50);
            System_Object___ctor(lVar26,0);
            if (*(uint *)(lVar9 + 0x18) <= uVar30) {
LAB_0449b934:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (lVar26 == 0) goto LAB_0449b930;
            puVar20 = (undefined8 *)(lVar9 + lVar12);
            uVar34 = puVar20[3];
            uVar33 = puVar20[2];
            uVar32 = puVar20[5];
            uVar15 = puVar20[4];
            uVar27 = puVar20[1];
            uVar16 = *puVar20;
            *(undefined8 *)(lVar26 + 0x40) = puVar20[6];
            *(undefined8 *)(lVar26 + 0x28) = uVar34;
            *(undefined8 *)(lVar26 + 0x20) = uVar33;
            *(undefined8 *)(lVar26 + 0x38) = uVar32;
            *(undefined8 *)(lVar26 + 0x30) = uVar15;
            *(undefined8 *)(lVar26 + 0x18) = uVar27;
            *(undefined8 *)(lVar26 + 0x10) = uVar16;
            thunk_FUN_03f5d7b8(lVar26 + 0x18,0);
            lVar13 = thunk_FUN_03f9944c(DAT_0918efa8);
            System_Object___ctor(lVar13,0);
            lVar28 = *(long *)(param_1 + 0x58);
            *(long *)(param_1 + 0x58) = lVar28 + 1;
            if (lVar13 == 0) goto LAB_0449b930;
            *(long *)(lVar13 + 0x10) = lVar28;
            uVar34 = *(undefined8 *)(lVar26 + 0x28);
            uVar33 = *(undefined8 *)(lVar26 + 0x20);
            uVar32 = *(undefined8 *)(lVar26 + 0x38);
            uVar15 = *(undefined8 *)(lVar26 + 0x30);
            uVar27 = *(undefined8 *)(lVar26 + 0x18);
            uVar16 = *(undefined8 *)(lVar26 + 0x10);
            *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar26 + 0x40);
            *(undefined8 *)(lVar13 + 0x48) = uVar34;
            *(undefined8 *)(lVar13 + 0x40) = uVar33;
            *(undefined8 *)(lVar13 + 0x58) = uVar32;
            *(undefined8 *)(lVar13 + 0x50) = uVar15;
            *(undefined8 *)(lVar13 + 0x38) = uVar27;
            *(undefined8 *)(lVar13 + 0x30) = uVar16;
            thunk_FUN_03f5d7b8(lVar13 + 0x38,0);
            if (lVar10 == 0) goto LAB_0449b930;
            FUN_05747eec(&local_80,lVar10,uVar30 & 0xffffffff,DAT_091ac118);
            *(undefined8 *)(lVar13 + 0x28) = local_70;
            *(undefined8 *)(lVar13 + 0x20) = uStack_78;
            *(long *)(lVar13 + 0x18) = local_80;
            *(undefined8 *)(lVar13 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
            uStack_148 = *(undefined8 *)(lVar26 + 0x30);
            local_150 = *(undefined8 *)(lVar26 + 0x28);
            local_140 = *(undefined8 *)(lVar26 + 0x38);
            uVar14 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_150,&local_c0);
            if ((uVar14 & 1) == 0) {
LAB_0449b368:
              if (*(int *)(lVar26 + 0x10) == 0) {
                if (*(long *)(param_1 + 0x88) == 0) goto LAB_0449b930;
                dVar31 = (double)iVar25;
                iVar25 = iVar25 + 1;
                dVar31 = *(double *)(*(long *)(param_1 + 0x88) + 0x40) * dVar31;
                *(double *)(lVar13 + 0x70) = dVar31;
                *(double *)(lVar13 + 0xa0) = dVar31 + *(double *)(param_1 + 0x80);
              }
            }
            else {
              if (local_c0 == 0) goto LAB_0449b930;
              if (*(char *)(local_c0 + 0x20) != '\0') goto LAB_0449b368;
              uStack_168 = *(undefined8 *)(lVar26 + 0x30);
              local_170 = *(undefined8 *)(lVar26 + 0x28);
              local_160 = *(undefined8 *)(lVar26 + 0x38);
              CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_170,&local_c8);
              if ((local_c8 == 0) || (lVar28 = *(long *)(local_c8 + 0x10), lVar28 == 0))
              goto LAB_0449b930;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar26 + 0x3c)) goto LAB_0449b934;
              uVar8 = 2;
              if (*(int *)(lVar26 + 0x10) != 0) {
                uVar8 = (uint)(*(int *)(lVar26 + 0x10) == 1);
              }
              if (*(long *)(param_1 + 0x88) == 0) goto LAB_0449b930;
              lVar28 = *(long *)(lVar28 + (long)(int)*(uint *)(lVar26 + 0x3c) * 8 + 0x20);
              if (*(int *)(*(long *)(param_1 + 0x88) + 0x5c) == 1) {
                if ((char)local_a0 == '\0') {
                  uVar4 = 2;
                  if ((param_3 & 1) == 0) {
                    uVar4 = uVar8;
                  }
                  FUN_05c30b18(&local_a0,uVar4,DAT_091b6be0);
                }
                uVar8 = FUN_05c30b30(&local_a0,DAT_091b6bf0);
              }
              if (uVar8 == 1) {
                lVar18 = *(long *)(lVar26 + 0x10);
                uVar15 = *(undefined8 *)(lVar26 + 0x18);
                uVar32 = *(undefined8 *)(lVar26 + 0x20);
              }
              else {
                lVar18 = 0;
                uVar32 = 0;
                uVar15 = 0;
              }
              if (*(long *)(param_1 + 0x88) == 0) goto LAB_0449b930;
              if (*(int *)(*(long *)(param_1 + 0x88) + 0x5c) == 1) {
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0;
                CookingGraph_Execution_CookingEndpoint___ctor
                          (&local_98,*(undefined4 *)(lVar26 + 0x28),*(undefined8 *)(lVar26 + 0x30),
                           *(undefined4 *)(lVar26 + 0x38),0);
                uStack_78 = uStack_90;
                uStack_90 = 0;
                uVar19 = 0;
                local_80 = local_98;
                local_70 = local_88;
                local_98 = 0;
                local_88 = 0;
                uVar16 = DAT_091f5700;
              }
              else {
                local_80 = 0;
                uStack_78 = 0;
                local_70 = 0;
                CookingGraph_Execution_CookingEndpoint___ctor
                          (&local_80,*(undefined4 *)(lVar26 + 0x28),*(undefined8 *)(lVar26 + 0x30),
                           *(undefined4 *)(lVar26 + 0x38),0);
                uStack_188 = uStack_78;
                local_190 = local_80;
                local_180 = local_70;
                if (lVar28 == 0) goto LAB_0449b930;
                uVar19 = *(undefined4 *)(lVar28 + 0x14);
                uVar16 = *(undefined8 *)(lVar28 + 0x18);
                local_98 = lVar18;
                uStack_90 = uVar15;
                local_88 = uVar32;
              }
              uVar15 = FUN_04d8d2bc(uVar8,&local_80,uVar19,uVar16,&local_98,DAT_091dbc00);
              if (lVar11 == 0) goto LAB_0449b930;
              uVar14 = FUN_06fd9fbc(lVar11,uVar15,&local_d0,DAT_0919c120);
              if ((uVar14 & 1) == 0) {
                lVar28 = thunk_FUN_03f9944c(DAT_0918efc0);
                CookingGraph_Execution_CookingExecution_Wave___ctor();
                lVar18 = *(long *)(param_1 + 0x60);
                *(long *)(param_1 + 0x60) = lVar18 + 1;
                if (lVar28 == 0) goto LAB_0449b930;
                *(long *)(lVar28 + 0x10) = lVar18;
                *(uint *)(lVar28 + 0x18) = uVar8;
                *(int *)(lVar28 + 0x30) = param_5;
                local_d0 = lVar28;
                FUN_06fd8454(lVar11,uVar15,lVar28,DAT_0919c118);
                lVar28 = DAT_091b2468;
                lVar18 = *(long *)(param_1 + 0x40);
                if (lVar18 == 0) goto LAB_0449b930;
                lVar21 = *(long *)(lVar18 + 0x10);
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar21 == 0) goto LAB_0449b930;
                uVar4 = *(uint *)(lVar18 + 0x18);
                if (uVar4 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                  plVar29 = (long *)(lVar21 + (long)(int)uVar4 * 8 + 0x20);
                  *plVar29 = local_d0;
                  thunk_FUN_03f5d7b8(plVar29);
                }
                else {
                  FUN_057e0c68(lVar18,local_d0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                }
              }
              *(long *)(lVar13 + 0x68) = local_d0;
              thunk_FUN_03f5d7b8();
              if (((local_d0 == 0) || (lVar28 = *(long *)(local_d0 + 0x38), lVar28 == 0)) ||
                 (lVar18 = *(long *)(param_1 + 0x88), lVar18 == 0)) goto LAB_0449b930;
              if (uVar8 == 0) {
                cVar22 = *(char *)(lVar18 + 0x28);
              }
              else if (uVar8 == 1) {
                cVar22 = *(char *)(lVar18 + 0x29);
              }
              else {
                cVar22 = *(char *)(lVar18 + 0x2a);
              }
              if (cVar22 == '\0') {
                dVar31 = 0.0;
              }
              else {
                dVar31 = *(double *)(lVar18 + 0x20);
              }
              uVar8 = *(uint *)(lVar28 + 0x18);
              *(double *)(lVar13 + 0x70) = dVar31 * (double)(int)(uVar8 + *(int *)(local_d0 + 0x30))
              ;
              lVar18 = DAT_091b23e0;
              lVar21 = *(long *)(lVar28 + 0x10);
              *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_0449b930;
              if (uVar8 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar28 + 0x18) = uVar8 + 1;
                plVar29 = (long *)(lVar21 + (long)(int)uVar8 * 8 + 0x20);
                *plVar29 = lVar13;
                thunk_FUN_03f5d7b8(plVar29,lVar13);
              }
              else {
                FUN_057e0c68(lVar28,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_0449b930;
            FUN_053e230c(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar13 + 0x18),DAT_091a8308);
            lVar28 = DAT_091b23e0;
            lVar18 = *(long *)(param_1 + 0x38);
            if (lVar18 == 0) goto LAB_0449b930;
            lVar21 = *(long *)(lVar18 + 0x10);
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_0449b930;
            uVar8 = *(uint *)(lVar18 + 0x18);
            if (uVar8 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar8 + 1;
              plVar29 = (long *)(lVar21 + (long)(int)uVar8 * 8 + 0x20);
              *plVar29 = lVar13;
              thunk_FUN_03f5d7b8(plVar29,lVar13);
            }
            else {
              FUN_057e0c68(lVar18,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
            }
            uVar15 = thunk_FUN_03f9944c(DAT_09178720);
            FUN_0531308c(uVar15,lVar26,DAT_091e6d18,0);
            uVar8 = FUN_04ab62d4(lVar9,uVar15,DAT_091c9450);
            iVar1 = *(int *)(lVar26 + 0x10);
            bVar5 = true;
            if ((iVar1 != 0) && (iVar1 != 5)) {
              if (iVar1 == 1) {
                bVar5 = *(long *)(lVar13 + 0x68) == 0;
              }
              else {
                bVar5 = false;
              }
            }
            if (bVar5 || (uVar8 & 1) != 0) {
              CookingGraph_Execution_CookingExecution__RemoveSource(param_1,lVar13);
            }
            uStack_1a8 = *(undefined8 *)(lVar26 + 0x30);
            local_1b0 = *(undefined8 *)(lVar26 + 0x28);
            local_1a0 = *(undefined8 *)(lVar26 + 0x38);
            CookingGraph_Execution_CookingExecution__Emit
                      (param_1,0,&local_1b0,*(undefined8 *)(lVar13 + 0x10));
            uVar30 = uVar30 + 1;
            lVar12 = lVar12 + 0x38;
          } while ((long)uVar30 < (long)*(int *)(lVar9 + 0x18));
        }
        CookingGraph_Execution_CookingExecution__AdvanceDepartures(param_1);
        if (*(long *)(param_1 + 0x88) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x88) + 0x13) != '\0') {
            CookingGraph_Execution_CookingExecution__CompleteReadyTransfers(param_1);
          }
          uVar15 = 0;
LAB_0449b900:
          *param_4 = uVar15;
          thunk_FUN_03f5d7b8(param_4);
          return bVar24;
        }
      }
LAB_0449b930:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar32 = thunk_FUN_03f9944c();
    uVar15 = thunk_FUN_03fc39d4(&DAT_09221968);
    System_ArgumentNullException___ctor(uVar32,uVar15,0);
  }
  uVar15 = thunk_FUN_03fc39d4(&DAT_091c64d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar32,uVar15);
}

