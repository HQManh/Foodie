// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$Generate
// address: 0x442fc40
// body: available
// range: 0x442fc40-0x44308af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4430844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44308ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CustomerOrderGenerator__Generate
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  double dVar27;
  float fVar28;
  
  if ((DAT_09517f9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091830b0);
    FUN_03f5c2a4(&DAT_091830f8);
    FUN_03f5c2a4(&DAT_0919c740);
    FUN_03f5c2a4(&DAT_091cb038);
    FUN_03f5c2a4(&DAT_091cb120);
    FUN_03f5c2a4(&DAT_091cb408);
    FUN_03f5c2a4(&DAT_09177b40);
    FUN_03f5c2a4(&DAT_09178578);
    FUN_03f5c2a4(&DAT_09178568);
    FUN_03f5c2a4(&DAT_09178570);
    FUN_03f5c2a4(&DAT_09184bc0);
    FUN_03f5c2a4(&DAT_09184bb0);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86a8);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ac5f8);
    FUN_03f5c2a4(&DAT_091ac1f0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091abc08);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091abc10);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e8330);
    FUN_03f5c2a4(&DAT_091e8338);
    FUN_03f5c2a4(&DAT_091e8340);
    FUN_03f5c2a4(&DAT_091e8348);
    FUN_03f5c2a4(&DAT_091e8380);
    FUN_03f5c2a4(&DAT_091e8388);
    FUN_03f5c2a4(&DAT_0918f948);
    FUN_03f5c2a4(&DAT_0918f930);
    FUN_03f5c2a4(&DAT_091ff628);
    FUN_03f5c2a4(&DAT_091f9fb8);
    DAT_09517f9c = 1;
  }
  lVar8 = thunk_FUN_03f9944c(DAT_0918f948);
  System_Object___ctor(lVar8,0);
  if (lVar8 == 0) goto LAB_04430844;
  puVar21 = (undefined8 *)(lVar8 + 0x10);
  *puVar21 = param_1;
  thunk_FUN_03f5d7b8(puVar21,param_1);
  uVar18 = *puVar21;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar18,0,0);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar18 = thunk_FUN_03f9944c();
    puVar21 = &DAT_0921c7b8;
LAB_04430884:
    uVar24 = thunk_FUN_03fc39d4(puVar21);
    System_ArgumentNullException___ctor(uVar18,uVar24,0);
    uVar24 = thunk_FUN_03fc39d4(&DAT_091c6fb8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar18,uVar24);
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar18 = thunk_FUN_03f9944c();
    puVar21 = &DAT_092206f0;
    goto LAB_04430884;
  }
  if (param_3 == 0) {
    if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
    param_3 = puVar15[1];
    if (param_3 == 0) {
      if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
      }
      uVar18 = *puVar15;
      param_3 = thunk_FUN_03f9944c(DAT_09177b40);
      FUN_05301018(param_3,uVar18,DAT_091e8330,0);
      plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 8);
      *plVar10 = param_3;
      thunk_FUN_03f5d7b8(plVar10,param_3);
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Math__Max(1,uVar2,0);
  lVar26 = *(long *)(param_2 + 0x10);
  if ((lVar26 == 0) || (*(int *)(lVar26 + 0x18) < 1)) {
    lVar26 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(lVar26,DAT_091adc70);
    lVar22 = DAT_091adc88;
    if (lVar26 == 0) goto LAB_04430844;
    lVar16 = *(long *)(lVar26 + 0x10);
    *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_04430844;
    uVar1 = *(uint *)(lVar26 + 0x18);
    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar26 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = 1;
    }
    else {
      FUN_057971a8(lVar26,1,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar18 = CookingGraph_CustomerOrderGenerator__BuildWeights
                     (*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(lVar8 + 0x20) = uVar18;
  thunk_FUN_03f5d7b8();
  if (*(long *)(lVar8 + 0x10) != 0) {
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x50);
    if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
    lVar22 = puVar15[2];
    if (lVar22 == 0) {
      if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
      }
      uVar24 = *puVar15;
      lVar22 = thunk_FUN_03f9944c(DAT_09178570);
      FUN_05322d94(lVar22,uVar24,DAT_091e8338,0);
      plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x10);
      *plVar10 = lVar22;
      thunk_FUN_03f5d7b8(plVar10,lVar22);
    }
    uVar18 = FUN_04b0cafc(uVar18,lVar22,DAT_091cb408);
    if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f930);
    }
    puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
    lVar22 = puVar15[3];
    if (lVar22 == 0) {
      if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f930);
        puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
      }
      uVar24 = *puVar15;
      lVar22 = thunk_FUN_03f9944c(DAT_09178578);
      FUN_05324070(lVar22,uVar24,DAT_091e8340,0);
      plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x18);
      *plVar10 = lVar22;
      thunk_FUN_03f5d7b8(plVar10,lVar22);
    }
    uVar24 = thunk_FUN_03f9944c(DAT_09178568);
    FUN_05324070(uVar24,lVar8,DAT_091e8380,0);
    lVar22 = FUN_04b05274(uVar18,lVar22,uVar24,DAT_091cb038);
    plVar10 = (long *)(lVar8 + 0x18);
    *plVar10 = lVar22;
    thunk_FUN_03f5d7b8(plVar10,lVar22);
    if (*(long *)(lVar8 + 0x10) != 0) {
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x50);
      if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
      lVar22 = puVar15[4];
      if (lVar22 == 0) {
        if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar15 = *(undefined8 **)(DAT_0918f930 + 0xb8);
        }
        uVar24 = *puVar15;
        lVar22 = thunk_FUN_03f9944c(DAT_09178570);
        FUN_05322d94(lVar22,uVar24,DAT_091e8348,0);
        plVar11 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x20);
        *plVar11 = lVar22;
        thunk_FUN_03f5d7b8(plVar11,lVar22);
      }
      uVar18 = FUN_04b0cafc(uVar18,lVar22,DAT_091cb408);
      uVar24 = thunk_FUN_03f9944c(DAT_09178570);
      FUN_05322d94(uVar24,lVar8,DAT_091e8388,0);
      uVar18 = FUN_04b0cafc(uVar18,uVar24,DAT_091cb408);
      lVar22 = FUN_04b08b78(uVar18,DAT_091cb120);
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918b378);
      }
      if (DAT_09516ea3 == '\0') {
        FUN_03f5c2a4(&DAT_0918b378);
        DAT_09516ea3 = '\x01';
      }
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar18 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
      lVar16 = thunk_FUN_03f9944c(DAT_09179ee0);
      FUN_053eb574(lVar16,uVar18,DAT_091a86a8);
      lVar12 = thunk_FUN_03f9944c(DAT_091830f8);
      CookingGraph_CustomerOrderData___ctor();
      if (0 < *(int *)(lVar26 + 0x18)) {
        uVar18 = NEON_fmov(0x3f800000,4);
        iVar23 = 0;
        do {
          iVar3 = FUN_05796eb0(lVar26,iVar23,DAT_091add20);
          if (iVar3 == -1) {
            if (lVar12 == 0) goto LAB_04430844;
            lVar20 = *(long *)(lVar12 + 0x10);
            lVar19 = thunk_FUN_03f9944c(DAT_091830b0);
            CookingGraph_CustomerData___ctor();
            if (lVar19 == 0) goto LAB_04430844;
            *(undefined8 *)(lVar19 + 0x10) = 1;
            *(undefined4 *)(lVar19 + 0x18) = 0;
            *(undefined1 *)(lVar19 + 0x28) = 1;
            *(undefined4 *)(lVar19 + 0x2c) = 1;
            lVar14 = DAT_091ac1f0;
            if (lVar20 == 0) goto LAB_04430844;
            lVar13 = *(long *)(lVar20 + 0x10);
            *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_04430844;
            uVar1 = *(uint *)(lVar20 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar20 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar19;
              thunk_FUN_03f5d7b8(plVar11,lVar19);
            }
            else {
              FUN_057e0c68(lVar20,lVar19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            lVar19 = *(long *)(param_2 + 0x20);
            if (lVar19 == 0) {
              lVar19 = thunk_FUN_03f9944c(DAT_09184bb0);
              CookingGraph_GenerationCurve___ctor();
              if (lVar19 == 0) goto LAB_04430844;
            }
            lVar20 = *(long *)(lVar19 + 0x10);
            if (lVar20 == 0) {
              lVar20 = thunk_FUN_03f9944c(DAT_09184bc0);
              *(undefined8 *)(lVar20 + 0x14) = uVar18;
              *(undefined4 *)(lVar20 + 0x1c) = 0x40a00000;
              System_Object___ctor(lVar20,0);
            }
            fVar28 = 0.0;
            iVar4 = *(int *)(lVar26 + 0x18) + -1;
            if (iVar4 != 0) {
              fVar28 = (float)iVar23 / (float)iVar4;
            }
            fVar28 = (float)CookingGraph_GenerationCurve__Evaluate
                                      (*(float *)(lVar20 + 0x10) +
                                       fVar28 * (*(float *)(lVar20 + 0x14) -
                                                *(float *)(lVar20 + 0x10)),lVar19);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_09517fe8 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09517fe8 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            dVar27 = (double)System_Math__Round((double)fVar28,0,1,0);
            iVar4 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar4 = (int)dVar27;
            }
            iVar4 = System_Math__Max(1,iVar4,0);
            if (iVar3 < 1) {
              iVar3 = CookingGraph_CustomerOrderGenerator__AutoDishCount(iVar4,uVar2);
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar5 = System_Math__Max(1,iVar3,0);
            if (DAT_09517fe8 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09517fe8 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            dVar27 = (double)System_Math__Round((double)iVar4 / (double)iVar5,0,1,0);
            iVar4 = -0x80000000;
            if (dVar27 != INFINITY) {
              iVar4 = (int)dVar27;
            }
            uVar6 = System_Math__Max(1,iVar4,0);
            lVar19 = thunk_FUN_03f9944c(DAT_091830b0);
            CookingGraph_CustomerData___ctor();
            if (lVar19 == 0) goto LAB_04430844;
            *(undefined8 *)(lVar19 + 0x10) = 0;
            *(undefined4 *)(lVar19 + 0x18) = 0;
            if (0 < iVar3) {
              if (lVar22 == 0) goto LAB_04430844;
              do {
                if (*(int *)(lVar22 + 0x18) != 0) {
                  uVar7 = CookingGraph_CustomerOrderGenerator__RandomIndex
                                    (*(int *)(lVar22 + 0x18),param_3);
                  lVar20 = FUN_057e0998(lVar22,uVar7,DAT_091abc10);
                  if (*plVar10 == 0) goto LAB_04430844;
                  uVar25 = *puVar21;
                  uVar24 = FUN_06fd83d4(*plVar10,lVar20,DAT_0919c740);
                  lVar13 = CookingGraph_CustomerOrderGenerator__BuildDish
                                     (uVar25,lVar20,uVar24,uVar6,*(undefined8 *)(lVar8 + 0x20),
                                      param_3,uVar2);
                  lVar14 = DAT_091ac5f8;
                  if (lVar13 == 0) {
                    if ((lVar20 == 0) ||
                       (uVar24 = System_String__Concat
                                           (DAT_091ff628,*(undefined8 *)(lVar20 + 0x18),DAT_091f9fb8
                                            ,0), lVar16 == 0)) goto LAB_04430844;
                    uVar9 = FUN_053ec72c(lVar16,uVar24,DAT_091a86b8);
                    if ((param_4 != 0) && ((uVar9 & 1) != 0)) {
                      (**(code **)(param_4 + 0x18))
                                (*(undefined8 *)(param_4 + 0x40),uVar24,
                                 *(undefined8 *)(param_4 + 0x28));
                    }
                  }
                  else {
                    lVar20 = *(long *)(lVar19 + 0x20);
                    if (lVar20 == 0) goto LAB_04430844;
                    lVar17 = *(long *)(lVar20 + 0x10);
                    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                    if (lVar17 == 0) goto LAB_04430844;
                    uVar1 = *(uint *)(lVar20 + 0x18);
                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar20 + 0x18) = uVar1 + 1;
                      plVar11 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar11 = lVar13;
                      thunk_FUN_03f5d7b8(plVar11);
                    }
                    else {
                      FUN_057e0c68(lVar20,lVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            lVar20 = DAT_091ac1f0;
            if ((lVar12 == 0) || (lVar14 = *(long *)(lVar12 + 0x10), lVar14 == 0))
            goto LAB_04430844;
            lVar13 = *(long *)(lVar14 + 0x10);
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_04430844;
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar19;
              thunk_FUN_03f5d7b8(plVar11,lVar19);
            }
            else {
              FUN_057e0c68(lVar14,lVar19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
          iVar23 = iVar23 + 1;
        } while (iVar23 < *(int *)(lVar26 + 0x18));
      }
      return lVar12;
    }
  }
LAB_04430844:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

