// rea decompile_all
// name: Newtonsoft.Json.Utilities.TypeExtensions$$ImplementInterface
// address: 0x76a04a4
// body: available
// range: 0x76a04a4-0x76a0707 inclusive
// range: 0x76a070c-0x76a07bf inclusive
// range: 0x76a0810-0x76a0843 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a0704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a07bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a0838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a0840 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076a083c) */

undefined4
Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if ((DAT_09522613 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7a8);
    FUN_03f5c2a4(&DAT_0917ae98);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09522613 = 1;
  }
  uVar7 = 0;
  do {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__op_Inequality(param_1,0,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if ((param_1 == (long *)0x0) ||
       (plVar2 = (long *)(**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(*param_1 + 0x8d0)),
       plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a7a8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076a05c8;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a7a8,0);
LAB_076a05c8:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076a0630;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076a0630:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        uVar8 = 8;
        goto LAB_076a0724;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917ae98) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076a0694;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae98,0);
LAB_076a0694:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Type__op_Equality(uVar4,param_2,0);
      if ((uVar1 & 1) != 0) break;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Type__op_Inequality(uVar4,0,0);
    } while (((uVar1 & 1) == 0) ||
            (uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface(uVar4,param_2),
            (uVar1 & 1) == 0));
    uVar7 = 1;
    uVar8 = 7;
LAB_076a0724:
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076a0784;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076a0784:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    if ((uVar8 | 8) != 8) {
      return uVar7;
    }
    param_1 = (long *)(**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
  } while( true );
}

