// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$Advance
// address: 0x44b2fc0
// body: available
// range: 0x44b2fc0-0x44b3607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b35b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b35ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b35f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b35f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b35f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b35fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b3600 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b3604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__Advance
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_108;
  undefined8 *puStack_100;
  ulong local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long lStack_b8;
  undefined8 local_b0;
  
  if ((DAT_09518231 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e410);
    FUN_03f5c2a4(&DAT_0919e5b0);
    FUN_03f5c2a4(&DAT_091c9368);
    FUN_03f5c2a4(&DAT_091a62e8);
    FUN_03f5c2a4(&DAT_091a62f0);
    FUN_03f5c2a4(&DAT_091a62f8);
    FUN_03f5c2a4(&DAT_09178098);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a95d8);
    FUN_03f5c2a4(&DAT_091a95e0);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_091b19f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6fd8);
    FUN_03f5c2a4(&DAT_0918f038);
    FUN_03f5c2a4(&DAT_09215b38);
    FUN_03f5c2a4(&DAT_09216688);
    FUN_03f5c2a4(&DAT_09216690);
    DAT_09518231 = 1;
  }
  local_b0 = 0;
  local_d8 = 0.0;
  local_e0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f038);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass172_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_4);
    if (*(long *)(param_4 + 0x2f8) != 0) {
      CookOrder_Cooking_Implement_CookingFlightPresentation__Advance
                (param_1,*(long *)(param_4 + 0x2f8),0);
    }
    if (*(long *)(param_4 + 0x300) != 0) {
      FUN_06f53808(&local_108,*(long *)(param_4 + 0x300),DAT_0919e410);
      local_d0 = local_108;
      local_108 = 0;
      puStack_c8 = puStack_100;
      lStack_b8 = lStack_f0;
      local_c0 = local_f8;
      local_b0 = local_e8;
      uVar6 = local_f8;
      puStack_100 = &local_d0;
      while (uVar2 = FUN_0726677c(&local_d0,DAT_091a62f0), lVar5 = lStack_b8, uVar3 = local_c0,
            (uVar2 & 1) != 0) {
        if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_053e1824(*(long *)(param_4 + 0x58),local_c0,DAT_091a8318);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar5,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_4 + 0x390) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = FUN_06f58518(*(long *)(param_4 + 0x390),uVar3,&local_e0,DAT_0919e5b0);
            fVar13 = (float)uVar6;
            if ((uVar3 & 1) != 0) {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = UnityEngine_Component__get_transform(lVar5,0);
              lVar5 = UnityEngine_Component__get_transform(lVar5,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              fVar10 = (float)UnityEngine_Transform__get_localPosition(lVar5,0);
              fVar11 = local_d8;
              if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x20);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              fVar18 = (float)local_e0;
              fVar19 = local_e0._4_4_;
              fVar16 = *(float *)(lVar5 + 0x10);
              if (DAT_09517ea8 == '\0') {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_09517ea8 = '\x01';
              }
              fVar20 = fVar18 - fVar10;
              fVar15 = fVar19 - fVar13;
              fVar14 = fVar11 - param_3;
              fVar17 = fVar14 * fVar14 + fVar20 * fVar20 + fVar15 * fVar15;
              if ((fVar17 != 0.0) &&
                 ((fVar16 = fVar16 * param_1, fVar16 < 0.0 || (fVar16 * fVar16 < fVar17)))) {
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                fVar17 = SQRT(fVar17);
                fVar18 = fVar10 + (fVar20 / fVar17) * fVar16;
                fVar19 = fVar13 + (fVar15 / fVar17) * fVar16;
                fVar11 = param_3 + (fVar14 / fVar17) * fVar16;
              }
              param_3 = fVar11;
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar6 = (ulong)(uint)fVar19;
              UnityEngine_Transform__set_localPosition(fVar18,lVar4,0);
            }
          }
        }
      }
      FUN_0726689c(&local_d0,DAT_091a62e8);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__DrawQueueConnections(param_4);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar5 = *(long *)(param_4 + 0x378);
      if (lVar5 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar7) {
            return;
          }
          lVar5 = FUN_057e0998(lVar5,iVar7,DAT_091b0430);
          if (lVar5 == 0) break;
          lVar4 = UnityEngine_Renderer__GetSharedMaterial(lVar5,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          fVar13 = (float)uVar6;
          if ((uVar3 & 1) != 0) {
            lVar9 = *(long *)(lVar1 + 0x20);
            uVar8 = *(undefined8 *)(param_4 + 0x300);
            if (lVar9 == 0) {
              lVar9 = thunk_FUN_03f9944c(DAT_09178098);
              FUN_053060cc(lVar9,lVar1,DAT_091e6fd8,0);
              *(long *)(lVar1 + 0x20) = lVar9;
              thunk_FUN_03f5d7b8(lVar1 + 0x20,lVar9);
            }
            uVar6 = FUN_04ab40a4(uVar8,lVar9,DAT_091c9368);
            if (lVar4 == 0) break;
            uVar3 = UnityEngine_Material__HasProperty(lVar4,DAT_09216688,0);
            fVar11 = 0.0;
            if ((uVar3 & 1) != 0) {
              fVar11 = (float)UnityEngine_Material__GetFloat(lVar4,DAT_09216688,0);
            }
            uVar3 = UnityEngine_Material__HasProperty(lVar4,DAT_09216690,0);
            if ((uVar3 & 1) == 0) {
              fVar10 = 0.0;
            }
            else {
              fVar10 = (float)UnityEngine_Material__GetFloat(lVar4,DAT_09216690,0);
            }
            if ((uVar6 & 1) != 0) {
              lVar9 = *(long *)(param_4 + 0x380);
              if (lVar9 == 0) break;
              uVar12 = *(undefined4 *)(lVar1 + 0x18);
              fVar18 = (float)FUN_058ac314(lVar9,uVar12,DAT_091b19e8);
              fVar13 = fVar13 + fVar10 * param_1;
              FUN_058ac368(fVar18 + fVar11 * param_1,fVar13,lVar9,uVar12,DAT_091b19f0);
            }
            UnityEngine_Renderer__Internal_GetPropertyBlock
                      (lVar5,*(undefined8 *)(param_4 + 0x388),0);
            if (*(long *)(param_4 + 0x388) == 0) break;
            UnityEngine_MaterialPropertyBlock__SetFloat(0,*(long *)(param_4 + 0x388),DAT_09216688,0)
            ;
            if (*(long *)(param_4 + 0x388) == 0) break;
            UnityEngine_MaterialPropertyBlock__SetFloat(0,*(long *)(param_4 + 0x388),DAT_09216690,0)
            ;
            uVar12 = UnityEngine_Material__get_mainTextureScale(lVar4,0);
            fVar11 = fVar13;
            fVar10 = (float)UnityEngine_Material__get_mainTextureOffset(lVar4,0);
            if (*(long *)(param_4 + 0x380) == 0) break;
            fVar18 = fVar11;
            fVar19 = (float)FUN_058ac314(*(long *)(param_4 + 0x380),*(undefined4 *)(lVar1 + 0x18),
                                         DAT_091b19e8);
            if (*(long *)(param_4 + 0x388) == 0) break;
            uVar6 = (ulong)(uint)fVar13;
            UnityEngine_MaterialPropertyBlock__SetVector
                      (uVar12,uVar6,fVar10 + fVar19,fVar11 + fVar18,*(long *)(param_4 + 0x388),
                       DAT_09215b38,0);
            UnityEngine_Renderer__SetPropertyBlock(lVar5,*(undefined8 *)(param_4 + 0x388),0);
          }
          iVar7 = *(int *)(lVar1 + 0x18) + 1;
          *(int *)(lVar1 + 0x18) = iVar7;
          lVar5 = *(long *)(param_4 + 0x378);
        } while (lVar5 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

