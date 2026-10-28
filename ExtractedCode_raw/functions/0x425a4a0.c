// rea decompile_all
// name: CakeOrder.UICurrencyCounter$$AddHoldingSourcess
// address: 0x425a4a0
// body: available
// range: 0x425a4a0-0x425a91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425a904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425a908 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425a90c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425a914 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425a918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0425a8b8) */
/* WARNING: Removing unreachable block (ram,0x0425a910) */

void CakeOrder_UICurrencyCounter__AddHoldingSourcess(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_09516f41 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a538);
    FUN_03f5c2a4(&DAT_0917abe8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09185f10);
    FUN_03f5c2a4(&DAT_091ad418);
    FUN_03f5c2a4(&DAT_091ad420);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dc890);
    DAT_09516f41 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar8 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917a538) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0425a5a0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a538,0);
LAB_0425a5a0:
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  bVar2 = false;
joined_r0x0425a5f4:
  do {
    do {
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0425a644;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0425a644:
        uVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0425a8ac;
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 == 0) goto LAB_0425a884;
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0425a86c;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917abe8) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0425a6a8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917abe8,0);
LAB_0425a6a8:
        plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      } while (plVar5 == (long *)0x0);
      if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = FUN_057e1004(param_1[0x12],plVar5,DAT_091ad420);
    } while ((uVar11 & 1) != 0);
    lVar8 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185f10) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0425a720;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185f10,0);
LAB_0425a720:
    uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    uVar11 = System_String__op_Equality(uVar6,param_1[0xb],0);
    lVar8 = DAT_091ad418;
  } while ((uVar11 & 1) == 0);
  lVar7 = param_1[0x12];
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = (long)plVar5;
        thunk_FUN_03f5d7b8(plVar10,plVar5);
      }
      else {
        FUN_057e0c68(lVar7,plVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar6 = thunk_FUN_03f9944c(DAT_09191518);
      CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                (uVar6,param_1,DAT_091dc890,0);
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185f10) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0425a820;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185f10,2);
LAB_0425a820:
      bVar2 = true;
      (*(code *)*puVar3)(plVar5,uVar6,puVar3[1]);
      goto joined_r0x0425a5f4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0425a86c:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0425a8a0;
    }
  }
LAB_0425a884:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0425a8a0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0425a8ac:
  if ((bVar2) &&
     ((**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200)),
     (char)param_1[5] != '\0')) {
    Utilities_UINumberCounterAbstract__SyncData(param_1,0);
  }
  return;
}

