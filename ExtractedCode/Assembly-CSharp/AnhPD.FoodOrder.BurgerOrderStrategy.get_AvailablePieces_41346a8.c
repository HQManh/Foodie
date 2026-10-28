// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$get_AvailablePieces
// address: 0x41346a8
// body: available
// range: 0x41346a8-0x4134a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4134988 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a40 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4134a5c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04134a58) */
/* WARNING: Removing unreachable block (ram,0x04134a20) */

long AnhPD_FoodOrder_BurgerOrderStrategy__get_AvailablePieces(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_48;
  
  if ((DAT_09516356 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091710b0);
    FUN_03f5c2a4(&DAT_091820b8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_0917bd88);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516356 = 1;
  }
  plVar13 = (long *)(param_1 + 0x40);
  uStack_48 = 0;
  if (*plVar13 != 0) {
    return *plVar13;
  }
  if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    lVar14 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0);
    lVar3 = thunk_FUN_03f9944c(DAT_0917bd88);
    FUN_0579924c(lVar3,DAT_091ab600);
    *plVar13 = lVar3;
    thunk_FUN_03f5d7b8(plVar13,lVar3);
    uVar4 = DAT_091710b0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    lVar3 = System_Enum__GetValues(uVar4,0);
    if (lVar3 != 0) {
      plVar5 = (long *)System_Array__GetEnumerator(lVar3,0);
joined_r0x04134808:
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04134874;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_04134874:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
          if (plVar5 == (long *)0x0) goto LAB_04134a14;
          lVar3 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar11 == 0) goto LAB_041349ec;
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_041349d4;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_041348dc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_041348dc:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(*plVar7 + 0x40) != *(long *)(DAT_091820b8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        puVar8 = (undefined4 *)thunk_FUN_03f99594();
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *puVar8;
        uVar11 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece(lVar14,uVar1,&uStack_48,0);
        lVar3 = DAT_091ab610;
      } while ((uVar11 & 1) == 0);
      lVar9 = *plVar13;
      if (lVar9 != 0) {
        lVar10 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
          }
          else {
            FUN_05799adc(lVar9,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x04134808;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_041349d4:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04134a08;
    }
  }
LAB_041349ec:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_04134a08:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_04134a14:
  return *plVar13;
}

