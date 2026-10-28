// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$ApplyUpgradeState
// address: 0x4313138
// body: available
// range: 0x4313138-0x43133fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4313348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43133e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43133ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43133f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43133f8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x043133f4) */

void CakeOrder_Home_HomeBuildingFadeScale__ApplyUpgradeState
               (long param_1,undefined4 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_095175d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095175d4 = 1;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_053ebbdc(*(long *)(param_1 + 0xa8),DAT_091a86c0);
  if (param_3 != (long *)0x0) {
    lVar4 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a768) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04313228;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a768,0);
LAB_04313228:
    plVar2 = (long *)(*(code *)*puVar1)(param_3,puVar1[1]);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_043132ac;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_043132ac:
      uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar2 == (long *)0x0) break;
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_04313394;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0431337c;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917ae48) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04313310;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae48,0);
LAB_04313310:
      uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      uVar5 = System_String__IsNullOrEmpty(uVar3,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(*(long *)(param_1 + 0xa8),uVar3,DAT_091a86b8);
      }
    } while( true );
  }
  goto LAB_043133c0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0431337c:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_043133b0;
    }
  }
LAB_04313394:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_043133b0:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_043133c0:
  CakeOrder_Home_HomeBuildingFadeScale__SwitchToBaseVariant(param_1,param_2,0);
  return;
}

