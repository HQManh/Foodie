// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$Bind
// address: 0x44b2500
// body: available
// range: 0x44b2500-0x44b2fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b2c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b2f74 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b2fbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__Bind
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  if ((DAT_09518230 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d88);
    FUN_03f5c2a4(&DAT_091c6560);
    FUN_03f5c2a4(&DAT_091c6568);
    FUN_03f5c2a4(&DAT_09182e48);
    FUN_03f5c2a4(&DAT_0919d910);
    FUN_03f5c2a4(&DAT_09178750);
    FUN_03f5c2a4(&DAT_091cdbd8);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091ada78);
    FUN_03f5c2a4(&DAT_09187e40);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_091d4be8);
    FUN_03f5c2a4(&DAT_091d4c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518230 = 1;
  }
  *(long *)(param_4 + 0x2d8) = param_5;
  thunk_FUN_03f5d7b8(param_4 + 0x2d8,param_5);
  plVar8 = (long *)(param_4 + 0x2e0);
  *(undefined8 *)(param_4 + 0x2e0) = param_6;
  thunk_FUN_03f5d7b8(plVar8,param_6);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_7,0);
  if ((uVar2 & 1) == 0) {
    param_7 = CookOrder_Cooking_Config_CookingRepresentationProfile__get_Default(0);
  }
  *(undefined8 *)(param_4 + 0x2e8) = param_7;
  thunk_FUN_03f5d7b8(param_4 + 0x2e8,param_7);
  uVar3 = thunk_FUN_03f9944c(DAT_09187e40);
  UnityEngine_MaterialPropertyBlock___ctor(uVar3,0);
  *(undefined8 *)(param_4 + 0x388) = uVar3;
  thunk_FUN_03f5d7b8(param_4 + 0x388,uVar3);
  CookOrder_Cooking_Implement_CookingGameplayPresentation__InitializeShelves(param_4);
  lVar9 = *(long *)(param_4 + 0x1a0);
  if ((lVar9 != 0) && (lVar11 = *(long *)(param_4 + 0x1a8), lVar11 != 0)) {
    uVar3 = thunk_FUN_03f9944c(DAT_09182e48);
    CookOrder_Cooking_Implement_CookingSceneBindings___ctor
              (uVar3,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar11 + 0x18),1,0);
    *(undefined8 *)(param_4 + 0x2f0) = uVar3;
    thunk_FUN_03f5d7b8((long *)(param_4 + 0x2f0),uVar3);
    uVar12 = *(undefined8 *)(param_4 + 0x2f0);
    uVar15 = *(undefined8 *)(param_4 + 0x2e8);
    uVar3 = thunk_FUN_03f9944c(DAT_09182d88);
    CookOrder_Cooking_Implement_CookingFlightPresentation___ctor(uVar3,uVar12,uVar15,0);
    *(undefined8 *)(param_4 + 0x2f8) = uVar3;
    thunk_FUN_03f5d7b8(param_4 + 0x2f8,uVar3);
    lVar9 = *(long *)(param_4 + 0x2f8);
    uVar3 = thunk_FUN_03f9944c(DAT_09178750);
    FUN_05324ff8(uVar3,param_4,DAT_091c6560,0);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar9 + 0x40);
      *puVar13 = uVar3;
      thunk_FUN_03f5d7b8(puVar13,uVar3);
      lVar9 = *(long *)(param_4 + 0x2f8);
      uVar3 = thunk_FUN_03f9944c(DAT_09178750);
      FUN_05324ff8(uVar3,param_4,DAT_091c6568,0);
      if (lVar9 != 0) {
        puVar13 = (undefined8 *)(lVar9 + 0x38);
        *puVar13 = uVar3;
        thunk_FUN_03f5d7b8(puVar13,uVar3);
        uVar3 = *(undefined8 *)(param_4 + 0x1e0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_4 + 0x1e0) == 0) ||
             (lVar9 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x1e0),0), lVar9 == 0
             )) goto LAB_044b2c50;
          uVar17 = UnityEngine_Transform__get_position(lVar9,0);
          *(undefined4 *)(param_4 + 0x2c0) = uVar17;
          *(undefined4 *)(param_4 + 0x2c4) = param_2;
          *(undefined4 *)(param_4 + 0x2c8) = param_3;
        }
        lVar9 = *(long *)(param_4 + 0x1a0);
        if ((((lVar9 != 0) && (*plVar8 != 0)) && (lVar11 = *(long *)(*plVar8 + 0x20), lVar11 != 0))
           && (lVar11 = *(long *)(lVar11 + 0x28), lVar11 != 0)) {
          if (*(int *)(lVar11 + 0x24) * *(int *)(lVar11 + 0x20) != *(int *)(lVar9 + 0x18)) {
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar3 = thunk_FUN_03f9944c();
            uVar12 = thunk_FUN_03fc39d4(&DAT_092038c0);
            System_InvalidOperationException___ctor(uVar3,uVar12,0);
            uVar12 = thunk_FUN_03fc39d4(&DAT_091c65c8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,uVar12);
          }
          uVar2 = 0;
          do {
            if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar2) {
              lVar9 = *plVar8;
              if (lVar9 != 0) {
                uVar10 = 0;
                goto LAB_044b28ac;
              }
              break;
            }
            lVar11 = *(long *)(param_4 + 0x2f0);
            CookingGraph_CookingLevelSimulation__GridAddress(&local_98,uVar2 & 0xffffffff,0);
            lVar9 = *(long *)(param_4 + 0x1a0);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_044b2f74;
            if (lVar11 == 0) break;
            uStack_a8 = uStack_90;
            local_b0 = local_98;
            local_a0 = local_88;
            CookOrder_Cooking_Implement_CookingSceneBindings__BindEndpoint
                      (lVar11,&local_b0,*(undefined8 *)(lVar9 + uVar2 * 8 + 0x20),0);
            lVar9 = *(long *)(param_4 + 0x1a0);
            uVar2 = uVar2 + 1;
          } while (lVar9 != 0);
        }
      }
    }
  }
  goto LAB_044b2c50;
LAB_044b28ac:
  lVar9 = *(long *)(lVar9 + 0x28);
  if (lVar9 == 0) goto LAB_044b2c50;
  if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) {
    if (((param_5 != 0) && (lVar9 = *(long *)(param_5 + 0x120), lVar9 != 0)) &&
       ((*(long *)(lVar9 + 0x18) != 0 &&
        (lVar11 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar11 != 0)))) {
      iVar1 = *(int *)(lVar11 + 0x18);
      if (*(long *)(param_4 + 0x1e8) != 0) {
        CookOrder_Cooking_Implement_CookingStationLayout__Bind
                  (*(long *)(param_4 + 0x1e8),lVar9,*(undefined8 *)(param_4 + 0x1c0),0);
      }
      uVar3 = *(undefined8 *)(param_4 + 0x200);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar2 & 1) == 0) goto LAB_044b2b60;
      lVar9 = *(long *)(param_4 + 0x1a8);
      if (lVar9 != 0) {
        if ((int)*(ulong *)(lVar9 + 0x18) < 1) goto LAB_044b2b60;
        uVar2 = 0;
        uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        goto LAB_044b29f8;
      }
    }
    goto LAB_044b2c50;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_044b2f74;
  lVar9 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
  if (lVar9 == 0) goto LAB_044b2c50;
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) == 0) {
    if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x28), lVar9 == 0)) goto LAB_044b2c50;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_044b2f74;
    lVar9 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_044b2c50;
    uVar3 = *(undefined8 *)(lVar9 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) != 0) goto LAB_044b2948;
  }
  else {
LAB_044b2948:
    lVar9 = *(long *)(param_4 + 0x2f0);
    if (lVar9 == 0) goto LAB_044b2c50;
    CookOrder_Cooking_Implement_CookingSceneBindings__RegisterIngredientArt(lVar9,uVar10,0);
  }
  lVar9 = *plVar8;
  uVar10 = uVar10 + 1;
  if (lVar9 == 0) goto LAB_044b2c50;
  goto LAB_044b28ac;
  while( true ) {
    uVar12 = *(undefined8 *)(param_4 + 0x200);
    uVar3 = *(undefined8 *)(lVar9 + uVar2 * 8 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar11 = FUN_04c35338(uVar12,uVar3,DAT_091d4bc0);
    if (lVar11 == 0) goto LAB_044b2c50;
    lVar4 = UnityEngine_GameObject__get_transform(lVar11,0);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar4 == 0) goto LAB_044b2c50;
    puVar7 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    param_2 = puVar7[1];
    param_3 = puVar7[2];
    UnityEngine_Transform__set_localPosition(*puVar7,param_2,param_3,lVar4,0);
    UnityEngine_GameObject__SetActive(lVar11,1,0);
    lVar4 = FUN_04b7ceb4(lVar11,1,DAT_091cdbd8);
    if (lVar4 == 0) goto LAB_044b2c50;
    uVar10 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar10) {
      lVar16 = 0;
      do {
        if (uVar10 <= (uint)lVar16) goto LAB_044b2f74;
        lVar5 = *(long *)(lVar4 + 0x20 + lVar16 * 8);
        if (lVar5 == 0) goto LAB_044b2c50;
        UnityEngine_ParticleSystem__Play(lVar5,0);
        uVar10 = *(uint *)(lVar4 + 0x18);
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)uVar10);
    }
    lVar4 = DAT_091acd50;
    lVar16 = *(long *)(param_4 + 0x360);
    if (lVar16 == 0) goto LAB_044b2c50;
    lVar5 = *(long *)(lVar16 + 0x10);
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_044b2c50;
    uVar10 = *(uint *)(lVar16 + 0x18);
    if (uVar10 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar10 + 1;
      plVar8 = (long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      *plVar8 = lVar11;
      thunk_FUN_03f5d7b8(plVar8,lVar11);
    }
    else {
      FUN_057e0c68(lVar16,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
    uVar2 = uVar2 + 1;
    if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar2) break;
LAB_044b29f8:
    if (uVar6 <= uVar2) goto LAB_044b2f74;
  }
LAB_044b2b60:
  uVar3 = *(undefined8 *)(param_4 + 0x1f8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) == 0) {
LAB_044b2c54:
    if (0 < iVar1) {
      iVar14 = 0;
      do {
        uVar3 = *(undefined8 *)(param_4 + 0x1c8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) == 0) break;
        lVar9 = *(long *)(param_4 + 0x1c8);
        if ((lVar9 == 0) || (lVar11 = UnityEngine_Component__get_transform(lVar9,0), lVar11 == 0))
        goto LAB_044b2c50;
        uVar3 = UnityEngine_Transform__GetParent(lVar11,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar9 = FUN_04c35338(lVar9,uVar3,DAT_091d4c68);
        if ((lVar9 == 0) || (lVar11 = UnityEngine_Component__get_gameObject(lVar9,0), lVar11 == 0))
        goto LAB_044b2c50;
        UnityEngine_GameObject__SetActive(lVar11,1,0);
        if ((*(long *)(param_4 + 0x1c8) == 0) ||
           (lVar11 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x1c8),0), lVar11 == 0
           )) goto LAB_044b2c50;
        UnityEngine_Transform__get_localPosition(lVar11,0);
        fVar18 = *(float *)(param_4 + 0x2a4);
        lVar11 = UnityEngine_Component__get_transform(lVar9,0);
        if (lVar11 == 0) goto LAB_044b2c50;
        UnityEngine_Transform__set_localPosition
                  (((float)iVar14 - (float)(iVar1 + -1) / 2.0) * fVar18,param_2,param_3,lVar11,0);
        lVar11 = DAT_091b0400;
        lVar4 = *(long *)(param_4 + 0x378);
        if (lVar4 == 0) goto LAB_044b2c50;
        lVar16 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_044b2c50;
        uVar10 = *(uint *)(lVar4 + 0x18);
        if (uVar10 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar10 + 1;
          plVar8 = (long *)(lVar16 + (long)(int)uVar10 * 8 + 0x20);
          *plVar8 = lVar9;
          thunk_FUN_03f5d7b8(plVar8,lVar9);
        }
        else {
          FUN_057e0c68(lVar4,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)(param_4 + 0x380);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        lVar11 = DAT_091b19b8;
        if (lVar9 == 0) goto LAB_044b2c50;
        lVar4 = *(long *)(lVar9 + 0x10);
        uVar17 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
        param_2 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_044b2c50;
        uVar10 = *(uint *)(lVar9 + 0x18);
        if (uVar10 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar10 * 8;
          *(uint *)(lVar9 + 0x18) = uVar10 + 1;
          *(undefined4 *)(lVar4 + 0x20) = uVar17;
          *(undefined4 *)(lVar4 + 0x24) = param_2;
        }
        else {
          FUN_058ac614(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        iVar14 = iVar14 + 1;
      } while (iVar1 != iVar14);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x1c8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_4 + 0x1c8) == 0) ||
         (lVar9 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x1c8),0), lVar9 == 0))
      goto LAB_044b2c50;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x1d0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_044b2c50;
      UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x1d0),0);
      if (*(long *)(param_4 + 0x1d0) == 0) goto LAB_044b2c50;
      UnityEngine_Transform__set_localPosition
                (*(float *)(param_4 + 0x2a4) * (float)-iVar1 * 0.5,*(long *)(param_4 + 0x1d0),0);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x1d8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x1d8) != 0) {
      UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x1d8),0);
      if (*(long *)(param_4 + 0x1d8) != 0) {
        UnityEngine_Transform__set_localPosition
                  (*(float *)(param_4 + 0x2a4) * (float)iVar1 * 0.5,*(long *)(param_4 + 0x1d8),0);
        return;
      }
    }
  }
  else {
    lVar9 = *(long *)(param_4 + 0x1a0);
    if (lVar9 != 0) {
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar2) goto LAB_044b2c54;
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
LAB_044b2f74:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(undefined8 *)(param_4 + 0x1f8);
        uVar12 = *(undefined8 *)(lVar9 + uVar2 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = FUN_04c35338(uVar3,uVar12,DAT_091d4be8);
        if ((lVar9 == 0) || (lVar11 = UnityEngine_Component__get_gameObject(lVar9,0), lVar11 == 0))
        break;
        UnityEngine_GameObject__SetActive(lVar11,1,0);
        CookOrder_Cooking_Implement_IngCellDisplay__HideAll(lVar9,0);
        CookOrder_Cooking_Implement_IngCellDisplay__SetDish(lVar9,0,0);
        if (*(long *)(param_4 + 0x358) == 0) break;
        FUN_06ef050c(*(long *)(param_4 + 0x358),uVar2 & 0xffffffff,lVar9,DAT_0919d910);
        lVar9 = *(long *)(param_4 + 0x1a0);
        uVar2 = uVar2 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_044b2c50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

