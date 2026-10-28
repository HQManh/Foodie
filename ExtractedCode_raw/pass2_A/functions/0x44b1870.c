// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$EnsureUnit
// address: 0x44b1870
// body: available
// range: 0x44b1870-0x44b1e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b1e0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1e10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b1e98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__EnsureUnit
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 *param_5
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_09518238 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e580);
    FUN_03f5c2a4(&DAT_0919e5b8);
    FUN_03f5c2a4(&DAT_0919e598);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_091cdba8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09212080);
    DAT_09518238 = 1;
  }
  local_58 = 0;
  local_68 = 0;
  local_6c = 0;
  if (*(long *)(param_4 + 0x310) == 0) goto LAB_044b1e0c;
  uVar5 = FUN_06f54e88(*(long *)(param_4 + 0x310),*param_5,&local_58,DAT_0919e580);
  uVar9 = local_58;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar5 & 1) != 0) {
      return local_58;
    }
  }
  if (*(int *)((long)param_5 + 0xc) == 0) {
    if (*(long *)(param_4 + 0x2e0) == 0) goto LAB_044b1e0c;
    lVar11 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                       (*(long *)(param_4 + 0x2e0),*(undefined4 *)(param_5 + 1),0);
    if (lVar11 == 0) goto LAB_044b1990;
    uVar9 = *(undefined8 *)(lVar11 + 0x18);
    bVar4 = false;
  }
  else {
    lVar11 = 0;
LAB_044b1990:
    uVar9 = 0;
    bVar4 = true;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)((long)param_5 + 0xc) == 1) {
      if (*(long *)(param_4 + 0x2e0) == 0) goto LAB_044b1e0c;
      lVar6 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x48);
      if ((lVar6 != 0) && (uVar8 = *(uint *)(lVar6 + 0x18), uVar8 != 0)) {
        uVar2 = *(uint *)(param_5 + 1);
        uVar3 = uVar2;
        if ((int)(uVar8 - 1) <= (int)uVar2) {
          uVar3 = uVar8 - 1;
        }
        uVar1 = 0;
        if (-1 < (int)uVar2) {
          uVar1 = uVar3;
        }
        if (uVar8 <= uVar1) goto LAB_044b1e10;
        uVar9 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(param_4 + 0x2e0) == 0) ||
             (lVar11 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x48), lVar11 == 0))
          goto LAB_044b1e0c;
          uVar3 = *(uint *)(param_5 + 1);
          uVar2 = *(uint *)(lVar11 + 0x18) - 1;
          uVar8 = uVar3;
          if ((int)uVar2 <= (int)uVar3) {
            uVar8 = uVar2;
          }
          uVar2 = 0;
          if (-1 < (int)uVar3) {
            uVar2 = uVar8;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_044b1e10;
          uVar10 = *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          uVar9 = UnityEngine_Component__get_transform(param_4,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          lVar6 = FUN_04c35338(uVar10,uVar9,DAT_091d4bc0);
          if (lVar6 == 0) goto LAB_044b1e0c;
          goto LAB_044b1a68;
        }
      }
    }
    local_68 = *param_5;
    uVar9 = System_Int64__ToString(&local_68,0);
    uVar9 = System_String__Concat(DAT_09212080,uVar9,0);
    lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar6,uVar9,0);
    if (lVar6 == 0) goto LAB_044b1e0c;
    lVar7 = UnityEngine_GameObject__get_transform(lVar6,0);
    uVar9 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar7 == 0) goto LAB_044b1e0c;
    UnityEngine_Transform__SetParent(lVar7,uVar9,0);
    lVar7 = FUN_04b7c294(lVar6,DAT_091cd7c0);
    if ((bVar4) || (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0)) {
      if (*(long *)(param_4 + 0x2e0) == 0) goto LAB_044b1e0c;
      lVar11 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x40);
      if ((lVar11 == 0) || (uVar8 = *(uint *)(lVar11 + 0x18), uVar8 == 0)) {
        lVar11 = 0;
      }
      else {
        uVar2 = *(uint *)(param_5 + 1);
        uVar3 = uVar2;
        if ((int)(uVar8 - 1) <= (int)uVar2) {
          uVar3 = uVar8 - 1;
        }
        uVar1 = 0;
        if (-1 < (int)uVar2) {
          uVar1 = uVar3;
        }
        if (uVar8 <= uVar1) {
LAB_044b1e10:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      }
    }
    if (lVar7 == 0) goto LAB_044b1e0c;
    UnityEngine_SpriteRenderer__set_sprite(lVar7,lVar11,0);
    UnityEngine_Renderer__set_sortingOrder(lVar7,10,0);
    uVar9 = UnityEngine_SpriteRenderer__get_sprite(lVar7,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar5 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188ad0);
      FUN_039afb80();
      UnityEngine_Object__Destroy(lVar6,0);
      local_6c = *(uint *)(param_5 + 1);
      uVar9 = System_Int32__ToString(&local_6c,0);
      uVar10 = thunk_FUN_03fc39d4(&DAT_09207f78);
      uVar9 = System_String__Concat(uVar10,uVar9,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar10 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar10,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091c65d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar9);
    }
  }
  else {
    if (bVar4) goto LAB_044b1e0c;
    uVar10 = *(undefined8 *)(lVar11 + 0x18);
    uVar9 = UnityEngine_Component__get_transform(param_4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar6 = FUN_04c35338(uVar10,uVar9,DAT_091d4bc0);
    if (lVar6 == 0) goto LAB_044b1e0c;
    lVar7 = UnityEngine_GameObject__get_transform(lVar6,0);
    if (((*(long *)(lVar11 + 0x18) == 0) ||
        (lVar11 = UnityEngine_GameObject__get_transform(*(long *)(lVar11 + 0x18),0), lVar11 == 0))
       || (UnityEngine_Transform__get_localScale(lVar11,0), lVar7 == 0)) goto LAB_044b1e0c;
    UnityEngine_Transform__set_localScale(lVar7,0);
LAB_044b1a68:
    UnityEngine_GameObject__SetActive(lVar6,1,0);
  }
  lVar11 = UnityEngine_GameObject__get_transform(lVar6,0);
  if (lVar11 != 0) {
    UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar11,0);
    lVar11 = FUN_04b7ceb4(lVar6,1,DAT_091cdba8);
    local_6c = 0;
    if (lVar11 != 0) {
      uVar8 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar8) {
        do {
          uVar3 = local_6c;
          if (uVar8 <= local_6c) goto LAB_044b1e10;
          lVar7 = *(long *)(lVar11 + (long)(int)local_6c * 8 + 0x20);
          if (lVar7 == 0) goto LAB_044b1e0c;
          UnityEngine_Behaviour__set_enabled(lVar7,0,0);
          uVar8 = *(uint *)(lVar11 + 0x18);
          local_6c = uVar3 + 1;
        } while ((int)local_6c < (int)uVar8);
      }
      lVar11 = *(long *)(param_4 + 0x310);
      uVar10 = *param_5;
      uVar9 = UnityEngine_GameObject__get_transform(lVar6,0);
      if (lVar11 != 0) {
        FUN_06f533bc(lVar11,uVar10,uVar9,DAT_0919e598);
        lVar7 = *(long *)(param_4 + 0xb8);
        uVar9 = *param_5;
        lVar11 = UnityEngine_GameObject__get_transform(lVar6,0);
        if ((lVar11 != 0) && (UnityEngine_Transform__get_localScale(lVar11,0), lVar7 != 0)) {
          FUN_06f56b00(lVar7,uVar9,DAT_0919e5b8);
          lVar11 = *(long *)(param_4 + 0x2f0);
          uVar10 = *param_5;
          uVar9 = UnityEngine_GameObject__get_transform(lVar6,0);
          if (lVar11 != 0) {
            CookOrder_Cooking_Implement_CookingSceneBindings__BindUnit(lVar11,uVar10,uVar9,0);
            uVar9 = UnityEngine_GameObject__get_transform(lVar6,0);
            return uVar9;
          }
        }
      }
    }
  }
LAB_044b1e0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

