// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCompositeView$$RenderMerges
// address: 0x44cc43c
// body: available
// range: 0x44cc43c-0x44cc983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cc95c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cc980 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCompositeView__RenderMerges
               (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long local_68;
  
  if ((DAT_095182b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d5a0);
    FUN_03f5c2a4(&DAT_0919d5b0);
    FUN_03f5c2a4(&DAT_0919d5c0);
    FUN_03f5c2a4(&DAT_091c9c98);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091786c0);
    FUN_03f5c2a4(&DAT_0917b2e0);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_0917b488);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091d4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6a90);
    FUN_03f5c2a4(&DAT_0918eea0);
    DAT_095182b1 = 1;
  }
  local_68 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918eea0);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),param_3);
    plVar11 = (long *)(lVar4 + 0x18);
    *plVar11 = param_2;
    thunk_FUN_03f5d7b8(plVar11,param_2);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = FUN_06ef01b4(*(long *)(param_1 + 0x38),DAT_0919d5c0);
      lVar6 = FUN_04b0462c(uVar5,DAT_091cae30);
      if (lVar6 != 0) {
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar14 = 0;
          uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if ((*plVar11 == 0) || (plVar13 = *(long **)(*plVar11 + 0x40), plVar13 == (long *)0x0))
            goto LAB_044cc95c;
            lVar9 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            uVar1 = *(undefined4 *)(lVar6 + uVar14 * 4 + 0x20);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b488) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_044cc624;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b488,0);
LAB_044cc624:
            cVar2 = (*(code *)*puVar7)(plVar13,uVar1,puVar7[1]);
            if (cVar2 == '\0') {
              CookOrder_Cooking_Implement_CookingCompositeView__Stop(param_1,uVar1);
            }
            uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        lVar6 = *(long *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x20) = 0;
        if (lVar6 != 0) {
          iVar12 = 0;
          while (plVar13 = *(long **)(lVar6 + 0x40), plVar13 != (long *)0x0) {
            lVar6 = *plVar13;
            uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar14 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b2e0) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_044cc6e0;
                }
                uVar14 = uVar14 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b2e0,0);
LAB_044cc6e0:
            iVar3 = (*(code *)*puVar7)(plVar13,puVar7[1]);
            if (iVar3 <= iVar12) {
              return;
            }
            if ((*plVar11 == 0) || (plVar13 = *(long **)(*plVar11 + 0x40), plVar13 == (long *)0x0))
            break;
            lVar6 = *plVar13;
            uVar1 = *(undefined4 *)(lVar4 + 0x20);
            uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar14 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b488) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_044cc754;
                }
                uVar14 = uVar14 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b488,0);
LAB_044cc754:
            cVar2 = (*(code *)*puVar7)(plVar13,uVar1,puVar7[1]);
            if (cVar2 != '\0') {
              if (*(long *)(param_1 + 0x38) == 0) break;
              uVar14 = FUN_06ef1fe8(*(long *)(param_1 + 0x38),*(undefined4 *)(lVar4 + 0x20),
                                    &local_68,DAT_0919d5b0);
              if ((uVar14 & 1) == 0) {
                lVar6 = *(long *)(lVar4 + 0x28);
                uVar5 = *(undefined8 *)(param_1 + 0x30);
                if (lVar6 == 0) {
                  lVar6 = thunk_FUN_03f9944c(DAT_091786c0);
                  FUN_05322d94(lVar6,lVar4,DAT_091e6a90,0);
                  *(long *)(lVar4 + 0x28) = lVar6;
                  thunk_FUN_03f5d7b8(lVar4 + 0x28,lVar6);
                }
                lVar6 = FUN_04ae5fd0(uVar5,lVar6,DAT_091c9c98);
                if (lVar6 == 0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(undefined8 *)(lVar6 + 0x18);
                }
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar14 = UnityEngine_Object__op_Equality(uVar5,0,0);
                if ((uVar14 & 1) != 0) goto LAB_044cc948;
                if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_transform(lVar6,0), lVar9 == 0)) break;
                uVar5 = UnityEngine_Transform__GetParent(lVar9,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                local_68 = FUN_04c35338(lVar6,uVar5,DAT_091d4b68);
                if (*(long *)(param_1 + 0x38) == 0) break;
                FUN_06ef050c(*(long *)(param_1 + 0x38),*(undefined4 *)(lVar4 + 0x20),local_68,
                             DAT_0919d5a0);
                lVar6 = local_68;
                if ((*(long *)(lVar4 + 0x18) == 0) ||
                   (plVar13 = *(long **)(*(long *)(lVar4 + 0x18) + 0x28), plVar13 == (long *)0x0))
                break;
                lVar9 = *plVar13;
                uVar1 = *(undefined4 *)(lVar4 + 0x20);
                uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar14 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_0917b4b0) {
                      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_044cc910;
                    }
                    uVar14 = uVar14 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar14 != 0);
                }
                puVar7 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b4b0,0);
LAB_044cc910:
                lVar9 = (*(code *)*puVar7)(plVar13,uVar1,puVar7[1]);
                if ((lVar9 == 0) || (lVar6 == 0)) break;
                CookOrder_Cooking_Implement_CookingAnimationCue__Play
                          (*(undefined8 *)(lVar9 + 0x20),lVar6);
              }
              if (local_68 == 0) break;
              CookOrder_Cooking_Implement_CookingAnimationCue__SetPaused(local_68,param_4 & 1);
            }
LAB_044cc948:
            lVar6 = *(long *)(lVar4 + 0x18);
            iVar12 = *(int *)(lVar4 + 0x20) + 1;
            *(int *)(lVar4 + 0x20) = iVar12;
            if (lVar6 == 0) break;
          }
        }
      }
    }
  }
LAB_044cc95c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

