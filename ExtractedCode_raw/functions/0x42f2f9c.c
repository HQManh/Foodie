// rea decompile_all
// name: CakeOrder.Profile.UIPopupEditProfile$$BuildGrid
// address: 0x42f2f9c
// body: available
// range: 0x42f2f9c-0x42f3513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f3110 to 0x85f71fc UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42f3460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f34f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f34fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f3500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f3504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f3508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f3510 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042f350c) */

void CakeOrder_Profile_UIPopupEditProfile__BuildGrid(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  
  if ((DAT_095174c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a80);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a868);
    FUN_03f5c2a4(&DAT_0917af80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1418);
    FUN_03f5c2a4(&DAT_091b4a80);
    FUN_03f5c2a4(&DAT_091d4cb0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcf70);
    FUN_03f5c2a4(&DAT_0920f168);
    FUN_03f5c2a4(&DAT_092089a0);
    DAT_095174c8 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar13,0,0);
  if ((uVar3 & 1) == 0) {
    uVar13 = *(undefined8 *)(param_1 + 0xd8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(DAT_091b4a80 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_042f3500:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if ((((*(long *)(param_1 + 0xd8) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xd8),0), lVar5 != 0
             )) && (UnityEngine_GameObject__SetActive(lVar5,0,0), lVar4 != 0)) &&
           (plVar6 = (long *)CakeOrder_DataSO_PlayerAvatarCatalogSO__get_Entries(lVar4,0),
           plVar6 != (long *)0x0)) {
          lVar4 = *plVar6;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917a868) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_042f322c;
              }
              uVar3 = uVar3 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a868,0);
LAB_042f322c:
          plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
joined_r0x042f3244:
          do {
            do {
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar6;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar3 != 0) {
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_042f32c0;
                  }
                  uVar3 = uVar3 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar3 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_042f32c0:
              uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
              if ((uVar3 & 1) == 0) {
                if (plVar6 == (long *)0x0) {
                  return;
                }
                lVar4 = *plVar6;
                uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar3 == 0) goto LAB_042f34ac;
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                goto LAB_042f3494;
              }
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar6;
              uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar3 != 0) {
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == DAT_0917af80) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_042f3324;
                  }
                  uVar3 = uVar3 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar3 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917af80,0);
LAB_042f3324:
              lVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            } while ((lVar4 == 0) ||
                    (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x10),0),
                    (uVar3 & 1) != 0));
            uVar13 = *(undefined8 *)(lVar4 + 0x18);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Equality(uVar13,0,0);
          } while ((uVar3 & 1) != 0);
          uVar13 = *(undefined8 *)(param_1 + 0xd0);
          uVar1 = *(undefined8 *)(param_1 + 0xd8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = FUN_04c35338(uVar1,uVar13,DAT_091d4cb0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = UnityEngine_Component__get_gameObject(lVar5,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(lVar8,1,0);
          uVar13 = *(undefined8 *)(lVar4 + 0x10);
          uVar1 = *(undefined8 *)(lVar4 + 0x18);
          uVar9 = thunk_FUN_03f9944c(DAT_09174a80);
          FUN_070a8c30(uVar9,param_1,DAT_091dcf70,0);
          CakeOrder_Profile_UIItemAvatarOption__SetUp(lVar5,uVar13,uVar1,uVar9);
          lVar4 = DAT_091b1418;
          lVar8 = *(long *)(param_1 + 0xf8);
          if (lVar8 != 0) {
            lVar10 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                plVar11 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                *plVar11 = lVar5;
                thunk_FUN_03f5d7b8(plVar11,lVar5);
              }
              else {
                FUN_057e0c68(lVar8,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              goto joined_r0x042f3244;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_042f3500;
      }
      uVar13 = DAT_092089a0;
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar13 = DAT_092089a0;
      }
      goto LAB_042f30ec;
    }
  }
  uVar13 = DAT_0920f168;
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar13 = DAT_0920f168;
  }
LAB_042f30ec:
  UnityEngine_Debug__LogError(uVar13,param_1,0);
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar12 = piVar12 + 4;
    if (uVar3 == 0) break;
LAB_042f3494:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_042f34c8;
    }
  }
LAB_042f34ac:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_042f34c8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

