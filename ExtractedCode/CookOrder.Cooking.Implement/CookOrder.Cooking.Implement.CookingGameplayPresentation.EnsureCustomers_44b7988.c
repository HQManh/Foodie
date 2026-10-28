// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$EnsureCustomers
// address: 0x44b7988
// body: available
// range: 0x44b7988-0x44b92e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b86f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b922c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b923c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b924c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b9250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044b81d8) */
/* WARNING: Removing unreachable block (ram,0x044b92d8) */
/* WARNING: Removing unreachable block (ram,0x044b877c) */
/* WARNING: Removing unreachable block (ram,0x044b92e0) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureCustomers
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  double local_f0;
  long **pplStack_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long *local_a8;
  
  if ((DAT_09518235 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6578);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0919d608);
    FUN_03f5c2a4(&DAT_0919d980);
    FUN_03f5c2a4(&DAT_0919de30);
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_0919de38);
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d610);
    FUN_03f5c2a4(&DAT_0919de40);
    FUN_03f5c2a4(&DAT_0919d618);
    FUN_03f5c2a4(&DAT_0919de48);
    FUN_03f5c2a4(&DAT_0919dee8);
    FUN_03f5c2a4(&DAT_0919d650);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_0919d628);
    FUN_03f5c2a4(&DAT_091c9408);
    FUN_03f5c2a4(&DAT_091ca168);
    FUN_03f5c2a4(&DAT_091ca358);
    FUN_03f5c2a4(&DAT_091cab38);
    FUN_03f5c2a4(&DAT_091cad68);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09178668);
    FUN_03f5c2a4(&DAT_09178678);
    FUN_03f5c2a4(&DAT_09178660);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_091a82f0);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a418);
    FUN_03f5c2a4(&DAT_0917a420);
    FUN_03f5c2a4(&DAT_0917aac8);
    FUN_03f5c2a4(&DAT_0917aac0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b318);
    FUN_03f5c2a4(&DAT_0917b4b8);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091d4b78);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091e6ec8);
    FUN_03f5c2a4(&DAT_091e6ed0);
    FUN_03f5c2a4(&DAT_091e7018);
    FUN_03f5c2a4(&DAT_0918f078);
    FUN_03f5c2a4(&DAT_091e7020);
    FUN_03f5c2a4(&DAT_0918f080);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_09213178);
    DAT_09518235 = 1;
  }
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar5,DAT_091a8298);
  if ((param_5 != 0) && (plVar14 = *(long **)(param_5 + 0x30), plVar14 != (long *)0x0)) {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a418) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044b7cd8;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a418,0);
LAB_044b7cd8:
    local_a8 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
    pplStack_e8 = &local_a8;
    local_f0 = 0.0;
    do {
      plVar14 = local_a8;
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *local_a8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044b7d60;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,0);
LAB_044b7d60:
      uVar11 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      plVar14 = local_a8;
      if ((uVar11 & 1) == 0) {
        if (local_a8 == (long *)0x0) goto LAB_044b81cc;
        lVar9 = *local_a8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_044b81a4;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_044b818c;
      }
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *local_a8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917aac0) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044b7dcc;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917aac0,0);
LAB_044b7dcc:
      lVar9 = (*(code *)*puVar6)(plVar14,puVar6[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_4 + 0x308) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = FUN_06ef1fe8(*(long *)(param_4 + 0x308),*(undefined4 *)(lVar9 + 0x10),&local_b0,
                            DAT_0919d638);
      lVar7 = local_b0;
      if ((uVar11 & 1) == 0) {
LAB_044b7e28:
        uVar15 = *(undefined8 *)(param_4 + 0x1b0);
        uVar16 = *(undefined8 *)(param_4 + 0x128);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_b0 = FUN_04c35338(uVar15,uVar16,DAT_091d4b78);
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = UnityEngine_Component__get_gameObject(local_b0,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar7,1,0);
        lVar7 = local_b0;
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        cVar1 = *(char *)(param_4 + 0x148);
        *(bool *)(local_b0 + 0x74) = cVar1 != *(char *)(lVar9 + 0x21);
        if (*(long *)(param_4 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar20 = *(float *)(param_4 + 0x154) +
                 *(float *)(param_4 + 0x150) * (float)*(int *)(param_4 + 0x14c) * 0.5;
        if (cVar1 != '\0') {
          fVar20 = -fVar20;
        }
        param_2 = 0;
        param_3 = 0;
        uVar21 = UnityEngine_Transform__TransformPoint(fVar20,*(long *)(param_4 + 0x128),0);
        *(undefined4 *)(lVar7 + 0x78) = uVar21;
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(local_b0 + 0x7c) = *(undefined4 *)(param_4 + 0x164);
        *(undefined4 *)(local_b0 + 0x80) = *(undefined4 *)(param_4 + 0x16c);
        if (*(long *)(param_4 + 0x350) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = FUN_06ef1fe8(*(long *)(param_4 + 0x350),*(undefined4 *)(lVar9 + 0x10),&local_b8,
                              DAT_0919d610);
        if ((uVar11 & 1) != 0) {
          if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookOrder_Cooking_Implement_CookingCustomerView__AdoptBody(local_b0,local_b8,0);
          if (*(long *)(param_4 + 0x350) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06ef19b4(*(long *)(param_4 + 0x350),*(undefined4 *)(lVar9 + 0x10),DAT_0919d608);
          if (*(long *)(param_4 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = FUN_06ef1fe8(*(long *)(param_4 + 400),*(undefined4 *)(lVar9 + 0x10),&local_c0,
                                DAT_0919de38);
          if ((uVar11 & 1) != 0) {
            if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar15 = UnityEngine_Component__get_gameObject(local_c0,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Object__Destroy(uVar15,0);
          }
          if (*(long *)(param_4 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06ef19b4(*(long *)(param_4 + 400),*(undefined4 *)(lVar9 + 0x10),DAT_0919de30);
          if (*(long *)(param_4 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06ee7514(*(long *)(param_4 + 0x198),*(undefined4 *)(lVar9 + 0x10),DAT_0919d980);
        }
        lVar7 = local_b0;
        if (*(long *)(param_4 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar10 + 0x28);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar16 = *(undefined8 *)(param_4 + 0x2e0);
        uVar15 = FUN_057e0998(lVar10,*(undefined4 *)(lVar9 + 0x10),DAT_091ac208);
        if (*(long *)(param_5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_4 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar10 + 0x28);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar17 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x38);
        lVar18 = *(long *)(param_4 + 0x140);
        lVar19 = *(long *)(param_4 + 0x2e0);
        lVar10 = FUN_057e0998(lVar10,*(undefined4 *)(lVar9 + 0x10),DAT_091ac208);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar8 = CookOrder_Cooking_Implement_CookingMapPresentation__Character
                          (lVar19,*(undefined8 *)(lVar10 + 0x38),*(undefined4 *)(lVar9 + 0x10),
                           *(undefined1 *)(lVar9 + 0x20),*(undefined1 *)(lVar9 + 0x21),0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar8,uVar8);
        }
        uVar8 = CookOrder_Cooking_Implement_CookingCustomerAssets__Prefab(lVar18,uVar8,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CookOrder_Cooking_Implement_CookingCustomerView__Bind
                  (lVar7,uVar16,lVar9,uVar15,uVar17,uVar8,0);
        if (*(long *)(param_4 + 0x308) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06ef04f8(*(long *)(param_4 + 0x308),*(undefined4 *)(lVar9 + 0x10),local_b0,DAT_0919d650)
        ;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053d8048(lVar5,*(undefined4 *)(lVar9 + 0x10),DAT_091a82b0);
      }
      else {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = UnityEngine_Object__op_Implicit(lVar7,0);
        if ((uVar11 & 1) == 0) goto LAB_044b7e28;
      }
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CookOrder_Cooking_Implement_CookingCustomerView__Render(local_b0,lVar9,0);
      if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(param_4 + 0x340);
      uVar21 = *(undefined4 *)(lVar9 + 0x10);
      lVar9 = UnityEngine_Component__get_transform(local_b0,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_position(lVar9,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06f0c2ec(lVar7,uVar21,DAT_0919dee8);
    } while( true );
  }
  goto LAB_044b9228;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_044b818c:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044b81c0;
    }
  }
LAB_044b81a4:
  puVar6 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_044b81c0:
  (*(code *)*puVar6)(plVar14,puVar6[1]);
LAB_044b81cc:
  if (lVar5 == 0) goto LAB_044b9228;
  if (0 < *(int *)(lVar5 + 0x20)) {
    lVar9 = thunk_FUN_03f9944c(DAT_0918f078);
    CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass178_0___ctor(lVar9,0);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x18) = param_4;
      thunk_FUN_03f5d7b8((long *)(lVar9 + 0x18),param_4);
      uVar16 = *(undefined8 *)(param_5 + 0x30);
      uVar15 = thunk_FUN_03f9944c(DAT_09178668);
      FUN_05324070(uVar15,param_4,DAT_091c6578,0);
      uVar15 = FUN_04af8044(uVar16,uVar15,DAT_091ca358);
      plVar14 = (long *)FUN_04b049e4(uVar15,DAT_091cad68);
      uVar15 = *(undefined8 *)(param_5 + 0x30);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
      }
      puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar7 = puVar6[0x29];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f030);
          puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar16 = *puVar6;
        lVar7 = thunk_FUN_03f9944c(DAT_09178660);
        FUN_05322d94(lVar7,uVar16,DAT_091e6ec8,0);
        lVar10 = *(long *)(DAT_0918f030 + 0xb8);
        *(long *)(lVar10 + 0x148) = lVar7;
        thunk_FUN_03f5d7b8(lVar10 + 0x148,lVar7);
      }
      uVar3 = FUN_04ab6f28(uVar15,lVar7,DAT_091c9408);
      iVar4 = *(int *)(param_4 + 0x14c);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      fVar20 = (float)(int)(iVar4 - ((uVar3 ^ 0xffffffff) & 1));
      lVar7 = puVar6[0x2a];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar6 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar15 = *puVar6;
        lVar7 = thunk_FUN_03f9944c(DAT_09178678);
        FUN_05324834(lVar7,uVar15,DAT_091e6ed0,0);
        lVar10 = *(long *)(DAT_0918f030 + 0xb8);
        *(long *)(lVar10 + 0x150) = lVar7;
        thunk_FUN_03f5d7b8(lVar10 + 0x150,lVar7);
      }
      fVar22 = (float)FUN_04b02694(plVar14,lVar7,DAT_091cab38);
      uVar15 = DAT_09178678;
      *(bool *)(lVar9 + 0x10) = fVar20 < fVar22;
      uVar15 = thunk_FUN_03f9944c(uVar15);
      FUN_05324834(uVar15,lVar9,DAT_091e7018,0);
      fVar22 = (float)FUN_04b02694(plVar14,uVar15,DAT_091cab38);
      if (plVar14 != (long *)0x0) {
        fVar26 = *(float *)(param_4 + 0x150);
        iVar4 = *(int *)(param_4 + 0x14c);
        fVar22 = (fVar26 * fVar20 - fVar22) / (float)((int)plVar14[3] + 1);
        fVar20 = 0.0;
        if (0.0 <= fVar22) {
          fVar20 = fVar22;
        }
        fVar22 = fVar26;
        if (*(char *)(param_4 + 0x148) != '\0') {
          fVar22 = 0.0;
        }
        fVar28 = 0.0;
        if ((uVar3 & 1) == 0) {
          fVar28 = fVar22;
        }
        if ((*(char *)(param_4 + 0x148) != '\0') ||
           (plVar14 = (long *)FUN_04aeb850(plVar14,DAT_091ca168), plVar14 != (long *)0x0)) {
          lVar7 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917a420) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_044b84cc;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a420,0);
LAB_044b84cc:
          local_c8 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
          pplStack_e8 = &local_c8;
          local_f0 = 0.0;
          if (local_c8 != (long *)0x0) {
            param_2 = 0x3f000000;
            fVar22 = fVar20 + fVar26 * (float)-iVar4 * 0.5 + fVar28;
            do {
              plVar14 = local_c8;
              lVar7 = *local_c8;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_044b8570;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185b10,0);
LAB_044b8570:
              uVar11 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              plVar14 = local_c8;
              if ((uVar11 & 1) == 0) {
                if (local_c8 == (long *)0x0) goto LAB_044b8780;
                lVar5 = *local_c8;
                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar11 == 0) goto LAB_044b8748;
                piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                goto LAB_044b8730;
              }
              if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = *local_c8;
              uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_0917aac8) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_044b85d4;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(local_c8,DAT_0917aac8,0);
LAB_044b85d4:
              lVar7 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar15 = UnityEngine_Component__get_transform(lVar7,0);
              DG_Tweening_ShortcutExtensions__DOKill(uVar15,0,0);
              fVar26 = (float)CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass178_0__<EnsureCustomers>g__Pet_3
                                        (lVar9,lVar7,0);
              fVar28 = *(float *)(param_4 + 0x150);
              uVar11 = FUN_053d750c(lVar5,*(undefined4 *)(lVar7 + 0xe8),DAT_091a82c0);
              fVar26 = fVar22 + fVar26 * fVar28 * 0.5;
              if ((uVar11 & 1) == 0) {
                uVar15 = UnityEngine_Component__get_transform(lVar7,0);
                if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                param_3 = 0;
                uVar15 = DG_Tweening_ShortcutExtensions__DOLocalMove
                                   (fVar26,0,0,*(undefined4 *)(lVar10 + 0x10),uVar15,0,0);
                if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar10 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_04d95dc4(uVar15,*(undefined8 *)(lVar10 + 0x18),DAT_091dbea8);
              }
              else {
                lVar10 = UnityEngine_Component__get_transform(lVar7,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                param_3 = 0;
                UnityEngine_Transform__set_localPosition(fVar26,0,lVar10,0);
                CookOrder_Cooking_Implement_CookingCustomerView__FinishAdoption(lVar7,0);
              }
              fVar26 = (float)CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass178_0__<EnsureCustomers>g__Pet_3
                                        (lVar9,lVar7,0);
              param_2 = (ulong)(uint)*(float *)(param_4 + 0x150);
              fVar22 = fVar22 + fVar20 + (fVar26 + *(float *)(lVar7 + 0xf4)) *
                                         *(float *)(param_4 + 0x150);
            } while (local_c8 != (long *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
    goto LAB_044b9228;
  }
  goto LAB_044b8780;
LAB_044b90c4:
  lVar9 = thunk_FUN_03f9944c(DAT_0918f080);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass178_1___ctor(lVar9,0);
  uVar15 = DAT_09178660;
  if (*(uint *)(lVar5 + 0x18) <= (uint)local_d8) {
LAB_044b922c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (lVar9 == 0) goto LAB_044b9228;
  *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar5 + (long)(int)(uint)local_d8 * 4 + 0x20);
  uVar16 = *(undefined8 *)(param_5 + 0x38);
  uVar15 = thunk_FUN_03f9944c(uVar15);
  FUN_05322d94(uVar15,lVar9,DAT_091e7020,0);
  uVar11 = FUN_04ab6f28(uVar16,uVar15,DAT_091c9408);
  if ((uVar11 & 1) == 0) {
    if (*(long *)(param_4 + 400) == 0) goto LAB_044b9228;
    uVar11 = FUN_06ef1fe8(*(long *)(param_4 + 400),*(undefined4 *)(lVar9 + 0x10),&local_e0,
                          DAT_0919de38);
    if ((uVar11 & 1) != 0) {
      if (local_e0 == 0) goto LAB_044b9228;
      uVar15 = UnityEngine_Component__get_gameObject(local_e0,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar15,0);
    }
    if (*(long *)(param_4 + 400) == 0) goto LAB_044b9228;
    FUN_06ef19b4(*(long *)(param_4 + 400),*(undefined4 *)(lVar9 + 0x10),DAT_0919de30);
    if (*(long *)(param_4 + 0x350) == 0) goto LAB_044b9228;
    FUN_06ef19b4(*(long *)(param_4 + 0x350),*(undefined4 *)(lVar9 + 0x10),DAT_0919d608);
    if (*(long *)(param_4 + 0x198) == 0) goto LAB_044b9228;
    FUN_06ee7514(*(long *)(param_4 + 0x198),*(undefined4 *)(lVar9 + 0x10),DAT_0919d980);
  }
  iVar4 = (uint)local_d8 + 1;
  local_d8 = CONCAT44(local_d8._4_4_,iVar4);
  if (*(int *)(lVar5 + 0x18) <= iVar4) {
    return;
  }
  goto LAB_044b90c4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_044b8730:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_044b8764;
    }
  }
LAB_044b8748:
  puVar6 = (undefined8 *)FUN_03f95da8(local_c8,DAT_09185a58,0);
LAB_044b8764:
  (*(code *)*puVar6)(plVar14,puVar6[1]);
LAB_044b8780:
  uVar11 = 0;
  while( true ) {
    iVar4 = 0;
    if (*(long *)(param_4 + 0x1f0) != 0) {
      iVar4 = (int)*(undefined8 *)(*(long *)(param_4 + 0x1f0) + 0x18);
    }
    if ((long)iVar4 <= (long)uVar11) break;
    plVar14 = *(long **)(param_5 + 0x38);
    if (plVar14 == (long *)0x0) goto LAB_044b9228;
    lVar5 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917b318) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_044b8828;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b318,0);
LAB_044b8828:
    iVar4 = (*(code *)*puVar6)(plVar14,puVar6[1]);
    if ((long)uVar11 < (long)iVar4) {
      plVar14 = *(long **)(param_5 + 0x38);
      if (plVar14 == (long *)0x0) goto LAB_044b9228;
      lVar5 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b4b8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044b8908;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b8,0);
LAB_044b8908:
      lVar5 = (*(code *)*puVar6)(plVar14,uVar11 & 0xffffffff,puVar6[1]);
      lVar9 = *(long *)(param_4 + 0x1f0);
      if (lVar9 == 0) goto LAB_044b9228;
      if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_044b922c;
      uVar15 = *(undefined8 *)(lVar9 + uVar11 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Implicit(uVar15,0);
      if ((uVar12 & 1) == 0) {
        if (lVar5 == 0) goto LAB_044b9228;
      }
      else {
        lVar9 = *(long *)(param_4 + 0x1f0);
        if (lVar9 == 0) goto LAB_044b9228;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_044b922c;
        if ((lVar5 == 0) || (lVar9 = *(long *)(lVar9 + uVar11 * 8 + 0x20), lVar9 == 0))
        goto LAB_044b9228;
        CookOrder_Cooking_Implement_CookingOrderPreview__Show
                  (lVar9,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(param_4 + 0x2e0),0);
      }
      if (*(long *)(param_4 + 0x350) == 0) goto LAB_044b9228;
      uVar12 = FUN_06ef1fe8(*(long *)(param_4 + 0x350),*(undefined4 *)(lVar5 + 0x10),&local_d0,
                            DAT_0919d610);
      if ((uVar12 & 1) == 0) {
LAB_044b89d8:
        if ((((*(long *)(param_4 + 0x2d8) == 0) ||
             (lVar9 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120), lVar9 == 0)) ||
            (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_044b9228;
        lVar7 = *(long *)(param_4 + 0x2e0);
        lVar9 = FUN_057e0998(lVar9,*(undefined4 *)(lVar5 + 0x10),DAT_091ac208);
        if ((lVar9 == 0) || (lVar7 == 0)) goto LAB_044b9228;
        uVar15 = CookOrder_Cooking_Implement_CookingMapPresentation__Character
                           (lVar7,*(undefined8 *)(lVar9 + 0x38),*(undefined4 *)(lVar5 + 0x10),
                            *(undefined1 *)(lVar5 + 0x20),*(undefined1 *)(lVar5 + 0x21),0);
        if (*(long *)(param_4 + 0x140) == 0) goto LAB_044b9228;
        uVar15 = CookOrder_Cooking_Implement_CookingCustomerAssets__Prefab
                           (*(long *)(param_4 + 0x140),uVar15,0);
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar5 + 0x10));
        uVar16 = System_Int32__ToString(&local_d8,0);
        uVar16 = System_String__Concat(DAT_09213178,uVar16,0);
        lVar9 = CookOrder_Cooking_Implement_CookingGameplayPresentation__NewAnchor
                          (uVar16,*(undefined8 *)(param_4 + 0x128));
        if (((*(long *)(param_4 + 400) == 0) ||
            (FUN_06ef04f8(*(long *)(param_4 + 400),*(undefined4 *)(lVar5 + 0x10),lVar9,DAT_0919de48)
            , lVar9 == 0)) || (lVar7 = UnityEngine_Component__get_gameObject(lVar9,0), lVar7 == 0))
        goto LAB_044b9228;
        lVar7 = FUN_04b7c294(lVar7,DAT_091cd7a0);
        if (*(long *)(param_4 + 0x1b0) == 0) goto LAB_044b9228;
        uVar16 = *(undefined8 *)(*(long *)(param_4 + 0x1b0) + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = UnityEngine_Object__op_Implicit(uVar16,0);
        if ((uVar12 & 1) != 0) {
          if (((*(long *)(param_4 + 0x1b0) == 0) ||
              (lVar10 = *(long *)(*(long *)(param_4 + 0x1b0) + 0x30), lVar10 == 0)) ||
             (uVar21 = UnityEngine_Rendering_SortingGroup__get_sortingLayerID(lVar10,0), lVar7 == 0)
             ) goto LAB_044b9228;
          UnityEngine_Rendering_SortingGroup__set_sortingLayerID(lVar7,uVar21,0);
          if ((*(long *)(param_4 + 0x1b0) == 0) ||
             (lVar10 = *(long *)(*(long *)(param_4 + 0x1b0) + 0x30), lVar10 == 0))
          goto LAB_044b9228;
          uVar21 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(lVar10,0);
          UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar7,uVar21,0);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = FUN_04c35338(uVar15,lVar9,DAT_091d4bc0);
        if (lVar7 == 0) goto LAB_044b9228;
        UnityEngine_GameObject__SetActive(lVar7,1,0);
        local_d0 = CookOrder_Cooking_Implement_CookingCustomerHandle__Find(lVar7,0);
        uVar12 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(local_d0,0);
        fVar22 = (float)param_3;
        fVar20 = (float)param_2;
        if ((uVar12 & 1) == 0) {
          uVar15 = UnityEngine_Component__get_gameObject(lVar9,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          UnityEngine_Object__Destroy(uVar15,0);
          goto LAB_044b905c;
        }
        if (*(long *)(param_4 + 0x350) == 0) goto LAB_044b9228;
        FUN_06ef04f8(*(long *)(param_4 + 0x350),*(undefined4 *)(lVar5 + 0x10),local_d0,DAT_0919d628)
        ;
        if ((*(long *)(param_4 + 0x1b0) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_4 + 0x1b0) + 0x20), lVar7 == 0)) goto LAB_044b9228;
        fVar26 = (float)UnityEngine_Transform__get_lossyScale(lVar7,0);
        if (*(long *)(param_4 + 0x128) == 0) goto LAB_044b9228;
        fVar28 = fVar20;
        fVar25 = fVar22;
        fVar29 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_4 + 0x128),0);
        fVar20 = fVar20 / fVar28;
        fVar22 = fVar22 / fVar25;
        UnityEngine_Transform__set_localScale(fVar26 / fVar29,lVar9,0);
        bVar2 = true;
      }
      else {
        uVar12 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(local_d0,0);
        fVar22 = (float)param_3;
        fVar20 = (float)param_2;
        if ((uVar12 & 1) == 0) goto LAB_044b89d8;
        bVar2 = false;
      }
      if (*(long *)(param_4 + 0x1b0) == 0) goto LAB_044b9228;
      lVar9 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x1b0),0);
      if (((*(long *)(param_4 + 0x1b0) == 0) ||
          (lVar7 = *(long *)(*(long *)(param_4 + 0x1b0) + 0x20), lVar7 == 0)) ||
         (UnityEngine_Transform__get_position(lVar7,0), lVar9 == 0)) goto LAB_044b9228;
      fVar28 = (float)UnityEngine_Transform__InverseTransformPoint(lVar9,0);
      fVar29 = (float)(int)uVar11;
      fVar25 = *(float *)(param_4 + 0x158) * fVar29 +
               *(float *)(param_4 + 0x150) * (float)(*(int *)(param_4 + 0x14c) + -1) * 0.5;
      fVar26 = -fVar25;
      if (*(char *)(param_4 + 0x148) != '\0') {
        fVar26 = fVar25;
      }
      if (*(long *)(param_4 + 400) == 0) goto LAB_044b9228;
      fVar28 = fVar28 + fVar26;
      fVar25 = fVar20 + 0.0;
      fVar26 = fVar22 + *(float *)(param_4 + 0x15c) + *(float *)(param_4 + 0x160) * fVar29;
      lVar9 = FUN_06ef046c(*(long *)(param_4 + 400),*(undefined4 *)(lVar5 + 0x10),DAT_0919de40);
      if (bVar2) {
        if (lVar9 == 0) goto LAB_044b9228;
        UnityEngine_Transform__set_localPosition(fVar28,fVar25,fVar26,lVar9,0);
      }
      else {
        if (lVar9 == 0) goto LAB_044b9228;
        fVar23 = (float)UnityEngine_Transform__get_localPosition(lVar9,0);
        if (DAT_09517ea7 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09517ea7 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar22 = fVar22 - fVar26;
        param_3 = (ulong)(uint)fVar22;
        param_2 = 0x3a83126f;
        if (0.001 < SQRT(fVar22 * fVar22 +
                         (fVar23 - fVar28) * (fVar23 - fVar28) +
                         (fVar20 - fVar25) * (fVar20 - fVar25))) {
          if (*(int *)(DAT_09183190 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = DG_Tweening_DOTween__IsTweening(lVar9,0,0);
          if ((uVar12 & 1) == 0) {
            if ((*(long *)(param_4 + 0x2e8) == 0) ||
               (lVar7 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40), lVar7 == 0))
            goto LAB_044b9228;
            param_2 = (ulong)(uint)fVar25;
            param_3 = (ulong)(uint)fVar26;
            uVar15 = DG_Tweening_ShortcutExtensions__DOLocalMove
                               (fVar28,param_2,param_3,*(undefined4 *)(lVar7 + 0x10),lVar9,0,0);
            if ((*(long *)(param_4 + 0x2e8) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40), lVar9 == 0))
            goto LAB_044b9228;
            FUN_04d95dc4(uVar15,*(undefined8 *)(lVar9 + 0x18),DAT_091dbea8);
          }
        }
        if (*(long *)(param_4 + 0x198) == 0) goto LAB_044b9228;
        uVar12 = FUN_06ee7aac(*(long *)(param_4 + 0x198),*(undefined4 *)(lVar5 + 0x10),
                              (long)&local_d8 + 4,DAT_0919d990);
        if (((uVar12 & 1) != 0) && (uVar11 == local_d8 >> 0x20)) goto LAB_044b905c;
      }
      if (*(long *)(param_4 + 0x198) == 0) goto LAB_044b9228;
      FUN_06ee612c(*(long *)(param_4 + 0x198),*(undefined4 *)(lVar5 + 0x10),uVar11 & 0xffffffff,
                   DAT_0919d9a8);
      fVar22 = *(float *)(param_4 + 0x164) + *(float *)(param_4 + 0x168) * fVar29;
      fVar20 = 1.0;
      if (fVar22 <= 1.0) {
        fVar20 = fVar22;
      }
      param_3 = (ulong)(uint)fVar20;
      uVar21 = 0;
      fVar26 = 0.0;
      if (0.0 <= fVar22) {
        fVar26 = fVar20;
      }
      if (!bVar2) {
        if ((*(long *)(param_4 + 0x2e8) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40), lVar5 == 0)) goto LAB_044b9228;
        uVar21 = *(undefined4 *)(lVar5 + 0x14);
      }
      if (local_d0 == 0) goto LAB_044b9228;
      CookOrder_Cooking_Implement_CookingCustomerHandle__SetTint(fVar26,uVar21,local_d0,0);
      fVar22 = *(float *)(param_4 + 0x16c) - *(float *)(param_4 + 0x170) * fVar29;
      param_2 = 0;
      fVar20 = 0.05;
      if (0.05 <= fVar22) {
        fVar20 = fVar22;
      }
      if (!bVar2) {
        if ((*(long *)(param_4 + 0x2e8) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x40), lVar5 == 0)) goto LAB_044b9228;
        param_2 = (ulong)*(uint *)(lVar5 + 0x14);
      }
      if ((local_d0 == 0) ||
         (CookOrder_Cooking_Implement_CookingCustomerHandle__SetVisualScale(fVar20,local_d0,0),
         local_d0 == 0)) goto LAB_044b9228;
      CookOrder_Cooking_Implement_CookingCustomerHandle__SetAnimSpeed
                (*(undefined4 *)(param_4 + 0x174),local_d0,0);
      if (bVar2) {
        fVar20 = -1.0;
        if (*(char *)(param_4 + 0x148) != '\0') {
          fVar20 = 1.0;
        }
        if ((*(long *)(param_4 + 0x1b0) == 0) || (local_d0 == 0)) goto LAB_044b9228;
        CookOrder_Cooking_Implement_CookingCustomerHandle__LocalMoveInstant
                  (fVar20 * *(float *)(*(long *)(param_4 + 0x1b0) + 0x40),0,local_d0,0);
        lVar5 = local_d0;
        lVar9 = *(long *)(param_4 + 0x1b0);
        if (lVar9 == 0) goto LAB_044b9228;
        fVar22 = *(float *)(lVar9 + 0x40);
        uVar3 = *(uint *)(lVar9 + 0x44);
        if (DAT_09515cf4 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515cf4 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar27 = (double)fVar22;
        dVar24 = modf(dVar27,&local_f0);
        if (0.0 <= fVar22) {
          if (dVar24 == 0.5) {
            dVar24 = 1.0;
            goto LAB_044b8ff4;
          }
          dVar27 = (double)(long)(dVar27 + 0.5);
        }
        else if (dVar24 == -0.5) {
          dVar24 = -1.0;
LAB_044b8ff4:
          dVar27 = local_f0;
          if (((long)local_f0 & 1U) != 0) {
            dVar27 = local_f0 + dVar24;
          }
        }
        else {
          dVar27 = (double)(long)(dVar27 + -0.5);
        }
        if (lVar5 == 0) goto LAB_044b9228;
        iVar4 = (int)dVar27;
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        param_2 = 0;
        param_3 = (ulong)uVar3;
        if (dVar27 == INFINITY) {
          iVar4 = 1;
        }
        CookOrder_Cooking_Implement_CookingCustomerHandle__WalkIn
                  (-(fVar20 * fVar22),0,param_3,0x3e19999a,lVar5,iVar4,0,0);
      }
    }
    else {
      lVar5 = *(long *)(param_4 + 0x1f0);
      if (lVar5 == 0) goto LAB_044b9228;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_044b922c;
      uVar15 = *(undefined8 *)(lVar5 + uVar11 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Implicit(uVar15,0);
      if ((uVar12 & 1) != 0) {
        lVar5 = *(long *)(param_4 + 0x1f0);
        if (lVar5 == 0) goto LAB_044b9228;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_044b922c;
        lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_044b9228;
        CookOrder_Cooking_Implement_CookingOrderPreview__Hide(lVar5,0);
      }
    }
LAB_044b905c:
    uVar11 = uVar11 + 1;
  }
  if (*(long *)(param_4 + 0x350) != 0) {
    uVar15 = FUN_06ef01b4(*(long *)(param_4 + 0x350),DAT_0919d618);
    lVar5 = FUN_04b0462c(uVar15,DAT_091cae30);
    local_d8 = local_d8 & 0xffffffff00000000;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) < 1) {
        return;
      }
      goto LAB_044b90c4;
    }
  }
LAB_044b9228:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

