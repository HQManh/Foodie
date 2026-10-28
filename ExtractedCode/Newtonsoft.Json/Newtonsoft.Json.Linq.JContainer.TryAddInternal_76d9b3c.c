// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$TryAddInternal
// address: 0x76d9b3c
// body: available
// range: 0x76d9b3c-0x76d9e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d9d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d9e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d9e30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d9e3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d9e48 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d9e50 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d9e4c) */

undefined8
Newtonsoft_Json_Linq_JContainer__TryAddInternal
          (long *param_1,int param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  
  plVar2 = param_1;
  if ((DAT_095227b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    plVar2 = (long *)FUN_03f5c2a4(&DAT_09185b10);
    DAT_095227b7 = 1;
  }
  uVar3 = Newtonsoft_Json_Linq_JContainer__IsMultiContent(plVar2,param_3);
  lVar7 = DAT_09185b08;
  if ((uVar3 & 1) == 0) {
    uVar6 = Newtonsoft_Json_Linq_JContainer__CreateFromContent(param_3);
                    /* WARNING: Could not recover jumptable at 0x076d9c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_1 + 0x648))
                      (param_1,param_2,uVar6,param_4 & 1,param_5 & 1,
                       *(undefined8 *)(*param_1 + 0x650));
    return uVar6;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = thunk_FUN_03f99350(param_3,DAT_09185b08);
  lVar1 = DAT_09185b08;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3,lVar7);
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_3,DAT_09185b08);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3,lVar1);
  }
  lVar7 = *plVar2;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_076d9c70;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar2,lVar1,0);
LAB_076d9c70:
  plVar2 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d9cec;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076d9cec:
    uVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
      if (plVar2 == (long *)0x0) {
        return 1;
      }
      lVar7 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_076d9de4;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_076d9d54;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_076d9d54:
    uVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    Newtonsoft_Json_Linq_JContainer__TryAddInternal(param_1,param_2,uVar6,param_4 & 1,param_5 & 1);
    param_2 = param_2 + 1;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076d9e00;
    }
  }
LAB_076d9de4:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076d9e00:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return 1;
}

