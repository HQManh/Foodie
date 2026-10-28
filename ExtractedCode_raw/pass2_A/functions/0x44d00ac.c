// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$Bind
// address: 0x44d00ac
// body: available
// range: 0x44d00ac-0x44d1023 inclusive
// range: 0x44d1028-0x44d1757 inclusive
// range: 0x44d175c-0x44d175f inclusive
// range: 0x44d1764-0x44d1767 inclusive
// range: 0x44d176c-0x44d176f inclusive
// range: 0x44d17b8-0x44d184f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d1020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1754 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d175c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d176c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1828 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1830 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d183c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d1844 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d184c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044d10c4) */
/* WARNING: Removing unreachable block (ram,0x044d1840) */

void CookOrder_Cooking_Implement_CookingCustomerView__Bind
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,long param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  int *piVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  undefined4 uVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double local_b0;
  long **pplStack_a8;
  long **local_a0;
  long *local_98;
  long *local_90;
  int local_88;
  uint local_84;
  
  if ((DAT_095182d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55d0);
    FUN_03f5c2a4(&DAT_0919d660);
    FUN_03f5c2a4(&DAT_091c9400);
    FUN_03f5c2a4(&DAT_091c9fd8);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cad58);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb428);
    FUN_03f5c2a4(&DAT_09178630);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_091cd628);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091aa628);
    FUN_03f5c2a4(&DAT_091abeb0);
    FUN_03f5c2a4(&DAT_091abea8);
    FUN_03f5c2a4(&DAT_091aa620);
    FUN_03f5c2a4(&DAT_091aa630);
    FUN_03f5c2a4(&DAT_091abeb8);
    FUN_03f5c2a4(&DAT_091abec0);
    FUN_03f5c2a4(&DAT_091aa638);
    FUN_03f5c2a4(&DAT_0917ba38);
    FUN_03f5c2a4(&DAT_0917bf00);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09172998);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918c010);
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e6aa8);
    FUN_03f5c2a4(&DAT_091e6ab0);
    FUN_03f5c2a4(&DAT_091e6ac0);
    FUN_03f5c2a4(&DAT_091e6ac8);
    FUN_03f5c2a4(&DAT_091e6ae8);
    FUN_03f5c2a4(&DAT_091e6af0);
    FUN_03f5c2a4(&DAT_0918eec0);
    FUN_03f5c2a4(&DAT_0918eeb0);
    FUN_03f5c2a4(&DAT_09209eb8);
    FUN_03f5c2a4(&DAT_09209eb0);
    FUN_03f5c2a4(&DAT_092153c0);
    DAT_095182d4 = 1;
  }
  local_90 = (long *)0x0;
  local_88 = 0;
  local_84 = 0;
  local_98 = (long *)0x0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918eec0);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_044d1824;
  plVar16 = (long *)(lVar4 + 0x10);
  *plVar16 = param_6;
  thunk_FUN_03f5d7b8(plVar16,param_6);
  plVar19 = (long *)(lVar4 + 0x18);
  *plVar19 = param_5;
  thunk_FUN_03f5d7b8(plVar19,param_5);
  *(long *)(param_4 + 0x110) = *plVar19;
  thunk_FUN_03f5d7b8(param_4 + 0x110);
  lVar11 = *plVar16;
  if (lVar11 == 0) goto LAB_044d1824;
  *(undefined4 *)(param_4 + 0xe8) = *(undefined4 *)(lVar11 + 0x10);
  *(undefined1 *)(param_4 + 0x84) = *(undefined1 *)(lVar11 + 0x20);
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_044d1824;
  uVar24 = UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x20),0);
  plVar22 = (long *)(param_4 + 0xe0);
  *(undefined4 *)(param_4 + 0x98) = uVar24;
  *(undefined4 *)(param_4 + 0x9c) = param_2;
  *(undefined4 *)(param_4 + 0xa0) = param_3;
  uVar5 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(*plVar22);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(param_9,0);
    if ((uVar5 & 1) != 0) {
      if (((*plVar22 == 0) ||
          (uVar6 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(), param_9 == 0)
          ) || (lVar11 = UnityEngine_GameObject__get_transform(param_9,0), lVar11 == 0))
      goto LAB_044d1824;
      UnityEngine_Transform__get_localScale(lVar11,0);
      DG_Tweening_ShortcutExtensions__DOScale(uVar6,0);
    }
  }
  uVar5 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(*plVar22);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(param_9,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = FUN_04c35338(param_9,uVar6,DAT_091d4bc0);
      fVar27 = -1.0;
      if (*(char *)(param_4 + 0x74) != '\0') {
        fVar27 = 1.0;
      }
      if ((lVar11 == 0) || (lVar7 = UnityEngine_GameObject__get_transform(lVar11,0), lVar7 == 0))
      goto LAB_044d1824;
      UnityEngine_Transform__set_localPosition(fVar27 * *(float *)(param_4 + 0x40),0,0,lVar7,0);
      uVar6 = CookOrder_Cooking_Implement_CookingCustomerHandle__Find(lVar11);
      *(undefined8 *)(param_4 + 0xe0) = uVar6;
      thunk_FUN_03f5d7b8(plVar22,uVar6);
      fVar28 = *(float *)(param_4 + 0x44);
      fVar25 = (float)UnityEngine_Random__Range
                                (1.0 - *(float *)(param_4 + 0x48),*(float *)(param_4 + 0x48) + 1.0,0
                                );
      uVar5 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                        (*(undefined8 *)(param_4 + 0xe0));
      if ((uVar5 & 1) != 0) {
        fVar28 = fVar28 * fVar25;
        lVar11 = *(long *)(param_4 + 0xe0);
        if (*(char *)(param_4 + 0x84) == '\0') {
          fVar25 = *(float *)(param_4 + 0x40);
          if (DAT_09515cf4 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515cf4 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar29 = (double)fVar25;
          dVar26 = modf(dVar29,&local_b0);
          if (0.0 <= fVar25) {
            if (dVar26 == 0.5) {
              dVar26 = 1.0;
              goto LAB_044d0600;
            }
            dVar29 = (double)(long)(dVar29 + 0.5);
          }
          else if (dVar26 == -0.5) {
            dVar26 = -1.0;
LAB_044d0600:
            dVar29 = local_b0;
            if (((long)local_b0 & 1U) != 0) {
              dVar29 = local_b0 + dVar26;
            }
          }
          else {
            dVar29 = (double)(long)(dVar29 + -0.5);
          }
          if (lVar11 == 0) goto LAB_044d1824;
          iVar10 = (int)dVar29;
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          if (dVar29 == INFINITY) {
            iVar10 = 1;
          }
          CookOrder_Cooking_Implement_CookingCustomerHandle__WalkIn
                    (-(fVar27 * fVar25),0,fVar28,0x3e19999a,lVar11,iVar10,0);
        }
        else {
          if (lVar11 == 0) goto LAB_044d1824;
          CookOrder_Cooking_Implement_CookingCustomerHandle__LocalMove
                    (-(fVar27 * *(float *)(param_4 + 0x40)),0,fVar28,0,lVar11,0,0x1b);
        }
      }
    }
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    lVar11 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x28),0);
    if ((*plVar16 != 0) && (lVar11 != 0)) {
      UnityEngine_GameObject__SetActive(lVar11,*(char *)(*plVar16 + 0x20) == '\0',0);
      lVar11 = FUN_04a6a4f8(param_4,1,DAT_091c55d0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Implicit(lVar11,0);
      if ((uVar5 & 1) != 0) {
        if (param_7 == 0) goto LAB_044d1824;
        if (*(int *)(param_7 + 0x18) == 1) {
          lVar7 = *(long *)(DAT_091b4c28 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (((**(long **)(lVar7 + 0xb8) == 0) ||
              (lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x38), lVar7 == 0)) ||
             (lVar7 = *(long *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_044d1824;
          uVar24 = *(undefined4 *)(lVar7 + 0x10);
        }
        else {
          uVar24 = 0;
        }
        if (lVar11 == 0) goto LAB_044d1824;
        CookOrder_Cooking_Implement_CookingCustomerWeatherDisplay__ApplyEffect(lVar11,uVar24);
      }
      uVar6 = *(undefined8 *)(param_4 + 0xc0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_4 + 0xc0) == 0) goto LAB_044d1824;
        lVar11 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0xc0),0);
        uVar3 = CookOrder_Cooking_Implement_CookingCustomerView__HasTimer(*plVar16);
        if (lVar11 == 0) goto LAB_044d1824;
        UnityEngine_GameObject__SetActive(lVar11,uVar3 & 1,0);
      }
      lVar11 = *(long *)(DAT_091b4c28 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      if ((**(long **)(lVar11 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x38), lVar11 != 0)) {
        lVar11 = *(long *)(lVar11 + 0xc0);
        if ((lVar11 != 0) &&
           ((lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0 && (0 < *(int *)(lVar11 + 0x18))))) {
          *(long *)(param_4 + 0x88) = lVar11;
          thunk_FUN_03f5d7b8();
        }
        uVar6 = *(undefined8 *)(param_4 + 0xc0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar5 & 1) != 0) {
          plVar22 = *(long **)(param_4 + 0xc0);
          if (plVar22 == (long *)0x0) goto LAB_044d1824;
          uVar6 = (**(code **)(*plVar22 + 0x338))(plVar22,*(undefined8 *)(*plVar22 + 0x340));
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar5 & 1) != 0) {
            plVar22 = *(long **)(param_4 + 0xc0);
            if ((plVar22 == (long *)0x0) ||
               (lVar11 = (**(code **)(*plVar22 + 0x338))(plVar22,*(undefined8 *)(*plVar22 + 0x340)),
               lVar11 == 0)) goto LAB_044d1824;
            uVar5 = UnityEngine_Material__HasProperty(lVar11,DAT_092153c0,0);
            if ((uVar5 & 1) != 0) {
              plVar22 = *(long **)(param_4 + 0xc0);
              if (plVar22 == (long *)0x0) goto LAB_044d1824;
              uVar6 = (**(code **)(*plVar22 + 0x338))(plVar22,*(undefined8 *)(*plVar22 + 0x340));
              uVar8 = thunk_FUN_03f9944c(DAT_09187e28);
              UnityEngine_Material___ctor(uVar8,uVar6,0);
              puVar17 = (undefined8 *)(param_4 + 0xf8);
              *puVar17 = uVar8;
              thunk_FUN_03f5d7b8(puVar17,uVar8);
              plVar22 = *(long **)(param_4 + 0xc0);
              if (plVar22 == (long *)0x0) goto LAB_044d1824;
              (**(code **)(*plVar22 + 0x348))(plVar22,*puVar17,*(undefined8 *)(*plVar22 + 0x350));
            }
          }
        }
        uVar6 = thunk_FUN_03f9944c(DAT_09178628);
        FUN_05322d94(uVar6,lVar4,DAT_091e6ae8,0);
        uVar6 = FUN_04b0cafc(param_8,uVar6,DAT_091cb428);
        if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eeb0);
        }
        puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
        lVar11 = puVar17[1];
        if (lVar11 == 0) {
          if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eeb0);
            puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
          }
          uVar8 = *puVar17;
          lVar11 = thunk_FUN_03f9944c(DAT_09178630);
          FUN_053239c8(lVar11,uVar8,DAT_091e6aa8,0);
          plVar22 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 8);
          *plVar22 = lVar11;
          thunk_FUN_03f5d7b8(plVar22,lVar11);
        }
        uVar6 = FUN_04aeab54(uVar6,lVar11,DAT_091c9fd8);
        lVar11 = FUN_04b049e4(uVar6,DAT_091cad58);
        lVar7 = thunk_FUN_03f9944c(DAT_0917ba38);
        FUN_057e0400(lVar7,DAT_091aa620);
        local_84 = 0;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (0 < (int)uVar3) {
            do {
              uVar2 = local_84;
              if (uVar3 <= local_84) {
LAB_044d1828:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              if (((*plVar16 == 0) ||
                  (lVar20 = *(long *)(lVar11 + (long)(int)local_84 * 8 + 0x20), lVar20 == 0)) ||
                 (plVar22 = *(long **)(*plVar16 + 0x48), plVar22 == (long *)0x0)) goto LAB_044d1824;
              lVar12 = *plVar22;
              uVar24 = *(undefined4 *)(lVar20 + 0x20);
              uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar5 != 0) {
                piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917b510) {
                    puVar17 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_044d0b4c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar5 != 0);
              }
              puVar17 = (undefined8 *)FUN_03f95da8(plVar22,DAT_0917b510,0);
LAB_044d0b4c:
              uVar24 = (*(code *)*puVar17)(plVar22,uVar24,puVar17[1]);
              uVar6 = *(undefined8 *)(lVar20 + 0x28);
              lVar12 = *plVar19;
              if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918eeb0);
              }
              puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
              lVar23 = puVar17[2];
              if (lVar23 == 0) {
                if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918eeb0);
                  puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
                }
                uVar8 = *puVar17;
                lVar23 = thunk_FUN_03f9944c(DAT_09178620);
                FUN_053239c8(lVar23,uVar8,DAT_091e6ab0,0);
                plVar22 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 0x10);
                *plVar22 = lVar23;
                thunk_FUN_03f5d7b8(plVar22,lVar23);
              }
              uVar6 = FUN_04af6d6c(uVar6,lVar23,DAT_091ca340);
              uVar6 = FUN_04b0462c(uVar6,DAT_091cae30);
              if ((lVar12 == 0) ||
                 (lVar12 = CookOrder_Cooking_Implement_CookingMapPresentation__ResolveComposite
                                     (lVar12,uVar24,uVar6), lVar12 == 0)) goto LAB_044d1824;
              if (*(char *)(lVar12 + 0x20) == '\0') {
                if (lVar7 == 0) goto LAB_044d1824;
                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_044d0c40;
                lVar12 = FUN_057e0998(lVar7,*(int *)(lVar7 + 0x18) + -1,DAT_091aa638);
                if (lVar12 == 0) goto LAB_044d1824;
                if (1 < *(int *)(lVar12 + 0x18)) goto LAB_044d0c40;
                uVar6 = FUN_057e0998(lVar7,*(int *)(lVar7 + 0x18) + -1,DAT_091aa638);
                lVar12 = *(long *)(lVar4 + 0x20);
                if (lVar12 == 0) {
                  lVar12 = thunk_FUN_03f9944c(DAT_09178628);
                  FUN_05322d94(lVar12,lVar4,DAT_091e6af0,0);
                  *(long *)(lVar4 + 0x20) = lVar12;
                  thunk_FUN_03f5d7b8(lVar4 + 0x20,lVar12);
                }
                uVar5 = FUN_04ab6f28(uVar6,lVar12,DAT_091c9400);
                if ((uVar5 & 1) != 0) goto LAB_044d0c40;
              }
              else {
LAB_044d0c40:
                uVar6 = thunk_FUN_03f9944c(DAT_0917bf00);
                FUN_057e0400(uVar6,DAT_091abea8);
                lVar12 = DAT_091aa628;
                if (lVar7 == 0) goto LAB_044d1824;
                lVar23 = *(long *)(lVar7 + 0x10);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar23 == 0) goto LAB_044d1824;
                uVar3 = *(uint *)(lVar7 + 0x18);
                if (uVar3 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                  puVar17 = (undefined8 *)(lVar23 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar17 = uVar6;
                  thunk_FUN_03f5d7b8(puVar17,uVar6);
                }
                else {
                  FUN_057e0c68(lVar7,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar23 = FUN_057e0998(lVar7,*(int *)(lVar7 + 0x18) + -1,DAT_091aa638);
              lVar12 = DAT_091abeb0;
              if (lVar23 == 0) goto LAB_044d1824;
              lVar13 = *(long *)(lVar23 + 0x10);
              *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_044d1824;
              uVar3 = *(uint *)(lVar23 + 0x18);
              if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar23 + 0x18) = uVar3 + 1;
                plVar22 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
                *plVar22 = lVar20;
                thunk_FUN_03f5d7b8(plVar22,lVar20);
              }
              else {
                FUN_057e0c68(lVar23,lVar20,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar3 = *(uint *)(lVar11 + 0x18);
              local_84 = uVar2 + 1;
            } while ((int)local_84 < (int)uVar3);
          }
          if (lVar7 != 0) {
            iVar10 = *(int *)(lVar7 + 0x18);
            local_88 = 0;
            *(float *)(param_4 + 0xf4) = (float)iVar10;
            if (0 < iVar10) {
LAB_044d0e54:
              uVar6 = *(undefined8 *)(param_4 + 200);
              uVar8 = *(undefined8 *)(param_4 + 0xb8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar4 = FUN_04c35338(uVar6,uVar8,DAT_091d4bc0);
              uVar6 = System_Int32__ToString(&local_88,0);
              uVar6 = System_String__Concat(DAT_09209eb8,uVar6,0);
              if (lVar4 != 0) {
                UnityEngine_Object__SetName(lVar4,uVar6,0);
                UnityEngine_GameObject__SetActive(lVar4,1,0);
                lVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
                if (lVar11 != 0) {
                  plVar22 = (long *)UnityEngine_Transform__GetEnumerator(lVar11,0);
                  pplStack_a8 = &local_90;
                  local_b0 = 0.0;
                  local_a0 = &local_98;
                  do {
                    local_90 = plVar22;
                    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar11 = *plVar22;
                    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar5 != 0) {
                      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                          puVar17 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                          goto LAB_044d0f5c;
                        }
                        uVar5 = uVar5 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar17 = (undefined8 *)FUN_03f95da8(plVar22,DAT_09185b10,0);
LAB_044d0f5c:
                    uVar5 = (*(code *)*puVar17)(plVar22,puVar17[1]);
                    plVar22 = local_90;
                    if ((uVar5 & 1) == 0) goto LAB_044d1028;
                    if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar11 = *local_90;
                    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar5 != 0) {
                      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                          puVar17 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                          goto LAB_044d0fc4;
                        }
                        uVar5 = uVar5 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar17 = (undefined8 *)FUN_03f95da8(local_90,DAT_09185b10,1);
LAB_044d0fc4:
                    plVar22 = (long *)(*(code *)*puVar17)(plVar22,puVar17[1]);
                    if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar22 + 200) +
                                  (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) != DAT_0918c010))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0();
                    }
                    lVar11 = UnityEngine_Component__get_gameObject(plVar22,0);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    UnityEngine_GameObject__SetActive(lVar11,0,0);
                    plVar22 = local_90;
                  } while( true );
                }
              }
              goto LAB_044d1824;
            }
LAB_044d17b8:
            if (*(long *)(param_4 + 200) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)(param_4 + 200),0,0);
              uVar6 = *(undefined8 *)(param_4 + 0xb8);
              if (*(int *)(DAT_09187680 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar6,0);
              *(undefined1 *)(param_4 + 0x118) = 1;
              return;
            }
          }
        }
      }
    }
  }
LAB_044d1824:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_044d1028:
  plVar22 = (long *)thunk_FUN_03f99350(local_90,DAT_09185a58);
  local_98 = plVar22;
  if (plVar22 != (long *)0x0) {
    lVar11 = *plVar22;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_09185a58) {
          puVar17 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_044d10ac;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar17 = (undefined8 *)FUN_03f95da8(plVar22,DAT_09185a58,0);
LAB_044d10ac:
    (*(code *)*puVar17)(plVar22,puVar17[1]);
  }
  plVar22 = (long *)UnityEngine_GameObject__get_transform(lVar4,0);
  if (plVar22 == (long *)0x0) goto LAB_044d1824;
  if (*plVar22 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar22);
  }
  UnityEngine_RectTransform__set_sizeDelta(0x430c0000,0x43b90000,plVar22,0);
  lVar11 = FUN_057e0998(lVar7,local_88,DAT_091aa638);
  if (lVar11 == 0) goto LAB_044d1824;
  iVar10 = *(int *)(lVar11 + 0x18);
  if (0 < iVar10) {
    iVar21 = 0;
    do {
      lVar11 = FUN_057e0998(lVar7,local_88,DAT_091aa638);
      if ((lVar11 == 0) || (lVar11 = FUN_057e0998(lVar11,iVar21,DAT_091abec0), lVar11 == 0))
      goto LAB_044d1824;
      local_84 = *(uint *)(lVar11 + 0x20);
      uVar6 = System_Int32__ToString(&local_84,0);
      uVar8 = System_String__Concat(DAT_09209eb0,uVar6,0);
      plVar9 = (long *)FUN_03f5c394(DAT_09180748,1);
      uVar6 = DAT_09172998;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      lVar20 = System_Type__GetTypeFromHandle(uVar6,0);
      if (plVar9 == (long *)0x0) goto LAB_044d1824;
      if ((lVar20 != 0) &&
         (lVar12 = thunk_FUN_03f99350(lVar20,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_044d1828;
      plVar9[4] = lVar20;
      thunk_FUN_03f5d7b8(plVar9 + 4,lVar20);
      lVar20 = thunk_FUN_03f9944c(DAT_09184b68);
      UnityEngine_GameObject___ctor(lVar20,uVar8,plVar9,0);
      if ((lVar20 == 0) ||
         (plVar9 = (long *)UnityEngine_GameObject__get_transform(lVar20,0), plVar9 == (long *)0x0))
      goto LAB_044d1824;
      if (*plVar9 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar9);
      }
      UnityEngine_Transform__SetParent(plVar9,plVar22,0,0);
      UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar9,0);
      UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar9,0);
      UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar9,0);
      uVar24 = 0x42960000;
      if (iVar21 != 0) {
        uVar24 = 0xc2960000;
      }
      uVar1 = 0;
      if (iVar10 != 1) {
        uVar1 = uVar24;
      }
      UnityEngine_RectTransform__set_anchoredPosition(0,uVar1,plVar9,0);
      if ((*plVar16 == 0) || (plVar18 = *(long **)(*plVar16 + 0x48), plVar18 == (long *)0x0))
      goto LAB_044d1824;
      lVar12 = *plVar18;
      uVar24 = *(undefined4 *)(lVar11 + 0x20);
      lVar23 = *plVar19;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_0917b510) {
            puVar17 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_044d1388;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar17 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b510,0);
LAB_044d1388:
      uVar24 = (*(code *)*puVar17)(plVar18,uVar24,puVar17[1]);
      uVar6 = *(undefined8 *)(lVar11 + 0x28);
      if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eeb0);
      }
      puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
      lVar12 = puVar17[4];
      if (lVar12 == 0) {
        if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eeb0);
          puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
        }
        uVar8 = *puVar17;
        lVar12 = thunk_FUN_03f9944c(DAT_09178620);
        FUN_053239c8(lVar12,uVar8,DAT_091e6ac0,0);
        plVar18 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 0x20);
        *plVar18 = lVar12;
        thunk_FUN_03f5d7b8(plVar18,lVar12);
      }
      uVar6 = FUN_04af6d6c(uVar6,lVar12,DAT_091ca340);
      uVar6 = FUN_04b0462c(uVar6,DAT_091cae30);
      if ((lVar23 == 0) ||
         (lVar12 = CookOrder_Cooking_Implement_CookingMapPresentation__ResolveComposite
                             (lVar23,uVar24,uVar6), lVar12 == 0)) goto LAB_044d1824;
      uVar24 = 0x430c0000;
      if (*(char *)(lVar12 + 0x20) != '\0') {
        uVar24 = 0x43b90000;
      }
      UnityEngine_RectTransform__set_sizeDelta(0x430c0000,uVar24,plVar9,0);
      lVar20 = FUN_04b7c294(lVar20,DAT_091cd628);
      if ((*plVar16 == 0) || (plVar9 = *(long **)(*plVar16 + 0x48), plVar9 == (long *)0x0))
      goto LAB_044d1824;
      lVar12 = *plVar9;
      uVar24 = *(undefined4 *)(lVar11 + 0x20);
      lVar23 = *plVar19;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_0917b510) {
            puVar17 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_044d1530;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar17 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b510,0);
LAB_044d1530:
      uVar24 = (*(code *)*puVar17)(plVar9,uVar24,puVar17[1]);
      uVar6 = *(undefined8 *)(lVar11 + 0x28);
      if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eeb0);
      }
      puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
      lVar12 = puVar17[5];
      if (lVar12 == 0) {
        if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eeb0);
          puVar17 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
        }
        uVar8 = *puVar17;
        lVar12 = thunk_FUN_03f9944c(DAT_09178620);
        FUN_053239c8(lVar12,uVar8,DAT_091e6ac8,0);
        plVar9 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 0x28);
        *plVar9 = lVar12;
        thunk_FUN_03f5d7b8(plVar9,lVar12);
      }
      uVar6 = FUN_04af6d6c(uVar6,lVar12,DAT_091ca340);
      uVar6 = FUN_04b0462c(uVar6,DAT_091cae30);
      if (lVar20 == 0) goto LAB_044d1824;
      CookOrder_Cooking_Implement_CookingDishRenderer__Draw(lVar20,lVar23,uVar24,uVar6,1,0,1,0);
      if (*(long *)(param_4 + 0x100) == 0) goto LAB_044d1824;
      FUN_06ef050c(*(long *)(param_4 + 0x100),*(undefined4 *)(lVar11 + 0x20),lVar20,DAT_0919d660);
      iVar21 = iVar21 + 1;
    } while (iVar21 != iVar10);
  }
  lVar11 = UnityEngine_GameObject__get_transform(lVar4,0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  if (lVar11 == 0) goto LAB_044d1824;
  puVar14 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Transform__set_localScale(*puVar14,puVar14[1],puVar14[2],lVar11,0);
  uVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale
                    (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                     *(undefined4 *)(lVar4 + 0x14),0x3e99999a,uVar6,0);
  uVar6 = FUN_04d95c7c((float)local_88 * 0.3,uVar6,DAT_091dbe48);
  FUN_04d95e8c(uVar6,0x1b,DAT_091dbeb0);
  local_88 = local_88 + 1;
  if (*(int *)(lVar7 + 0x18) <= local_88) goto LAB_044d17b8;
  goto LAB_044d0e54;
}

