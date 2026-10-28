// rea decompile_all
// name: FUN_0447e004
// address: 0x447e004
// body: available
// range: 0x447e004-0x447e3eb inclusive
// range: 0x447e430-0x447f007 inclusive
// range: 0x44804f8-0x4480517 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447f004 to 0x89db4a8 FUN_089db4a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0447f77c) */
/* WARNING: Removing unreachable block (ram,0x04480498) */
/* WARNING: Removing unreachable block (ram,0x0447f824) */
/* WARNING: Removing unreachable block (ram,0x04480490) */
/* WARNING: Removing unreachable block (ram,0x0447fa68) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0447e004(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 extraout_var;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *unaff_x21;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long unaff_x26;
  long unaff_x27;
  long *in_stack_00000038;
  long in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 in_stack_00000098;
  long *in_stack_000000d0;
  long *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  lVar3 = FUN_057e28a4(param_2,*param_1);
  plVar18 = (long *)(unaff_x26 + 0x18);
  *plVar18 = lVar3;
  thunk_FUN_03f5d7b8(plVar18,lVar3);
  lVar3 = *unaff_x19;
  uVar15 = *(undefined8 *)(unaff_x26 + 0x10);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = *unaff_x19;
  }
  puVar8 = *(undefined8 **)(lVar3 + 0xb8);
  lVar19 = puVar8[1];
  if (lVar19 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    }
    uVar20 = *puVar8;
    lVar19 = thunk_FUN_03f9944c(DAT_09178ae8);
    FUN_05322d94(lVar19,uVar20,DAT_091e7168,0);
    plVar4 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 8);
    *plVar4 = lVar19;
    thunk_FUN_03f5d7b8(plVar4,lVar19);
  }
  uVar5 = FUN_04ab6f28(uVar15,lVar19,DAT_091c9490);
  if ((uVar5 & 1) == 0) {
    uVar15 = FUN_04add4b8(*in_stack_00000038,DAT_091c9910);
    iVar1 = FUN_04ad8a88(uVar15,DAT_091c9788);
    if (*in_stack_00000038 == 0) goto LAB_044803b4;
    if (iVar1 == *(int *)(*in_stack_00000038 + 0x18)) {
      if ((*unaff_x21 == 0) || (lVar3 = *(long *)(*unaff_x21 + 0x18), lVar3 == 0))
      goto LAB_044803b4;
      uVar15 = *(undefined8 *)(lVar3 + 0x40);
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar3 = puVar8[2];
      if (lVar3 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar20 = *puVar8;
        lVar3 = thunk_FUN_03f9944c(DAT_09179130);
        FUN_05322d94(lVar3,uVar20,DAT_091e7170,0);
        plVar4 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x10);
        *plVar4 = lVar3;
        thunk_FUN_03f5d7b8(plVar4,lVar3);
      }
      uVar5 = FUN_04ab6f28(uVar15,lVar3,DAT_091c9510);
      if ((uVar5 & 1) == 0) {
        lVar3 = *plVar18;
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        lVar19 = puVar8[3];
        if (lVar19 == 0) {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          }
          uVar15 = *puVar8;
          lVar19 = thunk_FUN_03f9944c(DAT_09178570);
          FUN_05322d94(lVar19,uVar15,DAT_091e71a8,0);
          plVar4 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x18);
          *plVar4 = lVar19;
          thunk_FUN_03f5d7b8(plVar4,lVar19);
        }
        uVar5 = FUN_04ab6f28(lVar3,lVar19,DAT_091c93e8);
        if ((uVar5 & 1) == 0) {
          uVar15 = FUN_04add4b8(*plVar18,DAT_091c98f0);
          iVar1 = FUN_04ad8a88(uVar15,DAT_091c9770);
          if (*plVar18 == 0) goto LAB_044803b4;
          if (iVar1 == *(int *)(*plVar18 + 0x18)) {
            if ((*unaff_x21 == 0) || (lVar3 = *(long *)(*unaff_x21 + 0x18), lVar3 == 0))
            goto LAB_044803b4;
            uVar15 = FUN_04add4b8(*(undefined8 *)(lVar3 + 0x40),DAT_091c9940);
            iVar1 = FUN_04ad8a88(uVar15,DAT_091c97d8);
            if ((*unaff_x21 == 0) ||
               ((lVar3 = *(long *)(*unaff_x21 + 0x18), lVar3 == 0 ||
                (lVar3 = *(long *)(lVar3 + 0x40), lVar3 == 0)))) goto LAB_044803b4;
            if (iVar1 == *(int *)(lVar3 + 0x18)) {
              lVar3 = *plVar18;
              if (lVar3 == 0) goto LAB_044803b4;
              if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                uVar5 = 0;
                uVar9 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                do {
                  if (uVar9 <= uVar5) goto LAB_04480454;
                  uVar15 = thunk_FUN_03f9944c(DAT_09179d90);
                  FUN_053eb530(uVar15,DAT_091a8018);
                  lVar19 = CookingGraph_CookingGraphIndex__Leaves();
                  if (lVar19 == 0) goto LAB_044803b4;
                  FUN_053ec0b0(&stack0x00000088,lVar19,DAT_091a8280);
                  in_stack_000000e0 = in_stack_00000088;
                  in_stack_00000088 = 0;
                  in_stack_000000e8 = _uStack0000000000000090;
                  in_stack_000000f0 = in_stack_00000098;
                  _uStack0000000000000090 = &stack0x000000e0;
                  while (uVar9 = FUN_071bb7b4(&stack0x000000e0,DAT_091a3370), (uVar9 & 1) != 0) {
                    CookingGraph_CookingGraphIndex__Ingredient();
                  }
                  FUN_071bb7b0(&stack0x000000e0,DAT_091a3368);
                  uVar9 = (ulong)*(uint *)(lVar3 + 0x18);
                  uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
              }
              lVar3 = *unaff_x21;
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_044803b4;
              uVar20 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x40);
              uVar15 = thunk_FUN_03f9944c(DAT_09179140);
              FUN_05324070(uVar15,lVar3,DAT_091e72a8,0);
              uVar15 = FUN_04af8044(uVar20,uVar15,DAT_091ca770);
              uVar15 = FUN_04b049e4(uVar15,DAT_091caf40);
              *(undefined8 *)(unaff_x26 + 0x20) = uVar15;
              thunk_FUN_03f5d7b8();
              lVar3 = *unaff_x21;
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_044803b4;
              uVar20 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x80);
              uVar15 = thunk_FUN_03f9944c(DAT_09178e68);
              FUN_05324070(uVar15,lVar3,DAT_091e72b8,0);
              uVar15 = FUN_04af8044(uVar20,uVar15,DAT_091ca660);
              uVar15 = FUN_04b049e4(uVar15,DAT_091caf38);
              puVar8 = (undefined8 *)(unaff_x27 + 0x10);
              *puVar8 = uVar15;
              thunk_FUN_03f5d7b8(puVar8,uVar15);
              lVar3 = *(long *)(unaff_x27 + 0x28);
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_044803b4;
              uVar20 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x90);
              uVar15 = thunk_FUN_03f9944c(DAT_09178968);
              FUN_05324070(uVar15,lVar3,DAT_091e72c0,0);
              uVar15 = FUN_04af8044(uVar20,uVar15,DAT_091ca480);
              uVar15 = FUN_04b049e4(uVar15,DAT_091caf38);
              puVar16 = (undefined8 *)(unaff_x26 + 0x40);
              *puVar16 = uVar15;
              thunk_FUN_03f5d7b8(puVar16,uVar15);
              uVar15 = FUN_04ad43f0(*puVar8,*puVar16,DAT_091c96b0);
              uVar15 = FUN_04b049e4(uVar15,DAT_091caf38);
              *puVar8 = uVar15;
              thunk_FUN_03f5d7b8(puVar8,uVar15);
              uVar15 = *puVar8;
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              lVar3 = puVar16[8];
              if (lVar3 == 0) {
                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                }
                uVar20 = *puVar16;
                lVar3 = thunk_FUN_03f9944c(DAT_09179368);
                FUN_053239c8(lVar3,uVar20,DAT_091e71e8,0);
                plVar18 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x40);
                *plVar18 = lVar3;
                thunk_FUN_03f5d7b8(plVar18,lVar3);
              }
              uVar15 = FUN_04ae6df8(uVar15,lVar3,DAT_091c9e20);
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f178);
              }
              puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              lVar3 = puVar16[9];
              if (lVar3 == 0) {
                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918f178);
                  puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                }
                uVar20 = *puVar16;
                lVar3 = thunk_FUN_03f9944c(DAT_09178038);
                FUN_05322d94(lVar3,uVar20,DAT_091e71f0,0);
                plVar18 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x48);
                *plVar18 = lVar3;
                thunk_FUN_03f5d7b8(plVar18,lVar3);
              }
              uVar5 = FUN_04ab6f28(uVar15,lVar3,DAT_091c9360);
              if ((uVar5 & 1) == 0) {
                uVar20 = *(undefined8 *)(unaff_x26 + 0x10);
                uVar15 = thunk_FUN_03f9944c(DAT_09179750);
                FUN_05330e2c(uVar15,unaff_x27,DAT_091e72d8,0);
                uVar15 = FUN_04af8368(uVar20,uVar15,DAT_091ca500);
                lVar3 = FUN_04b049e4(uVar15,DAT_091cad18);
                plVar18 = (long *)(unaff_x26 + 0x28);
                *plVar18 = lVar3;
                thunk_FUN_03f5d7b8();
                uVar20 = *(undefined8 *)(unaff_x26 + 0x20);
                uVar15 = thunk_FUN_03f9944c(DAT_09179b98);
                FUN_05330e2c(uVar15,unaff_x27,DAT_091e72e0,0);
                uVar15 = FUN_04af8368(uVar20,uVar15,DAT_091ca810);
                lVar3 = FUN_04b049e4(uVar15,DAT_091cad18);
                *(long *)(unaff_x26 + 0x30) = lVar3;
                thunk_FUN_03f5d7b8();
                uVar20 = *(undefined8 *)(unaff_x26 + 0x10);
                uVar15 = thunk_FUN_03f9944c(DAT_09179760);
                FUN_05330e2c(uVar15,unaff_x27,DAT_091e72d0,0);
                uVar15 = FUN_04af8368(uVar20,uVar15,DAT_091ca510);
                uVar15 = FUN_04b049e4(uVar15,DAT_091caf38);
                *(undefined8 *)(unaff_x26 + 0x38) = uVar15;
                thunk_FUN_03f5d7b8();
                lVar3 = thunk_FUN_03f9944c(DAT_0917c520);
                FUN_05796918(lVar3,DAT_091adc70);
                plVar4 = (long *)(unaff_x27 + 0x20);
                *plVar4 = lVar3;
                thunk_FUN_03f5d7b8(plVar4,lVar3);
                if (*(long *)(unaff_x26 + 0x10) != 0) {
                  uVar15 = FUN_03f5c394(DAT_0917fc40,
                                        *(undefined4 *)(*(long *)(unaff_x26 + 0x10) + 0x18));
                  *(undefined8 *)(unaff_x27 + 0x18) = uVar15;
                  thunk_FUN_03f5d7b8((undefined8 *)(unaff_x27 + 0x18),uVar15);
                  lVar3 = *in_stack_00000038;
                  if (lVar3 != 0) {
                    iVar1 = 0;
                    do {
                      if (*(int *)(lVar3 + 0x18) <= iVar1) {
                        if (*plVar4 != 0) {
                          FUN_05798b14(*plVar4,DAT_091adcf0);
                          if (*plVar4 != 0) {
                            uVar15 = FUN_05798d44(*plVar4,DAT_091add08);
                            *(undefined8 *)(unaff_x26 + 0x48) = uVar15;
                            thunk_FUN_03f5d7b8();
                            uVar20 = *(undefined8 *)(unaff_x26 + 0x10);
                            lVar3 = *unaff_x21;
                            uVar15 = thunk_FUN_03f9944c(DAT_09178ae0);
                            FUN_05324070(uVar15,lVar3,DAT_091e7288,0);
                            uVar15 = FUN_04af8044(uVar20,uVar15,DAT_091ca4f8);
                            uVar15 = FUN_04b049e4(uVar15,DAT_091cad10);
                            *(undefined8 *)(unaff_x26 + 0x50) = uVar15;
                            thunk_FUN_03f5d7b8();
                            if (*(long *)(unaff_x26 + 0x10) != 0) {
                              lVar3 = FUN_03f5c394(DAT_0917fc40,
                                                   *(undefined4 *)
                                                    (*(long *)(unaff_x26 + 0x10) + 0x18));
                              plVar4 = (long *)(unaff_x26 + 0x58);
                              *plVar4 = lVar3;
                              thunk_FUN_03f5d7b8(plVar4,lVar3);
                              uVar15 = *(undefined8 *)(unaff_x26 + 0x18);
                              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                              lVar3 = puVar16[10];
                              if (lVar3 == 0) {
                                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                  puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                                }
                                uVar20 = *puVar16;
                                lVar3 = thunk_FUN_03f9944c(DAT_09178570);
                                FUN_05322d94(lVar3,uVar20,DAT_091e71c8,0);
                                plVar6 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x50);
                                *plVar6 = lVar3;
                                thunk_FUN_03f5d7b8(plVar6,lVar3);
                              }
                              plVar6 = (long *)FUN_04b0cafc(uVar15,lVar3,DAT_091cb408);
                              if (plVar6 != (long *)0x0) {
                                lVar3 = *plVar6;
                                uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                                if (uVar5 == 0) goto LAB_0447eadc;
                                piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                goto LAB_0447eac4;
                              }
                            }
                          }
                        }
                        break;
                      }
                      CookingGraph_CookingGraphIndex_<>c__DisplayClass20_1__<_ctor>g__Visit_11
                                (unaff_x27,iVar1);
                      iVar1 = iVar1 + 1;
                      lVar3 = *in_stack_00000038;
                    } while (lVar3 != 0);
                  }
                }
                goto LAB_044803b4;
              }
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar15 = thunk_FUN_03f9944c();
              puVar7 = &DAT_091fba10;
              goto LAB_044804c8;
            }
          }
        }
      }
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar15 = thunk_FUN_03f9944c();
  puVar7 = &DAT_09203848;
LAB_044804c8:
  uVar20 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentException___ctor(uVar15,uVar20,0);
  uVar20 = thunk_FUN_03fc39d4(&DAT_091c6608);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar15,uVar20);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_0447eac4:
    if (*(long *)(piVar12 + -2) == DAT_0917a3b8) {
      puVar16 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0447eaf8;
    }
  }
LAB_0447eadc:
  puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a3b8,0);
LAB_0447eaf8:
  plVar6 = (long *)(*(code *)*puVar16)(plVar6,puVar16[1]);
  in_stack_00000080 = &stack0x000000d8;
  in_stack_00000078 = 0;
  do {
    in_stack_000000d8 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar16 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0447eb84;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0447eb84:
    uVar5 = (*(code *)*puVar16)(plVar6,puVar16[1]);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000080;
      if (plVar6 == (long *)0x0) goto LAB_0447fa58;
      lVar3 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_0447fa30;
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_0918f1c0);
    System_Object___ctor(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar21 = (long *)(lVar3 + 0x18);
    *plVar21 = unaff_x27;
    thunk_FUN_03f5d7b8(plVar21);
    plVar6 = in_stack_000000d8;
    if (in_stack_000000d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar19 = *in_stack_000000d8;
    uVar5 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917aa60) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0447ec24;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(in_stack_000000d8,DAT_0917aa60,0);
LAB_0447ec24:
    uVar15 = (*(code *)*puVar16)(plVar6,puVar16[1]);
    puVar16 = (undefined8 *)(lVar3 + 0x10);
    *puVar16 = uVar15;
    thunk_FUN_03f5d7b8(puVar16);
    if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar19 = *(long *)(*plVar21 + 0x28);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = CookingGraph_CompositeStructureTranslator__SlotsOf
                       (*(undefined8 *)(lVar19 + 0x18),*puVar16,0);
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    lVar19 = puVar16[0xb];
    if (lVar19 == 0) {
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar16 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      }
      uVar20 = *puVar16;
      lVar19 = thunk_FUN_03f9944c(DAT_091792f8);
      FUN_05324070(lVar19,uVar20,DAT_091e71d0,0);
      plVar6 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x58);
      *plVar6 = lVar19;
      thunk_FUN_03f5d7b8(plVar6,lVar19);
    }
    uVar15 = FUN_04afac50(uVar15,lVar19,DAT_091ca9d8);
    lVar19 = thunk_FUN_03f9944c(DAT_09179e10);
    FUN_053eb620(lVar19,uVar15,DAT_091a8260);
    if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(*plVar21 + 0x28);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(lVar10 + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = *(undefined8 *)(lVar10 + 0x88);
    plVar6 = (long *)(lVar3 + 0x20);
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_03f9944c(DAT_09178590);
      FUN_05322d94(lVar10,lVar3,DAT_091e7328,0);
      *plVar6 = lVar10;
      thunk_FUN_03f5d7b8(plVar6,lVar10);
    }
    plVar6 = (long *)FUN_04b0cafc(uVar15,lVar10,DAT_091cb410);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a3c0) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0447ee08;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a3c0,0);
LAB_0447ee08:
    plVar6 = (long *)(*(code *)*puVar16)(plVar6,puVar16[1]);
    in_stack_000000d0 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar16 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0447ee74;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_0447ee74:
    uVar5 = (*(code *)*puVar16)(plVar6,puVar16[1]);
    plVar6 = in_stack_000000d0;
    if ((uVar5 & 1) != 0) {
      lVar19 = thunk_FUN_03f9944c(DAT_0918f1c8);
      System_Object___ctor(lVar19,0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar19 + 0x18) = lVar3;
      thunk_FUN_03f5d7b8((long *)(lVar19 + 0x18));
      plVar18 = in_stack_000000d0;
      if (in_stack_000000d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *in_stack_000000d0;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_0447eef8;
      piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_0447eee0;
    }
    if (in_stack_000000d0 != (long *)0x0) {
      lVar3 = *in_stack_000000d0;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185a58) {
            puVar16 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0447f760;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(in_stack_000000d0,DAT_09185a58,0);
LAB_0447f760:
      (*(code *)*puVar16)(plVar6,puVar16[1]);
    }
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_053ec0b0(&stack0x00000088,lVar19,DAT_091a8280);
    in_stack_000000f0 = in_stack_00000098;
    in_stack_000000e8 = _uStack0000000000000090;
    in_stack_000000e0 = in_stack_00000088;
    in_stack_00000088 = 0;
    _uStack0000000000000090 = &stack0x000000e0;
    while (uVar5 = FUN_071bb7b4(&stack0x000000e0,DAT_091a3370), (uVar5 & 1) != 0) {
      lVar3 = *(long *)(unaff_x26 + 0x58);
      uVar2 = CookingGraph_CookingGraphIndex__Ingredient(unaff_x26,in_stack_000000f0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(lVar3 + (ulong)uVar2 + 0x20) = 1;
    }
    FUN_071bb7b0(&stack0x000000e0,DAT_091a3368);
    plVar6 = in_stack_000000d8;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar16 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0447fa4c;
    }
  }
LAB_0447fa30:
  puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0447fa4c:
  (*(code *)*puVar16)(plVar6,puVar16[1]);
LAB_0447fa58:
  if (in_stack_00000078 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  uVar15 = *puVar8;
  if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
  lVar3 = puVar8[0xd];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    }
    uVar20 = *puVar8;
    lVar3 = thunk_FUN_03f9944c(DAT_09179350);
    FUN_05324070(lVar3,uVar20,DAT_091e7178,0);
    plVar6 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x68);
    *plVar6 = lVar3;
    thunk_FUN_03f5d7b8(plVar6,lVar3);
  }
  uVar15 = FUN_04afabe0(uVar15,lVar3,DAT_091ca9f0);
  lVar3 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6ef0(lVar3,uVar15,DAT_091a82a0);
  if (*in_stack_00000038 != 0) {
    lVar19 = FUN_03f5c394(DAT_0917fa78,*(undefined4 *)(*in_stack_00000038 + 0x18));
    plVar6 = (long *)(unaff_x26 + 0x60);
    *plVar6 = lVar19;
    thunk_FUN_03f5d7b8(plVar6,lVar19);
    lVar19 = thunk_FUN_03f9944c(DAT_0918f1d0);
    System_Object___ctor(lVar19,0);
    if (lVar19 != 0) {
      *(undefined4 *)(lVar19 + 0x10) = 0;
      lVar10 = *in_stack_00000038;
      if (lVar10 != 0) {
        iVar1 = 0;
        while (iVar1 < *(int *)(lVar10 + 0x18)) {
          lVar10 = thunk_FUN_03f9944c(DAT_0918f190);
          System_Object___ctor(lVar10,0);
          lVar11 = *plVar18;
          if (lVar11 == 0) goto LAB_044803b4;
          uVar2 = *(uint *)(lVar19 + 0x10);
          if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_04480454;
          lVar13 = *plVar4;
          if (lVar13 == 0) goto LAB_044803b4;
          if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_04480454;
          if (*(char *)(lVar13 + (int)uVar2 + 0x20) == '\0') {
            lVar11 = *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_044803b4;
            if (1 < *(int *)(lVar11 + 0x18)) {
              if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
              lVar13 = puVar8[0xe];
              if (lVar13 == 0) {
                if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
                }
                uVar15 = *puVar8;
                lVar13 = thunk_FUN_03f9944c(DAT_09179360);
                FUN_05322d94(lVar13,uVar15,DAT_091e71e0,0);
                plVar21 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x70);
                *plVar21 = lVar13;
                thunk_FUN_03f5d7b8(plVar21,lVar13);
              }
              uVar5 = FUN_04ab6f28(lVar11,lVar13,DAT_091c9548);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_04480454;
                lVar13 = *(long *)(lVar11 + 0x20);
                if ((lVar13 == 0) || (lVar10 == 0)) goto LAB_044803b4;
                *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar13 + 0x10);
                uVar20 = *(undefined8 *)(lVar13 + 0x30);
                uVar15 = thunk_FUN_03f9944c(DAT_09178290);
                FUN_0530cf38(uVar15,lVar19,DAT_091e7338,0);
                FUN_04ae2124(uVar20,uVar15,DAT_091c9ac8);
                *(undefined4 *)(lVar10 + 0x18) = extraout_var;
                if (lVar3 == 0) goto LAB_044803b4;
                uVar5 = FUN_053d750c(lVar3,*(undefined4 *)(lVar10 + 0x10),DAT_091a82c0);
                if ((uVar5 & 1) == 0) {
                  *(undefined4 *)(lVar10 + 0x14) = *(undefined4 *)(lVar19 + 0x10);
                  uVar15 = thunk_FUN_03f9944c(DAT_09179360);
                  FUN_05322d94(uVar15,lVar10,DAT_091e72f0,0);
                  uVar5 = FUN_04ab300c(lVar11,uVar15,DAT_091c92d0);
                  if ((uVar5 & 1) != 0) {
                    lVar11 = *(long *)(unaff_x26 + 0x30);
                    if (lVar11 == 0) goto LAB_044803b4;
                    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar10 + 0x10)) goto LAB_04480454;
                    uVar20 = *(undefined8 *)
                              (lVar11 + (long)(int)*(uint *)(lVar10 + 0x10) * 8 + 0x20);
                    uVar15 = thunk_FUN_03f9944c(DAT_09179360);
                    FUN_05322d94(uVar15,lVar10,DAT_091e72f0,0);
                    uVar5 = FUN_04ab300c(uVar20,uVar15,DAT_091c92d0);
                    if ((uVar5 & 1) != 0) {
                      lVar11 = *plVar6;
                      uVar2 = *(uint *)(lVar19 + 0x10);
                      in_stack_00000078 = 0;
                      FUN_066c1fdc(&stack0x00000078,*(undefined4 *)(lVar10 + 0x10),
                                   *(undefined4 *)(lVar10 + 0x18),DAT_091bec98);
                      _uStack0000000000000090 =
                           (undefined8 *)((ulong)_uStack0000000000000090 & 0xffffffff00000000);
                      in_stack_00000088 = 0;
                      FUN_05c25e3c(&stack0x00000088,in_stack_00000078,DAT_091b6960);
                      if (lVar11 == 0) goto LAB_044803b4;
                      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_04480454;
                      lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
                      *(undefined8 *)(lVar11 + 0x20) = in_stack_00000088;
                      *(undefined4 *)(lVar11 + 0x28) = uStack0000000000000090;
                    }
                  }
                }
              }
            }
          }
          iVar1 = *(int *)(lVar19 + 0x10) + 1;
          *(int *)(lVar19 + 0x10) = iVar1;
          lVar10 = *in_stack_00000038;
          if (lVar10 == 0) goto LAB_044803b4;
        }
        lVar3 = *plVar6;
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        lVar19 = puVar8[0xf];
        if (lVar19 == 0) {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          }
          uVar15 = *puVar8;
          lVar19 = thunk_FUN_03f9944c(DAT_091781b0);
          FUN_0530aadc(lVar19,uVar15,DAT_091e7180,0);
          plVar21 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x78);
          *plVar21 = lVar19;
          thunk_FUN_03f5d7b8(plVar21,lVar19);
        }
        uVar15 = FUN_04b0a0c4(lVar3,lVar19,DAT_091cb380);
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f178);
        }
        puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        lVar3 = puVar8[0x10];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          }
          uVar20 = *puVar8;
          lVar3 = thunk_FUN_03f9944c(DAT_091781b8);
          FUN_0530ab94(lVar3,uVar20,DAT_091e7188,0);
          plVar21 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x80);
          *plVar21 = lVar3;
          thunk_FUN_03f5d7b8(plVar21,lVar3);
        }
        uVar15 = FUN_04ae6b14(uVar15,lVar3,DAT_091c9de0);
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f178);
        }
        puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        lVar3 = puVar8[0x11];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          }
          uVar20 = *puVar8;
          lVar3 = thunk_FUN_03f9944c(DAT_09178020);
          FUN_05322d94(lVar3,uVar20,DAT_091e7190,0);
          plVar21 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x88);
          *plVar21 = lVar3;
          thunk_FUN_03f5d7b8(plVar21,lVar3);
        }
        uVar15 = FUN_04b0cafc(uVar15,lVar3,DAT_091cb358);
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f178);
        }
        puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        lVar3 = puVar8[0x12];
        if (lVar3 == 0) {
          if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f178);
            puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
          }
          uVar20 = *puVar8;
          lVar3 = thunk_FUN_03f9944c(DAT_09178028);
          FUN_053239c8(lVar3,uVar20,DAT_091e7198,0);
          plVar21 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x90);
          *plVar21 = lVar3;
          thunk_FUN_03f5d7b8(plVar21,lVar3);
        }
        uVar15 = FUN_04af6d6c(uVar15,lVar3,DAT_091ca190);
        lVar3 = thunk_FUN_03f9944c(DAT_09179e18);
        FUN_053d6ef0(lVar3,uVar15,DAT_091a82a0);
        lVar19 = *in_stack_00000038;
        if (lVar19 != 0) {
          uVar5 = 0;
          lVar10 = 0x20;
          goto LAB_04480150;
        }
      }
    }
  }
  goto LAB_044803b4;
LAB_0448025c:
  if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
    lVar3 = *unaff_x21;
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
      uVar17 = *(undefined8 *)(lVar3 + 0x10);
      uVar20 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x58);
      uVar15 = thunk_FUN_03f9944c(DAT_091787f0);
      FUN_053239c8(uVar15,uVar17,DAT_091c6900,0);
      uVar15 = FUN_04af6d6c(uVar20,uVar15,DAT_091ca3d8);
      uVar15 = FUN_04b0462c(uVar15,DAT_091cae30);
      *(undefined8 *)(unaff_x26 + 0x78) = uVar15;
      thunk_FUN_03f5d7b8((undefined8 *)(unaff_x26 + 0x78),uVar15);
      return;
    }
    goto LAB_044803b4;
  }
  plVar14 = (long *)*puVar8;
  lVar3 = *unaff_x21;
  uVar15 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar15,DAT_091a8298);
  if ((lVar3 == 0) ||
     (lVar3 = CookingGraph_CookingGraphIndex_<>c__DisplayClass20_0__<_ctor>g__Reach_18
                        (lVar3,uVar5 & 0xffffffff,uVar15), plVar14 == (long *)0x0))
  goto LAB_044803b4;
  if ((lVar3 != 0) &&
     (lVar19 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0)) {
    uVar15 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar15,0);
  }
  if (*(uint *)(plVar14 + 3) <= uVar5) {
LAB_04480454:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar14[uVar5 + 4] = lVar3;
  thunk_FUN_03f5d7b8(plVar14 + uVar5 + 4,lVar3);
  lVar3 = *plVar4;
  if (lVar3 == 0) goto LAB_044803b4;
  uVar2 = (uint)uVar5;
  if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_04480454;
  iVar1 = 1;
  uVar9 = uVar5 & 0xffffffff;
  while( true ) {
    if (*(char *)(lVar3 + (int)uVar2 + 0x20) != '\0') break;
    lVar19 = *plVar18;
    if (lVar19 == 0) goto LAB_044803b4;
    if (*(uint *)(lVar19 + 0x18) <= (uint)uVar9) goto LAB_04480454;
    lVar19 = *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar19 == 0) goto LAB_044803b4;
    if (*(long *)(lVar19 + 0x18) == 0) break;
    if ((int)*(long *)(lVar19 + 0x18) == 0) goto LAB_04480454;
    lVar19 = *(long *)(lVar19 + 0x20);
    if (lVar19 == 0) goto LAB_044803b4;
    lVar10 = (long)*(int *)(lVar19 + 0x18) * (long)iVar1;
    if (lVar10 - (int)lVar10 != 0) {
      uVar15 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar15,DAT_091c6608);
    }
    uVar2 = *(uint *)(lVar19 + 0x14);
    uVar9 = (ulong)uVar2;
    iVar1 = *(int *)(lVar19 + 0x18) * iVar1;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_04480454;
  }
  lVar3 = *plVar6;
  if (lVar3 == 0) goto LAB_044803b4;
  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04480454;
  *(uint *)(lVar3 + uVar5 * 4 + 0x20) = (uint)uVar9;
  lVar3 = *plVar21;
  if (lVar3 == 0) goto LAB_044803b4;
  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04480454;
  lVar19 = uVar5 * 4;
  uVar5 = uVar5 + 1;
  *(int *)(lVar3 + lVar19 + 0x20) = iVar1;
  lVar3 = *in_stack_00000038;
  if (lVar3 == 0) goto LAB_044803b4;
  goto LAB_0448025c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_0447eee0:
    if (*(long *)(piVar12 + -2) == DAT_0917aa68) {
      puVar8 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0447ef14;
    }
  }
LAB_0447eef8:
  puVar8 = (undefined8 *)FUN_03f95da8(in_stack_000000d0,DAT_0917aa68,0);
LAB_0447ef14:
  lVar3 = (*(code *)*puVar8)(plVar18,puVar8[1]);
  plVar18 = (long *)(lVar19 + 0x10);
  *plVar18 = lVar3;
  thunk_FUN_03f5d7b8(plVar18);
  if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar15 = *(undefined8 *)(*plVar18 + 0x50);
  if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
  lVar3 = puVar8[0xc];
  if (lVar3 == 0) {
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar8 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    }
    uVar20 = *puVar8;
    lVar3 = thunk_FUN_03f9944c(DAT_091785b8);
    FUN_05324070(lVar3,uVar20,DAT_091e71d8,0);
    plVar18 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0x60);
    *plVar18 = lVar3;
    thunk_FUN_03f5d7b8(plVar18,lVar3);
  }
  lVar3 = FUN_04afac50(uVar15,lVar3,DAT_091ca900);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_089db4a8();
  return;
  while( true ) {
    lVar19 = *plVar6;
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar5) goto LAB_04480454;
    if (*(char *)(lVar19 + lVar10) != '\0') {
      uVar15 = FUN_05c25e54(lVar19 + lVar10,DAT_091b6970);
      if (lVar3 == 0) break;
      uVar9 = FUN_053d750c(lVar3,uVar15,DAT_091a82c0);
      if ((uVar9 & 1) != 0) {
        lVar19 = *plVar6;
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar5) goto LAB_04480454;
        *(undefined4 *)((undefined8 *)(lVar19 + lVar10) + 1) = 0;
        *(undefined8 *)(lVar19 + lVar10) = 0;
      }
    }
    lVar19 = *in_stack_00000038;
    uVar5 = uVar5 + 1;
    lVar10 = lVar10 + 0xc;
    if (lVar19 == 0) break;
LAB_04480150:
    if ((long)(int)*(undefined8 *)(lVar19 + 0x18) <= (long)uVar5) {
      uVar15 = FUN_03f5c394(DAT_0917f9f0);
      puVar8 = (undefined8 *)(unaff_x26 + 0x80);
      *puVar8 = uVar15;
      thunk_FUN_03f5d7b8(puVar8,uVar15);
      if (*(long *)(unaff_x26 + 0x10) != 0) {
        lVar3 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(*(long *)(unaff_x26 + 0x10) + 0x18));
        plVar6 = (long *)(unaff_x26 + 0x68);
        *plVar6 = lVar3;
        thunk_FUN_03f5d7b8(plVar6,lVar3);
        if (*(long *)(unaff_x26 + 0x10) != 0) {
          lVar3 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(*(long *)(unaff_x26 + 0x10) + 0x18));
          plVar21 = (long *)(unaff_x26 + 0x70);
          *plVar21 = lVar3;
          thunk_FUN_03f5d7b8(plVar21,lVar3);
          lVar3 = *(long *)(unaff_x26 + 0x10);
          if (lVar3 != 0) {
            uVar5 = 0;
            goto LAB_0448025c;
          }
        }
      }
      break;
    }
  }
LAB_044803b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

