// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$Render
// address: 0x44d38a4
// body: available
// range: 0x44d38a4-0x44d3c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d3c00 to 0x86f45a8 UnityEngine.ParticleSystem$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d3c5c to 0x86f4768 UnityEngine.ParticleSystem$$Stop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d3c60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d3c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__Render(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  
  if ((DAT_095182d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbf48);
    DAT_095182d6 = 1;
  }
  if ((*(char *)(param_1 + 0x118) == '\0') || (*(char *)(param_1 + 0xf0) != '\0')) {
    return;
  }
  if (param_2 == 0) goto LAB_044d3c64;
  if (*(char *)(param_2 + 0x20) != '\0') {
    return;
  }
  uVar3 = CookOrder_Cooking_Implement_CookingCustomerView__HasTimer(param_2);
  if ((uVar3 & 1) == 0) {
    fVar15 = 1.0;
    *(undefined4 *)(param_1 + 0xec) = 3;
  }
  else {
    dVar12 = *(double *)(param_2 + 0x28);
    dVar14 = *(double *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xec) = 3;
    lVar8 = *(long *)(param_1 + 0x88);
    fVar11 = (float)(dVar12 / dVar14);
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar11) {
      fVar15 = fVar13;
    }
    if (lVar8 == 0) goto LAB_044d3c64;
    uVar7 = (uint)*(ulong *)(lVar8 + 0x18);
    uVar4 = uVar7;
    if (3 < (int)uVar7) {
      uVar4 = 4;
    }
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) == uVar5) goto LAB_044d3c60;
        if (fVar15 * 100.0 <= (float)*(int *)(lVar8 + 0x20 + uVar5 * 4)) {
          *(undefined4 *)(param_1 + 0xec) = (int)uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar5);
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(param_1 + 0xc0) == 0) ||
       (lVar8 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xc0),0), lVar8 == 0))
    goto LAB_044d3c64;
    UnityEngine_GameObject__SetActive(lVar8,uVar3 & 1,0);
    uVar5 = DG_Tweening_TweenExtensions__IsActive(*(undefined8 *)(param_1 + 0xa8),0);
    if ((uVar5 & 1) == 0) {
      CookOrder_Cooking_Implement_CookingCustomerView__SetPatienceFill(fVar15,param_1);
    }
    lVar6 = *(long *)(param_1 + 0xd8);
    lVar8 = 1;
    if (*(int *)(param_1 + 0xec) != 2) {
      lVar8 = 2;
    }
    lVar1 = 0;
    if (*(int *)(param_1 + 0xec) != 3) {
      lVar1 = lVar8;
    }
    if ((lVar6 != 0) && (2 < *(int *)(lVar6 + 0x18))) {
      uVar10 = *(undefined8 *)(lVar6 + lVar1 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar5 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0xd8);
        if (lVar8 == 0) goto LAB_044d3c64;
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar1) {
LAB_044d3c60:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_044d3c64;
        UnityEngine_UI_Image__set_sprite
                  (*(long *)(param_1 + 0xc0),*(undefined8 *)(lVar8 + lVar1 * 8 + 0x20),0);
      }
    }
  }
  if ((uVar3 & 1) == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(int *)(param_1 + 0xec) < 3;
  }
  uVar5 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                    (*(undefined8 *)(param_1 + 0xe0));
  if (((uVar5 & 1) != 0) && ((bool)*(char *)(param_1 + 0x86) != bVar9)) {
    lVar8 = *(long *)(param_1 + 0xe0);
    if (bVar9 == false) {
      if (lVar8 == 0) goto LAB_044d3c64;
      CookOrder_Cooking_Implement_CookingCustomerHandle__ReleaseAngry();
    }
    else {
      if (lVar8 == 0) goto LAB_044d3c64;
      CookOrder_Cooking_Implement_CookingCustomerHandle__HoldAngry(lVar8,1);
    }
    *(bool *)(param_1 + 0x86) = bVar9;
  }
  if ((uVar3 & 1) == 0) {
    if (*(char *)(param_1 + 0x85) == '\0') {
      return;
    }
    cVar2 = false;
  }
  else {
    cVar2 = *(int *)(param_1 + 0xec) == 1;
    if (*(char *)(param_1 + 0x85) == cVar2) {
      return;
    }
  }
  lVar8 = *(long *)(param_1 + 0x90);
  *(char *)(param_1 + 0x85) = cVar2;
  if (lVar8 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar8,0,0);
    cVar2 = *(char *)(param_1 + 0x85);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (cVar2 == '\0') {
    if (lVar8 != 0) {
      UnityEngine_Transform__set_localPosition
                (*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                 *(undefined4 *)(param_1 + 0xa0),lVar8,0);
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        UnityEngine_ParticleSystem__Stop(*(long *)(param_1 + 0x58),0);
        return;
      }
    }
  }
  else {
    uVar10 = DG_Tweening_ShortcutExtensions__DOShakePosition
                       (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),0x42b40000,
                        lVar8,*(undefined4 *)(param_1 + 0x70),0,1,0,0);
    uVar10 = FUN_04d962f4(uVar10,0xffffffff,1,DAT_091dbf48);
    *(undefined8 *)(param_1 + 0x90) = uVar10;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar10,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      UnityEngine_ParticleSystem__Play(*(long *)(param_1 + 0x58),0);
      return;
    }
  }
LAB_044d3c64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

