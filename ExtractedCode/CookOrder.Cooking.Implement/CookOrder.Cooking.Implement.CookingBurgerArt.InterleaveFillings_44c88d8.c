// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerArt$$InterleaveFillings
// address: 0x44c88d8
// body: available
// range: 0x44c88d8-0x44c8beb inclusive
// range: 0x44c8c44-0x44c8d8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c8b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8be0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8be8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8d88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c8d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044c8be4) */

void CookOrder_Cooking_Implement_CookingBurgerArt__InterleaveFillings(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((DAT_0951829b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a810);
    FUN_03f5c2a4(&DAT_0917af10);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091b2340);
    FUN_03f5c2a4(&DAT_091b2348);
    FUN_03f5c2a4(&DAT_091e6a80);
    FUN_03f5c2a4(&DAT_0918ee90);
    DAT_0951829b = 1;
  }
  uVar11 = DAT_091801b8;
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    lVar3 = FUN_03f5c394(uVar11,7);
    if (param_1 != (long *)0x0) {
      lVar6 = *param_1;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a810) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044c8a18;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a810,0);
LAB_044c8a18:
      plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        do {
          lVar6 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_044c8a98;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044c8a98:
          uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar8 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_044c8cec;
            lVar6 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_044c8b7c;
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_044c8b64;
          }
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917af10) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_044c8afc;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917af10,0);
LAB_044c8afc:
          uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(int *)(lVar3 + 0x20 + (long)(int)uVar2 * 4) =
               *(int *)(lVar3 + 0x20 + (long)(int)uVar2 * 4) + 1;
        } while (plVar5 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  goto LAB_044c8d8c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_044c8b64:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044c8b98;
    }
  }
LAB_044c8b7c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_044c8b98:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_044c8cec:
  while( true ) {
    if (*(int *)(DAT_0918ee90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918ee90 + 0xb8);
    lVar6 = puVar4[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918ee90 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918ee90 + 0xb8);
      }
      uVar11 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_09178b98);
      FUN_05315754(lVar6,uVar11,DAT_091e6a80,0);
      plVar5 = (long *)(*(long *)(DAT_0918ee90 + 0xb8) + 8);
      *plVar5 = lVar6;
      thunk_FUN_03f5d7b8(plVar5,lVar6);
    }
    uVar8 = FUN_04ab6928(lVar3,lVar6,DAT_091c9498);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (lVar3 == 0) break;
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar8 = 0;
      lVar6 = lVar3 + 0x20;
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        lVar1 = DAT_091b2340;
        if (uVar7 <= uVar8) {
LAB_044c8d88:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (0 < *(int *)(lVar6 + uVar8 * 4)) {
          lVar9 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_044c8d8c;
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            *(int *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = (int)uVar8;
          }
          else {
            FUN_05799adc(param_2,uVar8 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
          }
          if (uVar7 <= uVar8) goto LAB_044c8d88;
          *(int *)(lVar6 + uVar8 * 4) = *(int *)(lVar6 + uVar8 * 4) + -1;
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar7);
    }
  }
LAB_044c8d8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

