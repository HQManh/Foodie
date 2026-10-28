// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ReflowShelves
// address: 0x44b06f0
// body: available
// range: 0x44b06f0-0x44b0c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b0c58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b0c80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ReflowShelves
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  
  if ((DAT_09518227 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9f98);
    FUN_03f5c2a4(&DAT_091ca1b8);
    FUN_03f5c2a4(&DAT_091cacd0);
    FUN_03f5c2a4(&DAT_09178100);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6f40);
    FUN_03f5c2a4(&DAT_091e6f48);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_09518227 = 1;
  }
  uVar9 = *(undefined8 *)(param_4 + 0x330);
  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
  lVar10 = puVar4[0x19];
  if (lVar10 == 0) {
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar10 = thunk_FUN_03f9944c(DAT_09178100);
    FUN_053080bc(lVar10,uVar12,DAT_091e6f40,0);
    plVar3 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 200);
    *plVar3 = lVar10;
    thunk_FUN_03f5d7b8(plVar3,lVar10);
  }
  uVar9 = FUN_04aea4c4(uVar9,lVar10,DAT_091c9f98);
  lVar10 = FUN_04b03ebc(uVar9,DAT_091cacd0);
  if ((lVar10 != 0) && (*(long *)(param_4 + 0x1a8) != 0)) {
    iVar8 = *(int *)(lVar10 + 0x18);
    iVar1 = *(int *)(*(long *)(param_4 + 0x1a8) + 0x18);
    fVar20 = 1.0;
    if (iVar1 < iVar8) {
      param_2 = (float)iVar8;
      fVar20 = (float)iVar1 / param_2;
    }
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar11 = puVar4[0x1a];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar9 = *puVar4;
      lVar11 = thunk_FUN_03f9944c(DAT_09178100);
      FUN_053080bc(lVar11,uVar9,DAT_091e6f48,0);
      plVar3 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xd0);
      *plVar3 = lVar11;
      thunk_FUN_03f5d7b8(plVar3,lVar11);
    }
    uVar9 = FUN_04aec458(lVar10,lVar11,DAT_091ca1b8);
    lVar11 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6ef0(lVar11,uVar9,DAT_091a82a0);
    if (*(long *)(param_4 + 0x100) != 0) {
      FUN_053d74ac(*(long *)(param_4 + 0x100),DAT_091a82b8);
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar13 = 0;
        uVar5 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        puVar14 = (undefined4 *)(lVar10 + 0x28);
        do {
          if (uVar5 <= uVar13) goto LAB_044b0c80;
          uVar9 = CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfAt(param_4,*puVar14)
          ;
          uVar16 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DesiredShelfPosition
                             (fVar20,param_4,uVar13 & 0xffffffff,iVar8);
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_044b0c80;
          fVar18 = param_2;
          uVar19 = param_3;
          uVar17 = CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfScale
                             (fVar20,param_4,*puVar14);
          CookOrder_Cooking_Implement_CookingGameplayPresentation__MoveShelf
                    (uVar16,param_2,param_3,uVar17,fVar18,uVar19,param_4,uVar9);
          uVar5 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 4;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      lVar10 = *(long *)(param_4 + 0x1a8);
      if (lVar10 != 0) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar13) {
            lVar10 = *(long *)(param_4 + 0xf8);
            if (lVar10 != 0) {
              iVar8 = 0;
              goto LAB_044b0b4c;
            }
            break;
          }
          if (lVar11 == 0) break;
          uVar5 = FUN_053d750c(lVar11,uVar13 & 0xffffffff,DAT_091a82c0);
          if ((uVar5 & 1) == 0) {
            lVar10 = *(long *)(param_4 + 0x1a8);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_044b0c80:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar6 = *(long *)(param_4 + 0x108);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_044b0c80;
            lVar7 = *(long *)(param_4 + 0x110);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_044b0c80;
            lVar6 = lVar6 + lVar15;
            lVar7 = lVar7 + lVar15;
            CookOrder_Cooking_Implement_CookingGameplayPresentation__MoveShelf
                      (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                       *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar7 + 0x20),
                       *(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),param_4,
                       *(undefined8 *)(lVar10 + uVar13 * 8 + 0x20));
            if (iVar8 == 0) {
              if (*(long *)(param_4 + 0x100) == 0) break;
              FUN_053d8048(*(long *)(param_4 + 0x100),uVar13 & 0xffffffff,DAT_091a82b0);
            }
          }
          lVar10 = *(long *)(param_4 + 0x1a8);
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0xc;
        } while (lVar10 != 0);
      }
    }
  }
  goto LAB_044b0c58;
LAB_044b0b4c:
  if (*(int *)(lVar10 + 0x18) <= iVar8) {
    lVar10 = *(long *)(param_4 + 0x360);
    if (lVar10 != 0) {
      iVar8 = 0;
      goto LAB_044b0bc8;
    }
    goto LAB_044b0c58;
  }
  if ((*(long *)(param_4 + 0x1a8) == 0) || (lVar11 == 0)) goto LAB_044b0c58;
  uVar13 = FUN_053d750c(lVar11,iVar8 + *(int *)(*(long *)(param_4 + 0x1a8) + 0x18),DAT_091a82c0);
  if ((uVar13 & 1) == 0) {
    if (((*(long *)(param_4 + 0xf8) == 0) ||
        (lVar10 = FUN_057e0998(*(long *)(param_4 + 0xf8),iVar8,DAT_091b10b0), lVar10 == 0)) ||
       (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) goto LAB_044b0c58;
    UnityEngine_GameObject__SetActive(lVar10,0,0);
  }
  lVar10 = *(long *)(param_4 + 0xf8);
  iVar8 = iVar8 + 1;
  if (lVar10 == 0) goto LAB_044b0c58;
  goto LAB_044b0b4c;
LAB_044b0bc8:
  do {
    if (*(int *)(lVar10 + 0x18) <= iVar8) {
      return;
    }
    uVar9 = FUN_057e0998(lVar10,iVar8,DAT_091acd88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar13 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(param_4 + 0x360) == 0) break;
      lVar10 = FUN_057e0998(*(long *)(param_4 + 0x360),iVar8,DAT_091acd88);
      if ((*(long *)(param_4 + 0x100) == 0) ||
         (uVar2 = FUN_053d750c(*(long *)(param_4 + 0x100),iVar8,DAT_091a82c0), lVar10 == 0)) break;
      UnityEngine_GameObject__SetActive(lVar10,uVar2 & 1,0);
    }
    lVar10 = *(long *)(param_4 + 0x360);
    iVar8 = iVar8 + 1;
  } while (lVar10 != 0);
LAB_044b0c58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

