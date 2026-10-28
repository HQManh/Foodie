// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer$$.ctor
// address: 0x76d7434
// body: available
// range: 0x76d7434-0x76d771b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d7674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d76d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d7718 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076d7714) */

void Newtonsoft_Json_Linq_JContainer___ctor(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((DAT_095227a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_092207c8);
    DAT_095227a2 = 1;
  }
  Newtonsoft_Json_Linq_JContainer___ctor(param_1);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092207c8,0);
  if ((param_3 == 0) || (*(char *)(param_3 + 0x10) != '\0')) {
    lVar1 = DAT_09187250;
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      lVar1 = FUN_03f5c424();
    }
    Newtonsoft_Json_Linq_JToken__CopyAnnotations(lVar1,param_1,param_2);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a5d0) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_076d7560;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a5d0,0);
LAB_076d7560:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (plVar3 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar1 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076d75e0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_076d75e0:
      uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar1 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 == 0) goto LAB_076d76c0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_076d76a8;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917ac98) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076d7644;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac98,0);
LAB_076d7644:
      uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      Newtonsoft_Json_Linq_JContainer__TryAddInternal(param_1,iVar8,uVar4,0,uVar7);
      iVar8 = iVar8 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_076d76a8:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076d76e8;
    }
  }
LAB_076d76c0:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_076d76e8:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}

