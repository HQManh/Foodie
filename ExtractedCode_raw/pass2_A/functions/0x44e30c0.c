// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingVariantCompositeView$$Apply
// address: 0x44e30c0
// body: available
// range: 0x44e30c0-0x44e35b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e3288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e3508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e35a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e35a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e35a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e35b0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044e35ac) */

void CookOrder_Cooking_Implement_CookingVariantCompositeView__Apply(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  
  if ((DAT_09518375 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c98f8);
    FUN_03f5c2a4(&DAT_091ca348);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_09178650);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4f0);
    FUN_03f5c2a4(&DAT_0917aba0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ada28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e80b8);
    FUN_03f5c2a4(&DAT_0918f7a8);
    DAT_09518375 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x40);
  if (lVar11 != 0) {
    uVar4 = 0;
    iVar15 = -1;
    uVar13 = 0xffffffff;
    while ((int)uVar4 < (int)*(uint *)(lVar11 + 0x18)) {
      lVar11 = FUN_04b08b78(param_2,DAT_091cb1e8);
      lVar6 = *(long *)(param_1 + 0x40);
      if (lVar6 == 0) goto LAB_044e3288;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_044e35a0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_044e3288;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar16 = 0;
        uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar16) goto LAB_044e35a0;
          if (lVar11 == 0) goto LAB_044e3288;
          uVar7 = FUN_057e2274(lVar11,*(undefined8 *)(lVar6 + 0x20 + uVar16 * 8),DAT_091ada28);
          if ((uVar7 & 1) == 0) {
            lVar11 = *(long *)(param_1 + 0x40);
            uVar14 = uVar13;
            goto LAB_044e3280;
          }
          uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      lVar11 = *(long *)(param_1 + 0x40);
      if (lVar11 == 0) goto LAB_044e3288;
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_044e35a0;
      lVar6 = *(long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_044e3288;
      iVar3 = *(int *)(lVar6 + 0x18);
      iVar2 = iVar15;
      if (iVar15 <= iVar3) {
        iVar2 = iVar3;
      }
      bVar1 = iVar3 <= iVar15;
      iVar15 = iVar2;
      uVar14 = uVar4;
      if (bVar1) {
        uVar14 = uVar13;
      }
LAB_044e3280:
      uVar4 = uVar4 + 1;
      uVar13 = uVar14;
      if (lVar11 == 0) goto LAB_044e3288;
    }
    if ((int)uVar13 < 0) {
      uVar10 = 0;
    }
    else {
      if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_044e35a0;
      lVar6 = *(long *)(lVar11 + (ulong)uVar13 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_044e3288;
      uVar10 = *(undefined8 *)(lVar6 + 0x18);
    }
    if (*(int *)(DAT_0918f7a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f7a8 + 0xb8);
    lVar6 = puVar8[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918f7a8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f7a8 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar6 = thunk_FUN_03f9944c(DAT_09178650);
      FUN_05324070(lVar6,uVar12,DAT_091e80b8,0);
      plVar5 = (long *)(*(long *)(DAT_0918f7a8 + 0xb8) + 8);
      *plVar5 = lVar6;
      thunk_FUN_03f5d7b8(plVar5,lVar6);
    }
    uVar12 = FUN_04af8044(lVar11,lVar6,DAT_091ca348);
    plVar5 = (long *)FUN_04add4b8(uVar12,DAT_091c98f8);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 == 0) goto LAB_044e3398;
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_044e3380;
    }
  }
LAB_044e3288:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar9 = piVar9 + 4;
    if (uVar16 == 0) break;
LAB_044e3380:
    if (*(long *)(piVar9 + -2) == DAT_0917a4f0) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044e33b4;
    }
  }
LAB_044e3398:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a4f0,0);
LAB_044e33b4:
  plVar5 = (long *)(*(code *)*puVar8)(plVar5,puVar8[1]);
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar11 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044e3438;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044e3438:
    uVar16 = (*(code *)*puVar8)(plVar5,puVar8[1]);
    if ((uVar16 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar5;
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar16 == 0) goto LAB_044e3554;
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar11 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917aba0) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_044e349c;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917aba0,0);
LAB_044e349c:
    lVar11 = (*(code *)*puVar8)(plVar5,puVar8[1]);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = UnityEngine_Object__op_Implicit(lVar11,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar11,uVar10,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar11,uVar4 & 1,0);
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar9 = piVar9 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044e3570;
    }
  }
LAB_044e3554:
  puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_044e3570:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return;
}

